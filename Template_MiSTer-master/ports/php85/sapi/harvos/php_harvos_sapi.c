/* Copyright 2025 Dennis Michael Heine */

#include "php_harvos_sapi.h"

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#include "main/php.h"
#include "main/php_main.h"
#include "main/php_variables.h"
#include "main/SAPI.h"
#include "Zend/zend_compile.h"
#include "Zend/zend_exceptions.h"
#include "Zend/zend_stream.h"

static int g_harvos_php_started;
static char *g_harvos_php_ini;

static const char g_harvos_php_default_ini[] =
	"html_errors=0\n"
	"implicit_flush=1\n"
	"output_buffering=0\n"
	"expose_php=0\n"
	"log_errors=1\n"
	"display_errors=0\n"
	"allow_url_fopen=0\n"
	"allow_url_include=0\n"
	"enable_dl=0\n"
	"file_uploads=0\n"
	"max_input_vars=256\n"
	"memory_limit=2M\n"
	"max_execution_time=2\n"
	"open_basedir=/confg/harvttp/httproot:/data/harvttp\n"
	"disable_functions=dl,mail,mb_send_mail,shell_exec,exec,system,"
	"proc_open,popen,passthru,pcntl_exec,fsockopen,pfsockopen,"
	"stream_socket_client,stream_socket_server,stream_socket_pair\n";

typedef struct {
	const char *data;
	size_t len;
	size_t off;
} harvos_php_stream_t;

static size_t harvos_str_len(const char *s)
{
	const char *p = s;
	if(!s) return 0u;
	while(*p) ++p;
	return (size_t)(p - s);
}

static char *harvos_ini_join(const char *a, const char *b)
{
	size_t alen = harvos_str_len(a);
	size_t blen = harvos_str_len(b);
	char *out = (char *)malloc(alen + blen + 2u);
	if(!out) return NULL;
	if(alen) memcpy(out, a, alen);
	if(blen) {
		out[alen] = '\n';
		memcpy(out + alen + 1u, b, blen);
		out[alen + blen + 1u] = '\0';
	} else {
		out[alen] = '\0';
	}
	return out;
}

static void harvos_u16_to_dec(uint16_t value, char *out, size_t out_cap)
{
	char tmp[6];
	size_t n = 0u;
	size_t i;
	if(!out_cap) return;
	if(value == 0u) {
		out[0] = '0';
		if(out_cap > 1u) out[1] = '\0';
		return;
	}
	while(value && n < sizeof(tmp)) {
		tmp[n++] = (char)('0' + (value % 10u));
		value = (uint16_t)(value / 10u);
	}
	for(i = 0u; i < n && i + 1u < out_cap; ++i) {
		out[i] = tmp[n - 1u - i];
	}
	out[i] = '\0';
}

static int harvos_append(char *dst, size_t cap, size_t *off, const char *src, size_t len)
{
	size_t room;
	if(!dst || !off) return 0;
	if(*off >= cap) return 0;
	room = cap - *off;
	if(len >= room) {
		if(room) memcpy(dst + *off, src, room - 1u);
		*off = cap - 1u;
		dst[*off] = '\0';
		return 0;
	}
	if(len) memcpy(dst + *off, src, len);
	*off += len;
	dst[*off] = '\0';
	return 1;
}

static ssize_t harvos_stream_read(void *handle, char *buf, size_t len)
{
	harvos_php_stream_t *stream = (harvos_php_stream_t *)handle;
	size_t n;
	if(!stream || !buf) return -1;
	if(stream->off >= stream->len) return 0;
	n = stream->len - stream->off;
	if(n > len) n = len;
	if(n) memcpy(buf, stream->data + stream->off, n);
	stream->off += n;
	return (ssize_t)n;
}

static size_t harvos_stream_size(void *handle)
{
	harvos_php_stream_t *stream = (harvos_php_stream_t *)handle;
	return stream ? stream->len : (size_t)-1;
}

static void harvos_stream_close(void *handle)
{
	(void)handle;
}

static int harvos_sapi_startup(sapi_module_struct *sapi_module)
{
	return php_module_startup(sapi_module, NULL);
}

static size_t harvos_sapi_write(const char *str, size_t str_length)
{
	harvos_php85_request_t *request = (harvos_php85_request_t *)SG(server_context);
	if(!request || !request->output || !request->output_cap) return str_length;
	if(!harvos_append(request->output, request->output_cap, &request->output_len, str, str_length)) {
		request->result_flags |= HARVOS_PHP85_RESULT_TRUNCATED;
	}
	return str_length;
}

static void harvos_sapi_flush(void *server_context)
{
	(void)server_context;
}

