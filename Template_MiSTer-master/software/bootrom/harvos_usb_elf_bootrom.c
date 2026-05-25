// Copyright 2025 Dennis Michael Heine

#include <stdint.h>
#include "../include/harvos_abi.h"
#include "../supervisor/include/harvos_block.h"
#include "../supervisor/include/harvos_fs.h"
#include "../supervisor/include/harvos_mister_hps_block.h"
#include "../supervisor/include/harvos_yaml.h"

#define EI_NIDENT 16u
#define EI_CLASS 4u
#define EI_DATA 5u
#define ELFCLASS32 1u
#define ELFDATA2LSB 1u
#define ET_EXEC 2u
#define EM_RISCV 243u
#define EV_CURRENT 1u
#define PT_LOAD 1u
#define PF_X 1u
#define PF_W 2u

#define BOOT_APP_STACK_TOP 0x00178000u
#define BOOT_APP_STACK_GUARD 0x00004000u
#define BOOT_APP_LOAD_BASE 0x00100000u
#define BOOT_APP_LOAD_LIMIT (BOOT_APP_STACK_TOP - BOOT_APP_STACK_GUARD)
#define BOOT_DEBUG_WORD 0x00000420u
#define BOOT_MAX_PATH 128u
#define BOOT_MAX_BUNDLE 65536u

typedef struct {
	uint8_t ident[EI_NIDENT];
	uint16_t type;
	uint16_t machine;
	uint32_t version;
	uint32_t entry;
	uint32_t phoff;
	uint32_t shoff;
	uint32_t flags;
	uint16_t ehsize;
	uint16_t phentsize;
	uint16_t phnum;
	uint16_t shentsize;
	uint16_t shnum;
	uint16_t shstrndx;
} boot_elf32_ehdr_t;

typedef struct {
	uint32_t type;
	uint32_t offset;
	uint32_t vaddr;
	uint32_t paddr;
	uint32_t filesz;
	uint32_t memsz;
	uint32_t flags;
	uint32_t align;
} boot_elf32_phdr_t;

typedef struct {
	hvs_mister_hps_block_t hps;
	hvs_fs_t filesystems[2];
	hvs_fs_t *program_fs;
	hvs_fs_t *data_fs;
	hvs_yaml_app_config_t config;
	char app_name[HVS_YAML_MAX_NAME];
	char elf_path[BOOT_MAX_PATH];
	char config_path[BOOT_MAX_PATH];
	char data_path[BOOT_MAX_PATH];
	uint32_t entry;
	uint32_t low;
	uint32_t high;
	uint32_t params_addr;
	uint32_t content_addr;
} boot_context_t;

typedef struct {
	uint8_t *buffer;
	uint32_t cursor;
	uint32_t count;
} bundle_builder_t;

static boot_context_t g_boot;
static uint8_t g_io[512];
static uint8_t g_yaml[HVS_YAML_MAX_TEXT];
static uint8_t g_bundle[BOOT_MAX_BUNDLE];

static volatile uint32_t *reg32(uint32_t addr)
{
	return (volatile uint32_t *)(uintptr_t)addr;
}

static void debug_status(uint32_t value)
{
	*reg32(BOOT_DEBUG_WORD) = value;
}

static void zero_mem(void *ptr, uint32_t len)
{
	uint8_t *p = (uint8_t *)ptr;
	while(len--) *p++ = 0u;
}

static uint32_t str_len(const char *s)
{
	uint32_t n = 0u;
	while(s[n]) n++;
	return n;
}

static char lower_ascii(char c)
{
	if(c >= 'A' && c <= 'Z') return (char)(c + ('a' - 'A'));
	return c;
}

static int str_eq(const char *a, const char *b)
{
	uint32_t i = 0u;
	while(a[i] && b[i]) {
		if(a[i] != b[i]) return 0;
		i++;
	}
	return a[i] == b[i];
}

static int ends_with_ci(const char *s, const char *suffix)
{
	uint32_t sl = str_len(s);
	uint32_t tl = str_len(suffix);
	uint32_t i;
	if(tl > sl) return 0;
	for(i = 0u; i < tl; ++i) {
		if(lower_ascii(s[sl - tl + i]) != lower_ascii(suffix[i])) return 0;
	}
	return 1;
}

