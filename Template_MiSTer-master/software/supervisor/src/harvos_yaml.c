// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_yaml.h"

static void zero(void *ptr, uint32_t len)
{
	uint8_t *p = (uint8_t *)ptr;
	while(len--) *p++ = 0;
}

static uint32_t str_len(const char *s)
{
	uint32_t n = 0;
	while(s[n]) ++n;
	return n;
}

static char lower_ascii(char c)
{
	if(c >= 'A' && c <= 'Z') return (char)(c + ('a' - 'A'));
	return c;
}

static int streq_ci(const char *a, const char *b)
{
	uint32_t i = 0;
	while(a[i] && b[i]) {
		if(lower_ascii(a[i]) != lower_ascii(b[i])) return 0;
		++i;
	}
	return a[i] == b[i];
}

static void copy_token(char *dst, uint32_t dst_len, const char *src, uint32_t len)
{
	uint32_t i;
	if(dst_len == 0u) return;
	for(i = 0; i + 1u < dst_len && i < len; ++i) dst[i] = src[i];
	dst[i] = 0;
}

static int is_space(char c)
{
	return c == ' ' || c == '\r';
}

static void trim(const char **start, const char **end)
{
	while(*start < *end && is_space(**start)) (*start)++;
	while(*end > *start && is_space((*end)[-1])) (*end)--;
}

static hvs_status_t parse_u32(const char *start, const char *end, uint32_t *out)
{
	uint32_t value = 0;
	if(start == end) return HVS_ERR_BAD_FORMAT;
	while(start < end) {
		if(*start < '0' || *start > '9') return HVS_ERR_BAD_FORMAT;
		if(value > (0xFFFFFFFFu - (uint32_t)(*start - '0')) / 10u) return HVS_ERR_BAD_FORMAT;
		value = value * 10u + (uint32_t)(*start - '0');
		start++;
	}
	*out = value;
	return HVS_OK;
}

static hvs_status_t service_bit(const char *start, const char *end, uint32_t *bit)
{
	char name[24];
	copy_token(name, sizeof(name), start, (uint32_t)(end - start));
	if(streq_ci(name, "storage")) *bit = HVS_YAML_SERVICE_STORAGE;
	else if(streq_ci(name, "net")) *bit = HVS_YAML_SERVICE_NET;
	else if(streq_ci(name, "ipc")) *bit = HVS_YAML_SERVICE_IPC;
	else if(streq_ci(name, "debug")) *bit = HVS_YAML_SERVICE_DEBUG;
	else if(streq_ci(name, "dma")) *bit = HVS_YAML_SERVICE_DMA;
	else if(streq_ci(name, "mmio")) *bit = HVS_YAML_SERVICE_MMIO;
	else return HVS_ERR_BAD_FORMAT;
	return HVS_OK;
}

static hvs_status_t parse_service_list(const char *start, const char *end, uint32_t *mask)
{
	const char *p = start;
	uint8_t bracketed = 0u;
	if(p < end && *p == '[') {
		bracketed = 1u;
		p++;
	}
	while(p < end) {
		const char *tok_start;
		const char *tok_end;
		uint32_t bit;
		while(p < end && (is_space(*p) || *p == ',')) p++;
		if(bracketed && p < end && *p == ']') {
			p++;
			while(p < end && is_space(*p)) p++;
			return (p == end) ? HVS_OK : HVS_ERR_BAD_FORMAT;
		}
		if(!bracketed && p < end && (*p == '[' || *p == ']')) return HVS_ERR_BAD_FORMAT;
		tok_start = p;
		while(p < end && *p != ',' && *p != ']') p++;
		tok_end = p;
		trim(&tok_start, &tok_end);
		if(tok_start == tok_end) break;
		if(service_bit(tok_start, tok_end, &bit) != HVS_OK) return HVS_ERR_BAD_FORMAT;
		*mask |= bit;
		if(!bracketed && p < end && *p == ']') return HVS_ERR_BAD_FORMAT;
	}
	return bracketed ? HVS_ERR_BAD_FORMAT : HVS_OK;
}