static void harvos_sapi_send_header(sapi_header_struct *sapi_header, void *server_context)
{
	harvos_php85_request_t *request = (harvos_php85_request_t *)server_context;
	if(!request || !sapi_header || !request->headers || !request->headers_cap) return;
	if(!harvos_append(request->headers, request->headers_cap, &request->headers_len,
		sapi_header->header, sapi_header->header_len) ||
	   !harvos_append(request->headers, request->headers_cap, &request->headers_len,
		"\r\n", 2u)) {
		request->result_flags |= HARVOS_PHP85_RESULT_HEADER_TRUNCATED;
	}
}

static int harvos_sapi_send_headers(sapi_headers_struct *sapi_headers)
{
	harvos_php85_request_t *request = (harvos_php85_request_t *)SG(server_context);
	if(request && sapi_headers) {
		request->response_code = (uint32_t)sapi_headers->http_response_code;
	}
	return SAPI_HEADER_SENT_SUCCESSFULLY;
}

static size_t harvos_sapi_read_post(char *buffer, size_t count_bytes)
{
	harvos_php85_request_t *request = (harvos_php85_request_t *)SG(server_context);
	size_t n;
	if(!request || !buffer || !request->post_body) return 0u;
	if(request->_post_offset >= request->post_body_len) return 0u;
	n = request->post_body_len - request->_post_offset;
	if(n > count_bytes) n = count_bytes;
	if(n) {
		memcpy(buffer, request->post_body + request->_post_offset, n);
		request->_post_offset += n;
	}
	return n;
}

static char *harvos_sapi_read_cookies(void)
{
	harvos_php85_request_t *request = (harvos_php85_request_t *)SG(server_context);
	return request ? (char *)request->cookie_data : NULL;
}

static void harvos_register_variable(zval *array, const char *name, const char *value)
{
	if(name && value) {
		php_register_variable_safe(name, value, harvos_str_len(value), array);
	}
}

static void harvos_sapi_register_variables(zval *track_vars_array)
{
	harvos_php85_request_t *request = (harvos_php85_request_t *)SG(server_context);
	char server_port[6];
	char remote_port[6];
	char content_length[16];
	size_t len = 0u;
	size_t value = 0u;

	if(!request) return;

	harvos_u16_to_dec(request->server_port ? request->server_port : 80u,
		server_port, sizeof(server_port));
	harvos_u16_to_dec(request->remote_port, remote_port, sizeof(remote_port));
	while(request->post_body_len / 10u >= value && value < request->post_body_len) {
		value = value ? value * 10u : 1u;
	}
	if(request->post_body_len == 0u) {
		content_length[len++] = '0';
	} else {
		while(value) {
			content_length[len++] = (char)('0' + ((request->post_body_len / value) % 10u));
			value /= 10u;
		}
	}
	content_length[len] = '\0';

	harvos_register_variable(track_vars_array, "SERVER_SOFTWARE", "HarvTTP/PHP-8.5-HarvOS");
	harvos_register_variable(track_vars_array, "GATEWAY_INTERFACE", "CGI/1.1");
	harvos_register_variable(track_vars_array, "SERVER_PROTOCOL", "HTTP/1.0");
	harvos_register_variable(track_vars_array, "SERVER_ADDR", request->server_addr);
	harvos_register_variable(track_vars_array, "REMOTE_ADDR", request->remote_addr);
	harvos_register_variable(track_vars_array, "SERVER_PORT", server_port);
	harvos_register_variable(track_vars_array, "REMOTE_PORT", remote_port);
	harvos_register_variable(track_vars_array, "REQUEST_METHOD", request->method ? request->method : "GET");
	harvos_register_variable(track_vars_array, "REQUEST_URI", request->request_uri);
	harvos_register_variable(track_vars_array, "QUERY_STRING", request->query_string ? request->query_string : "");
	harvos_register_variable(track_vars_array, "SCRIPT_NAME", request->script_name);
	harvos_register_variable(track_vars_array, "PHP_SELF", request->script_name);
	harvos_register_variable(track_vars_array, "DOCUMENT_ROOT", request->document_root);
	harvos_register_variable(track_vars_array, "CONTENT_TYPE", request->content_type ? request->content_type : "");
	harvos_register_variable(track_vars_array, "CONTENT_LENGTH", content_length);
}

static void harvos_sapi_log_message(const char *message, int syslog_type_int)
{
	(void)message;
	(void)syslog_type_int;
}

static zend_result harvos_sapi_request_time(double *request_time)
{
	if(request_time) *request_time = 0.0;
	return SUCCESS;
}