static void copy_str(char *dst, uint32_t dst_len, const char *src)
{
	uint32_t i;
	if(dst_len == 0u) return;
	for(i = 0u; i + 1u < dst_len && src[i]; ++i) dst[i] = src[i];
	dst[i] = 0;
}

static void join_path(char *dst, uint32_t dst_len, const char *base, const char *name)
{
	uint32_t i = 0u;
	uint32_t j = 0u;
	if(dst_len == 0u) return;
	while(i + 1u < dst_len && base[i]) {
		dst[i] = base[i];
		i++;
	}
	if(i > 0u && dst[i - 1u] != '/' && i + 1u < dst_len) dst[i++] = '/';
	while(i + 1u < dst_len && name[j]) dst[i++] = name[j++];
	dst[i] = 0;
}

static void app_name_from_elf(char *dst, uint32_t dst_len, const char *elf_name)
{
	uint32_t i;
	if(dst_len == 0u) return;
	for(i = 0u; i + 1u < dst_len && elf_name[i]; ++i) {
		if(elf_name[i] == '.' && ends_with_ci(&elf_name[i], ".elf")) break;
		dst[i] = elf_name[i];
	}
	dst[i] = 0;
}

static uint32_t round_up_u32(uint32_t value, uint32_t align)
{
	return (value + align - 1u) & ~(align - 1u);
}

static hvs_status_t fs_read_exact(hvs_file_t *file, uint32_t off, void *dst, uint32_t len)
{
	uint32_t actual = 0u;
	hvs_status_t st = hvs_fs_read(file, off, dst, len, &actual);
	if(st != HVS_OK) return st;
	return actual == len ? HVS_OK : HVS_ERR_IO;
}

static void write_data_bytes(uint32_t addr, const uint8_t *src, uint32_t len)
{
	volatile uint8_t *dst = (volatile uint8_t *)(uintptr_t)addr;
	uint32_t i;
	for(i = 0u; i < len; ++i) dst[i] = src[i];
}

static void zero_data_bytes(uint32_t addr, uint32_t len)
{
	volatile uint8_t *dst = (volatile uint8_t *)(uintptr_t)addr;
	uint32_t i;
	for(i = 0u; i < len; ++i) dst[i] = 0u;
}

static hvs_status_t imem_loader_write(uint32_t addr, uint32_t word)
{
	uint32_t status;
	*reg32(HARVOS_IMEM_LOADER_MMIO_BASE + HARVOS_IMEM_LOADER_REG_ADDR) = addr;
	*reg32(HARVOS_IMEM_LOADER_MMIO_BASE + HARVOS_IMEM_LOADER_REG_DATA) = word;
	*reg32(HARVOS_IMEM_LOADER_MMIO_BASE + HARVOS_IMEM_LOADER_REG_CTRL) = HARVOS_IMEM_LOADER_CMD_WRITE;
	status = *reg32(HARVOS_IMEM_LOADER_MMIO_BASE + HARVOS_IMEM_LOADER_REG_CTRL);
	if(status & HARVOS_IMEM_LOADER_STATUS_FAULT) return HVS_ERR_SECURITY;
	if((status & HARVOS_IMEM_LOADER_STATUS_DONE) == 0u) return HVS_ERR_IO;
	return HVS_OK;
}

static hvs_status_t imem_loader_lock(void)
{
	uint32_t status;
	*reg32(HARVOS_IMEM_LOADER_MMIO_BASE + HARVOS_IMEM_LOADER_REG_CTRL) =
		HARVOS_IMEM_LOADER_CMD_LOCK;
	status = *reg32(HARVOS_IMEM_LOADER_MMIO_BASE + HARVOS_IMEM_LOADER_REG_CTRL);
	return (status & HARVOS_IMEM_LOADER_STATUS_LOCKED) ? HVS_OK : HVS_ERR_IO;
}