static hvs_status_t parse_bool(const char *start, const char *end, uint32_t *value)
{
	char token[8];
	copy_token(token, sizeof(token), start, (uint32_t)(end - start));
	if(streq_ci(token, "true") || streq_ci(token, "yes") || streq_ci(token, "1")) {
		*value = 1u;
		return HVS_OK;
	}
	if(streq_ci(token, "false") || streq_ci(token, "no") || streq_ci(token, "0")) {
		*value = 0u;
		return HVS_OK;
	}
	return HVS_ERR_BAD_FORMAT;
}

static hvs_status_t reject_unsafe_yaml(const uint8_t *data, uint32_t len)
{
	uint32_t i;
	for(i = 0; i < len; ++i) {
		uint8_t c = data[i];
		if(c == '\t' || c == '&' || c == '*' || c == '{' || c == '}' || c == '`') return HVS_ERR_SECURITY;
		if(c < 0x20u && c != '\n' && c != '\r') return HVS_ERR_BAD_FORMAT;
	}
	return HVS_OK;
}

hvs_status_t hvs_yaml_parse_app_config(
	const uint8_t *data,
	uint32_t len,
	const char *expected_app_name,
	hvs_yaml_app_config_t *out)
{
	uint32_t off = 0;
	uint8_t have_name = 0;
	uint8_t service_mode = 0;
	hvs_status_t st;

	if(len == 0u || len > HVS_YAML_MAX_TEXT) return HVS_ERR_BAD_FORMAT;
	st = reject_unsafe_yaml(data, len);
	if(st != HVS_OK) return st;

	zero(out, sizeof(*out));

	while(off < len) {
		const char *line_start = (const char *)&data[off];
		const char *line_end;
		const char *key_start;
		const char *key_end;
		const char *value_start;
		const char *value_end;
		const char *colon;

		while(off < len && data[off] != '\n') off++;
		line_end = (const char *)&data[off];
		if(off < len && data[off] == '\n') off++;

		key_start = line_start;
		key_end = line_end;
		trim(&key_start, &key_end);
		if(key_start == key_end || *key_start == '#') continue;

		if(service_mode && key_start < key_end && key_start[0] == '-') {
			uint32_t bit;
			value_start = key_start + 1;
			value_end = key_end;
			trim(&value_start, &value_end);
			st = service_bit(value_start, value_end, &bit);
			if(st != HVS_OK) return st;
			out->service_mask |= bit;
			continue;
		}
		service_mode = 0u;

		colon = key_start;
		while(colon < key_end && *colon != ':') colon++;
		if(colon == key_end) return HVS_ERR_BAD_FORMAT;
		value_start = colon + 1;
		value_end = key_end;
		key_end = colon;
		trim(&key_start, &key_end);
		trim(&value_start, &value_end);

		{
			char key[24];
			copy_token(key, sizeof(key), key_start, (uint32_t)(key_end - key_start));
			if(streq_ci(key, "name")) {
			copy_token(out->app_name, sizeof(out->app_name), value_start, (uint32_t)(value_end - value_start));
			have_name = 1u;
			} else if(streq_ci(key, "services")) {
				if(value_start == value_end) service_mode = 1u;
				else {
					st = parse_service_list(value_start, value_end, &out->service_mask);
					if(st != HVS_OK) return st;
				}
			} else if(streq_ci(key, "memory") || streq_ci(key, "memory_limit")) {
				st = parse_u32(value_start, value_end, &out->memory_limit);
				if(st != HVS_OK) return st;
			} else if(streq_ci(key, "debug")) {
				uint32_t enabled;
				st = parse_bool(value_start, value_end, &enabled);
				if(st != HVS_OK) return st;
				if(enabled) out->debug_flags |= 1u;
			} else if(streq_ci(key, "version")) {
				/* accepted for forward-compatible signed configs */
			} else {
				return HVS_ERR_BAD_FORMAT;
			}
		}
	}

	if(!have_name) {
		uint32_t expected_len = str_len(expected_app_name);
		copy_token(out->app_name, sizeof(out->app_name), expected_app_name, expected_len);
	} else if(!streq_ci(out->app_name, expected_app_name)) {
		return HVS_ERR_SECURITY;
	}

	return HVS_OK;
}