static sapi_module_struct harvos_sapi_module = {
	"harvos",
	"HarvOS PHP 8.5 SAPI",

	harvos_sapi_startup,
	php_module_shutdown_wrapper,

	NULL,
	NULL,

	harvos_sapi_write,
	harvos_sapi_flush,
	NULL,
	NULL,

	php_error,

	NULL,
	harvos_sapi_send_headers,
	harvos_sapi_send_header,

	harvos_sapi_read_post,
	harvos_sapi_read_cookies,

	harvos_sapi_register_variables,
	harvos_sapi_log_message,
	harvos_sapi_request_time,
	NULL,

	STANDARD_SAPI_MODULE_PROPERTIES
};

int harvos_php85_startup(const char *extra_ini)
{
	if(g_harvos_php_started) return HARVOS_PHP85_OK;

	g_harvos_php_ini = harvos_ini_join(g_harvos_php_default_ini, extra_ini);
	if(!g_harvos_php_ini) return HARVOS_PHP85_ERR_STARTUP;

	sapi_startup(&harvos_sapi_module);
	harvos_sapi_module.phpinfo_as_text = 1;
	harvos_sapi_module.ini_entries = g_harvos_php_ini;

	if(harvos_sapi_module.startup(&harvos_sapi_module) == FAILURE) {
		free(g_harvos_php_ini);
		g_harvos_php_ini = NULL;
		return HARVOS_PHP85_ERR_STARTUP;
	}

	g_harvos_php_started = 1;
	return HARVOS_PHP85_OK;
}

int harvos_php85_shutdown(void)
{
	if(!g_harvos_php_started) return HARVOS_PHP85_OK;

	php_module_shutdown();
	sapi_shutdown();
	free(g_harvos_php_ini);
	g_harvos_php_ini = NULL;
	g_harvos_php_started = 0;
	return HARVOS_PHP85_OK;
}

int harvos_php85_execute(harvos_php85_request_t *request)
{
	zend_file_handle file_handle;
	harvos_php_stream_t stream;
	int ok;

	if(!request ||
	   request->abi_version != HARVOS_PHP85_ABI_VERSION ||
	   !request->script_name ||
	   !request->script_source ||
	   !request->script_source_len ||
	   !request->output ||
	   !request->output_cap) {
		return HARVOS_PHP85_ERR_ARG;
	}
	if(!g_harvos_php_started && harvos_php85_startup(NULL) != HARVOS_PHP85_OK) {
		return HARVOS_PHP85_ERR_STARTUP;
	}

	request->output_len = 0u;
	request->headers_len = 0u;
	request->result_flags = 0u;
	request->response_code = 200u;
	request->_post_offset = 0u;
	request->output[0] = '\0';
	if(request->headers && request->headers_cap) request->headers[0] = '\0';

	SG(server_context) = request;
	SG(options) |= SAPI_OPTION_NO_CHDIR;
	SG(request_info).argc = 0;
	SG(request_info).argv = NULL;
	SG(request_info).request_method = request->method ? request->method : "GET";
	SG(request_info).content_type = request->content_type;
	SG(request_info).content_length = (zend_long)request->post_body_len;
	SG(request_info).query_string = request->query_string ? estrdup(request->query_string) : NULL;
	SG(request_info).request_uri = request->request_uri ? estrdup(request->request_uri) : NULL;
	SG(request_info).path_translated = estrdup(request->script_name);
	SG(request_info).headers_only = (request->flags & HARVOS_PHP85_FLAG_HEADERS_ONLY) ? 1 : 0;
	SG(request_info).no_headers = 0;

	if(php_request_startup() == FAILURE) {
		SG(server_context) = NULL;
		return HARVOS_PHP85_ERR_REQUEST;
	}

	memset(&file_handle, 0, sizeof(file_handle));
	stream.data = request->script_source;
	stream.len = request->script_source_len;
	stream.off = 0u;
	file_handle.type = ZEND_HANDLE_STREAM;
	file_handle.primary_script = 1;
	file_handle.filename = zend_string_init(request->script_name, harvos_str_len(request->script_name), 0);
	file_handle.handle.stream.handle = &stream;
	file_handle.handle.stream.isatty = 0;
	file_handle.handle.stream.reader = harvos_stream_read;
	file_handle.handle.stream.fsizer = harvos_stream_size;
	file_handle.handle.stream.closer = harvos_stream_close;

	zend_first_try {
		ok = php_execute_script(&file_handle) ? 1 : 0;
	} zend_catch {
		ok = 0;
	} zend_end_try();

	zend_destroy_file_handle(&file_handle);

	zend_try {
		if(EG(exception)) {
			zend_exception_error(EG(exception), E_ERROR);
		}
	} zend_end_try();

	zend_try {
		php_request_shutdown(NULL);
	} zend_end_try();

	SG(server_context) = NULL;
	return ok ? HARVOS_PHP85_OK : HARVOS_PHP85_ERR_EXEC;
}