static hvs_status_t write_exec_segment(hvs_file_t *file, const boot_elf32_phdr_t *ph)
{
	uint32_t done = 0u;
	uint32_t addr = ph->vaddr;
	while(done < ph->memsz) {
		uint32_t chunk = ph->memsz - done;
		uint32_t padded_chunk;
		uint32_t off;
		if(chunk > sizeof(g_io)) chunk = sizeof(g_io);
		padded_chunk = round_up_u32(chunk, 4u);
		zero_mem(g_io, padded_chunk);
		if(done < ph->filesz) {
			uint32_t file_chunk = ph->filesz - done;
			hvs_status_t st;
			if(file_chunk > chunk) file_chunk = chunk;
			st = fs_read_exact(file, ph->offset + done, g_io, file_chunk);
			if(st != HVS_OK) return st;
		}
		for(off = 0u; off < chunk; off += 4u) {
			uint32_t word = (uint32_t)g_io[off] |
				((uint32_t)g_io[off + 1u] << 8u) |
				((uint32_t)g_io[off + 2u] << 16u) |
				((uint32_t)g_io[off + 3u] << 24u);
			hvs_status_t st = imem_loader_write(addr + off, word);
			if(st != HVS_OK) return st;
		}
		addr += chunk;
		done += chunk;
	}
	return HVS_OK;
}

static int app_segment_bounds_ok(uint32_t vaddr, uint32_t memsz)
{
	uint32_t end = vaddr + memsz;
	if(memsz == 0u || end < vaddr) return 0;
	if(vaddr < BOOT_APP_LOAD_BASE) return 0;
	if(end > BOOT_APP_LOAD_LIMIT) return 0;
	return 1;
}

static hvs_status_t write_data_segment(hvs_file_t *file, const boot_elf32_phdr_t *ph)
{
	uint32_t done = 0u;
	while(done < ph->filesz) {
		uint32_t chunk = ph->filesz - done;
		hvs_status_t st;
		if(chunk > sizeof(g_io)) chunk = sizeof(g_io);
		st = fs_read_exact(file, ph->offset + done, g_io, chunk);
		if(st != HVS_OK) return st;
		write_data_bytes(ph->vaddr + done, g_io, chunk);
		done += chunk;
	}
	if(ph->memsz > ph->filesz) zero_data_bytes(ph->vaddr + ph->filesz, ph->memsz - ph->filesz);
	return HVS_OK;
}

static hvs_status_t classify_filesystems(boot_context_t *ctx)
{
	uint32_t i;
	ctx->program_fs = 0;
	ctx->data_fs = 0;
	for(i = 0u; i < 2u; ++i) {
		hvs_dirent_t ent;
		uint32_t idx = 0u;
		hvs_status_t st = hvs_fs_mount(&ctx->hps.drives[i], &ctx->filesystems[i]);
		if(st != HVS_OK) continue;
		if(hvs_fs_is_dir(&ctx->filesystems[i], "/data") == HVS_OK) ctx->data_fs = &ctx->filesystems[i];
		while(hvs_fs_read_dir(&ctx->filesystems[i], "/", idx++, &ent) == HVS_OK) {
			if(!ent.is_dir && ends_with_ci(ent.name, ".elf")) {
				ctx->program_fs = &ctx->filesystems[i];
				break;
			}
		}
	}
	return (ctx->program_fs && ctx->data_fs) ? HVS_OK : HVS_ERR_NOT_FOUND;
}

static hvs_status_t find_first_valid_app(boot_context_t *ctx)
{
	uint32_t idx = 0u;
	hvs_dirent_t ent;
	while(hvs_fs_read_dir(ctx->program_fs, "/", idx++, &ent) == HVS_OK) {
		hvs_file_t cfg;
		uint32_t actual = 0u;
		uint32_t n;
		hvs_status_t st;
		if(ent.is_dir || !ends_with_ci(ent.name, ".elf")) continue;
		app_name_from_elf(ctx->app_name, sizeof(ctx->app_name), ent.name);
		join_path(ctx->elf_path, sizeof(ctx->elf_path), "/", ent.name);
		join_path(ctx->config_path, sizeof(ctx->config_path), "/config", ctx->app_name);
		n = str_len(ctx->config_path);
		if(n + 5u >= sizeof(ctx->config_path)) continue;
		ctx->config_path[n++] = '.';
		ctx->config_path[n++] = 'y';
		ctx->config_path[n++] = 'a';
		ctx->config_path[n++] = 'm';
		ctx->config_path[n++] = 'l';
		ctx->config_path[n] = 0;
		join_path(ctx->data_path, sizeof(ctx->data_path), "/data", ctx->app_name);
		if(hvs_fs_is_dir(ctx->data_fs, ctx->data_path) != HVS_OK) continue;
		st = hvs_fs_open(ctx->program_fs, ctx->config_path, &cfg);
		if(st != HVS_OK || cfg.is_dir || cfg.size > sizeof(g_yaml)) continue;
		st = hvs_fs_read(&cfg, 0u, g_yaml, (uint32_t)cfg.size, &actual);
		if(st != HVS_OK || actual != (uint32_t)cfg.size) continue;
		st = hvs_yaml_parse_app_config(g_yaml, actual, ctx->app_name, &ctx->config);
		if(st == HVS_OK) return HVS_OK;
	}
	return HVS_ERR_NOT_FOUND;
}

static hvs_status_t load_elf_from_program_usb(boot_context_t *ctx)
{
	hvs_file_t file;
	boot_elf32_ehdr_t eh;
	boot_elf32_phdr_t ph;
	uint32_t file_size;
	uint32_t i;
	uint8_t entry_seen = 0u;
	uint8_t load_seen = 0u;
	hvs_status_t st = hvs_fs_open(ctx->program_fs, ctx->elf_path, &file);
	if(st != HVS_OK) return st;
	if(file.is_dir || file.size > 0xFFFFFFFFull) return HVS_ERR_BAD_FORMAT;
	file_size = (uint32_t)file.size;
	if(file_size < sizeof(eh)) return HVS_ERR_BAD_FORMAT;
	st = fs_read_exact(&file, 0u, &eh, sizeof(eh));
	if(st != HVS_OK) return st;
	if(eh.ident[0] != 0x7fu || eh.ident[1] != 'E' || eh.ident[2] != 'L' || eh.ident[3] != 'F') return HVS_ERR_BAD_FORMAT;
	if(eh.ident[EI_CLASS] != ELFCLASS32 || eh.ident[EI_DATA] != ELFDATA2LSB) return HVS_ERR_UNSUPPORTED;
	if(eh.type != ET_EXEC || eh.machine != EM_RISCV || eh.version != EV_CURRENT) return HVS_ERR_UNSUPPORTED;
	if(eh.ehsize != sizeof(eh) || eh.phentsize != sizeof(ph) || eh.phnum == 0u || eh.phnum > 16u) return HVS_ERR_BAD_FORMAT;
	if(eh.phoff + (uint32_t)eh.phnum * sizeof(ph) > file_size) return HVS_ERR_BAD_FORMAT;
	ctx->low = 0xFFFFFFFFu;
	ctx->high = 0u;
	for(i = 0u; i < eh.phnum; ++i) {
		uint32_t end;
		st = fs_read_exact(&file, eh.phoff + i * sizeof(ph), &ph, sizeof(ph));
		if(st != HVS_OK) return st;
		if(ph.type != PT_LOAD) continue;
		if(ph.memsz < ph.filesz || ph.offset + ph.filesz < ph.offset || ph.offset + ph.filesz > file_size) return HVS_ERR_BAD_FORMAT;
		if(ph.vaddr + ph.memsz < ph.vaddr || (ph.vaddr & 3u)) return HVS_ERR_BAD_FORMAT;
		if(!app_segment_bounds_ok(ph.vaddr, ph.memsz)) return HVS_ERR_SECURITY;
		if((ph.flags & PF_W) && (ph.flags & PF_X)) return HVS_ERR_SECURITY;
		end = ph.vaddr + ph.memsz;
		if(ph.vaddr < ctx->low) ctx->low = ph.vaddr;
		if(end > ctx->high) ctx->high = end;
		if((ph.flags & PF_X) && eh.entry >= ph.vaddr && eh.entry < end) entry_seen = 1u;
		load_seen = 1u;
		st = (ph.flags & PF_X) ? write_exec_segment(&file, &ph) : write_data_segment(&file, &ph);
		if(st != HVS_OK) return st;
	}
	if(!load_seen || !entry_seen) return HVS_ERR_BAD_FORMAT;
	ctx->entry = eh.entry;
	return HVS_OK;
}

static uint32_t mime_from_path(const char *path)
{
	if(ends_with_ci(path, ".html") || ends_with_ci(path, ".htm")) return HARVOS_HTTP_MIME_HTML;
	if(ends_with_ci(path, ".css")) return HARVOS_HTTP_MIME_CSS;
	if(ends_with_ci(path, ".js")) return HARVOS_HTTP_MIME_JS;
	if(ends_with_ci(path, ".png")) return HARVOS_HTTP_MIME_PNG;
	if(ends_with_ci(path, ".jpg") || ends_with_ci(path, ".jpeg")) return HARVOS_HTTP_MIME_JPEG;
	if(ends_with_ci(path, ".gif")) return HARVOS_HTTP_MIME_GIF;
	if(ends_with_ci(path, ".svg")) return HARVOS_HTTP_MIME_SVG;
	if(ends_with_ci(path, ".txt")) return HARVOS_HTTP_MIME_TEXT;
	if(ends_with_ci(path, ".php")) return HARVOS_HTTP_MIME_PHP;
	return HARVOS_HTTP_MIME_BIN;
}

static hvs_status_t bundle_add_file(hvs_fs_t *fs, bundle_builder_t *builder, const char *full_path, const char *rel_path)
{
	harvos_http_bundle_entry_t *entries;
	hvs_file_t file;
	uint32_t actual = 0u;
	uint32_t size;
	hvs_status_t st;
	if(builder->count >= HARVOS_HTTP_BUNDLE_MAX_FILES) return HVS_OK;
	if(str_len(rel_path) >= HARVOS_HTTP_BUNDLE_PATH_BYTES) return HVS_OK;
	st = hvs_fs_open(fs, full_path, &file);
	if(st != HVS_OK || file.is_dir || file.size > 0xFFFFFFFFull) return HVS_OK;
	size = (uint32_t)file.size;
	if(size > BOOT_MAX_BUNDLE - builder->cursor) return HVS_OK;
	entries = (harvos_http_bundle_entry_t *)(builder->buffer + sizeof(harvos_http_bundle_header_t));
	zero_mem(&entries[builder->count], sizeof(entries[builder->count]));
	copy_str(entries[builder->count].path, sizeof(entries[builder->count].path), rel_path);
	entries[builder->count].offset = builder->cursor;
	entries[builder->count].size = size;
	entries[builder->count].mime_type = mime_from_path(rel_path);
	st = hvs_fs_read(&file, 0u, builder->buffer + builder->cursor, size, &actual);
	if(st != HVS_OK || actual != size) return HVS_OK;
	builder->cursor = round_up_u32(builder->cursor + size, 4u);
	builder->count++;
	return HVS_OK;
}

static void bundle_scan_dir(hvs_fs_t *fs, bundle_builder_t *builder, const char *full_dir, const char *rel_dir, uint32_t depth)
{
	uint32_t idx = 0u;
	hvs_dirent_t ent;
	while(hvs_fs_read_dir(fs, full_dir, idx++, &ent) == HVS_OK) {
		char full_child[BOOT_MAX_PATH];
		char rel_child[BOOT_MAX_PATH];
		if(ent.name[0] == '.') continue;
		join_path(full_child, sizeof(full_child), full_dir, ent.name);
		if(rel_dir[0]) join_path(rel_child, sizeof(rel_child), rel_dir, ent.name);
		else join_path(rel_child, sizeof(rel_child), "/", ent.name);
		if(ent.is_dir) {
			if(depth < 3u) bundle_scan_dir(fs, builder, full_child, rel_child, depth + 1u);
		} else {
			(void)bundle_add_file(fs, builder, full_child, rel_child);
		}
	}
}

static hvs_status_t layout_app_payload(boot_context_t *ctx)
{
	ctx->params_addr = round_up_u32(ctx->high, 4096u);
	ctx->content_addr = ctx->params_addr + 4096u;
	if(ctx->content_addr + BOOT_MAX_BUNDLE > BOOT_APP_STACK_TOP - BOOT_APP_STACK_GUARD) {
		return HVS_ERR_NO_SPACE;
	}
	return HVS_OK;
}

static uint32_t build_harvttp_bundle(boot_context_t *ctx)
{
	static const char root_path[] = "/confg/harvttp/httproot";
	harvos_http_bundle_header_t *header = (harvos_http_bundle_header_t *)g_bundle;
	bundle_builder_t builder;
	if(!str_eq(ctx->app_name, "harvttp")) return 0u;
	if(hvs_fs_is_dir(ctx->program_fs, root_path) != HVS_OK) return 0u;
	zero_mem(g_bundle, round_up_u32(sizeof(harvos_http_bundle_header_t) +
		HARVOS_HTTP_BUNDLE_MAX_FILES * sizeof(harvos_http_bundle_entry_t), 4u));
	header->magic = HARVOS_HTTP_BUNDLE_MAGIC;
	header->version = HARVOS_HTTP_BUNDLE_VERSION;
	header->entry_size = sizeof(harvos_http_bundle_entry_t);
	header->data_offset = round_up_u32(sizeof(harvos_http_bundle_header_t) +
		HARVOS_HTTP_BUNDLE_MAX_FILES * sizeof(harvos_http_bundle_entry_t), 4u);
	builder.buffer = g_bundle;
	builder.cursor = header->data_offset;
	builder.count = 0u;
	bundle_scan_dir(ctx->program_fs, &builder, root_path, "", 0u);
	if(builder.count == 0u) return 0u;
	header->file_count = builder.count;
	header->total_size = builder.cursor;
	write_data_bytes(ctx->content_addr, g_bundle, header->total_size);
	return header->total_size;
}

static void write_start_params(boot_context_t *ctx, uint32_t bundle_size)
{
	harvos_app_start_params_t params;
	zero_mem(&params, sizeof(params));
	params.app_id = 1u;
	params.service_mask = ctx->config.service_mask;
	params.mem_base = ctx->low;
	params.mem_size = ctx->high - ctx->low;
	params.debug_flags = ctx->config.debug_flags;
	params.preloaded_content_vaddr = bundle_size ? ctx->content_addr : 0u;
	params.preloaded_content_size = bundle_size;
	copy_str(params.config_path, sizeof(params.config_path), ctx->config_path);
	copy_str(params.data_path, sizeof(params.data_path), ctx->data_path);
	if(str_eq(ctx->app_name, "harvttp")) {
		copy_str(params.content_root_path, sizeof(params.content_root_path), "/confg/harvttp/httproot");
	}
	write_data_bytes(ctx->params_addr, (const uint8_t *)&params, sizeof(params));
}

__attribute__((noreturn))
static void jump_to_app(uint32_t entry, uint32_t params_addr)
{
	__asm__ volatile(
		"mv a0, %0\n"
		"mv sp, %1\n"
		"jr %2\n"
		:
		: "r"(params_addr), "r"(BOOT_APP_STACK_TOP), "r"(entry)
		: "memory");
	for(;;) {}
}

void harvos_bootrom_main(void)
{
	hvs_status_t st;
	uint32_t bundle_size;
	debug_status(0xB0010001u);
	hvs_mister_hps_block_init(&g_boot.hps, HARVOS_HPS_BLOCK_MMIO_BASE);
	debug_status(0xB0010002u);
	st = classify_filesystems(&g_boot);
	if(st != HVS_OK) goto fail;
	debug_status(0xB0010003u);
	st = find_first_valid_app(&g_boot);
	if(st != HVS_OK) goto fail;
	debug_status(0xB0010004u);
	st = load_elf_from_program_usb(&g_boot);
	if(st != HVS_OK) goto fail;
	debug_status(0xB0010005u);
	st = layout_app_payload(&g_boot);
	if(st != HVS_OK) goto fail;
	bundle_size = build_harvttp_bundle(&g_boot);
	write_start_params(&g_boot, bundle_size);
	st = imem_loader_lock();
	if(st != HVS_OK) goto fail;
	debug_status(0xB0010006u);
	jump_to_app(g_boot.entry, g_boot.params_addr);

fail:
	debug_status(0xBAD00000u | ((uint32_t)(0u - (uint32_t)st) & 0x0000FFFFu));
	for(;;) {}
}
