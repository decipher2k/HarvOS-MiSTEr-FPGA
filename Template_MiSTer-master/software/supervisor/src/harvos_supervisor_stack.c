// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_supervisor_stack.h"
#include "../include/harvos_pagetable.h"

struct hvs_elf_file {
	hvs_file_t fs_file;
};

static const hvs_elf_runtime_ops_t *g_isolation_memory_ops;

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

static int ends_with(const char *s, const char *suffix)
{
	uint32_t sl = str_len(s);
	uint32_t tl = str_len(suffix);
	uint32_t i;
	if(tl > sl) return 0;
	for(i = 0; i < tl; ++i) {
		char a = s[sl - tl + i];
		char b = suffix[i];
		if(a >= 'A' && a <= 'Z') a = (char)(a + ('a' - 'A'));
		if(b >= 'A' && b <= 'Z') b = (char)(b + ('a' - 'A'));
		if(a != b) return 0;
	}
	return 1;
}

static void copy_str(char *dst, uint32_t dst_len, const char *src)
{
	uint32_t i;
	if(dst_len == 0u) return;
	for(i = 0; i + 1u < dst_len && src[i]; ++i) dst[i] = src[i];
	dst[i] = 0;
}

static void join2(char *dst, uint32_t dst_len, const char *a, const char *b)
{
	uint32_t i = 0;
	uint32_t j = 0;
	if(dst_len == 0u) return;
	while(i + 1u < dst_len && a[i]) {
		dst[i] = a[i];
		i++;
	}
	while(i + 1u < dst_len && b[j]) dst[i++] = b[j++];
	dst[i] = 0;
}

static void app_name_from_elf(char *dst, uint32_t dst_len, const char *elf_name)
{
	uint32_t i;
	if(dst_len == 0u) return;
	for(i = 0; i + 1u < dst_len && elf_name[i]; ++i) {
		if(elf_name[i] == '.' && ends_with(&elf_name[i], ".elf")) break;
		dst[i] = elf_name[i];
	}
	dst[i] = 0;
}

static hvs_status_t fs_elf_read(hvs_elf_file_t *file, uint32_t offset, void *dst, uint32_t len)
{
	uint32_t actual = 0;
	hvs_status_t st = hvs_fs_read(&file->fs_file, offset, dst, len, &actual);
	if(st != HVS_OK) return st;
	return actual == len ? HVS_OK : HVS_ERR_IO;
}

static hvs_status_t fs_elf_size(hvs_elf_file_t *file, uint32_t *size)
{
	if(file->fs_file.size > 0xFFFFFFFFull) return HVS_ERR_UNSUPPORTED;
	*size = (uint32_t)file->fs_file.size;
	return HVS_OK;
}

static hvs_status_t read_config(hvs_fs_t *fs, const char *path, uint8_t *buffer, uint32_t buffer_len, uint32_t *actual)
{
	hvs_file_t file;
	hvs_status_t st;
	if(buffer_len == 0u) return HVS_ERR_INVALID;
	st = hvs_fs_open(fs, path, &file);
	if(st != HVS_OK) return st;
	if(file.is_dir || file.size > buffer_len) return HVS_ERR_BAD_FORMAT;
	return hvs_fs_read(&file, 0u, buffer, (uint32_t)file.size, actual);
}

static int str_eq(const char *a, const char *b)
{
	uint32_t i = 0;
	while(a[i] && b[i]) {
		if(a[i] != b[i]) return 0;
		i++;
	}
	return a[i] == b[i];
}

static int supports_strict_isolation(const hvs_elf_runtime_ops_t *ops)
{
	return ops != 0 &&
		ops->alloc_pages != 0 &&
		ops->read_phys_u32 != 0 &&
		ops->write_phys_u32 != 0 &&
		ops->zero_memory != 0;
}

static hvs_status_t iso_alloc_page(uint32_t *phys_page)
{
	if(g_isolation_memory_ops == 0 || g_isolation_memory_ops->alloc_pages == 0) return HVS_ERR_INVALID;
	return g_isolation_memory_ops->alloc_pages(HVS_ELF_PAGE_SIZE, HVS_ELF_PAGE_SIZE, phys_page);
}

static hvs_status_t iso_read_u32(uint32_t phys_addr, uint32_t *value)
{
	if(g_isolation_memory_ops == 0 || g_isolation_memory_ops->read_phys_u32 == 0) return HVS_ERR_INVALID;
	return g_isolation_memory_ops->read_phys_u32(phys_addr, value);
}

static hvs_status_t iso_write_u32_phys(uint32_t phys_addr, uint32_t value)
{
	if(g_isolation_memory_ops == 0 || g_isolation_memory_ops->write_phys_u32 == 0) return HVS_ERR_INVALID;
	return g_isolation_memory_ops->write_phys_u32(phys_addr, value);
}

static void iso_zero_page(uint32_t phys_page)
{
	if(g_isolation_memory_ops != 0 && g_isolation_memory_ops->zero_memory != 0) {
		g_isolation_memory_ops->zero_memory(phys_page, HVS_ELF_PAGE_SIZE);
	}
}

static const hvs_pagetable_ops_t g_pagetable_ops = {
	iso_alloc_page,
	iso_read_u32,
	iso_write_u32_phys,
	iso_zero_page
};

static hvs_status_t isolated_map_pages(uint32_t page_table_root, uint32_t vaddr, uint32_t paddr, uint32_t bytes, uint32_t pte_flags)
{
	return hvs_pagetable_map_pages(&g_pagetable_ops, page_table_root, vaddr, paddr, bytes, pte_flags);
}

static hvs_status_t isolated_guard_page(uint32_t page_table_root, uint32_t vaddr)
{
	return hvs_pagetable_guard_page(&g_pagetable_ops, page_table_root, vaddr);
}

static hvs_status_t isolated_write_u32(uint32_t page_table_root, uint32_t vaddr, uint32_t value)
{
	uint32_t phys;
	uint32_t flags;
	hvs_status_t st;

	st = hvs_pagetable_translate(&g_pagetable_ops, page_table_root, vaddr, &phys, &flags);
	if(st != HVS_OK) return st;
	if((flags & HVS_ELF_PTE_W) == 0u) return HVS_ERR_SECURITY;
	return iso_write_u32_phys(phys, value);
}

static hvs_status_t make_isolated_runtime_ops(const hvs_elf_runtime_ops_t *base, hvs_elf_runtime_ops_t *out)
{
	if(!supports_strict_isolation(base)) return HVS_ERR_UNSUPPORTED;
	*out = *base;
	out->map_pages = isolated_map_pages;
	out->write_u32 = isolated_write_u32;
	g_isolation_memory_ops = base;
	return HVS_OK;
}

static hvs_status_t classify_filesystems(hvs_supervisor_context_t *ctx)
{
	uint32_t i;
	ctx->program_fs = 0;
	ctx->data_fs = 0;

	for(i = 0; i < ctx->fs_count; ++i) {
		hvs_fs_t *fs = &ctx->filesystems[i];
		hvs_dirent_t ent;
		uint32_t idx = 0;
		if(hvs_fs_is_dir(fs, "/data") == HVS_OK) ctx->data_fs = fs;
		while(hvs_fs_read_dir(fs, "/", idx++, &ent) == HVS_OK) {
			if(!ent.is_dir && ends_with(ent.name, ".elf")) {
				ctx->program_fs = fs;
				break;
			}
		}
	}

	if(ctx->program_fs == 0 || ctx->data_fs == 0) return HVS_ERR_NOT_FOUND;
	return HVS_OK;
}

static uint32_t caps_from_services(uint32_t services)
{
	uint32_t caps = 1u << 0;
	if(services & HVS_YAML_SERVICE_STORAGE) caps |= (1u << 1);
	if(services & HVS_YAML_SERVICE_NET) caps |= (1u << 1);
	if(services & HVS_YAML_SERVICE_IPC) caps |= (1u << 1) | (1u << 2);
	if(services & HVS_YAML_SERVICE_DEBUG) caps |= (1u << 2);
	if(services & HVS_YAML_SERVICE_DMA) caps |= (1u << 3);
	if(services & HVS_YAML_SERVICE_MMIO) caps |= (1u << 4);
	return caps;
}

static hvs_status_t create_stack_and_params(
	const hvs_elf_runtime_ops_t *ops,
	hvs_supervisor_app_t *app,
	uint32_t page_table_root)
{
	uint32_t stack_phys;
	uint32_t params_phys;
	uint32_t params_vaddr;
	hvs_status_t st;

	st = ops->alloc_pages(HVS_SUP_STACK_BYTES, HVS_ELF_PAGE_SIZE, &stack_phys);
	if(st != HVS_OK) return st;
	ops->zero_memory(stack_phys, HVS_SUP_STACK_BYTES);
	st = ops->map_pages(
		page_table_root,
		HVS_SUP_USER_STACK_LOW,
		stack_phys,
		HVS_SUP_STACK_BYTES,
		HVS_ELF_PTE_V | HVS_ELF_PTE_R | HVS_ELF_PTE_W | HVS_ELF_PTE_U | HVS_ELF_PTE_A | HVS_ELF_PTE_D);
	if(st != HVS_OK) return st;
	st = isolated_guard_page(page_table_root, HVS_SUP_USER_STACK_LOW - HVS_SUP_GUARD_BYTES);
	if(st != HVS_OK) return st;
	st = isolated_guard_page(page_table_root, HVS_SUP_USER_STACK_TOP);
	if(st != HVS_OK) return st;

	params_vaddr = HVS_SUP_USER_PARAMS_BASE + (app->params.app_id - 1u) * HVS_ELF_PAGE_SIZE;
	st = ops->alloc_pages(HVS_ELF_PAGE_SIZE, HVS_ELF_PAGE_SIZE, &params_phys);
	if(st != HVS_OK) return st;
	ops->zero_memory(params_phys, HVS_ELF_PAGE_SIZE);
	ops->copy_to_memory(params_phys, &app->params, sizeof(app->params));
	st = ops->map_pages(
		page_table_root,
		params_vaddr,
		params_phys,
		HVS_ELF_PAGE_SIZE,
		HVS_ELF_PTE_V | HVS_ELF_PTE_R | HVS_ELF_PTE_U | HVS_ELF_PTE_A);
	if(st != HVS_OK) return st;
	if(params_vaddr >= HVS_ELF_PAGE_SIZE) {
		st = isolated_guard_page(page_table_root, params_vaddr - HVS_ELF_PAGE_SIZE);
		if(st != HVS_OK) return st;
	}
	st = isolated_guard_page(page_table_root, params_vaddr + HVS_ELF_PAGE_SIZE);
	if(st != HVS_OK) return st;

	app->task.id = app->params.app_id;
	app->task.pc = app->image.entry;
	app->task.sp = HVS_SUP_USER_STACK_TOP;
	app->task.satp = HARVOS_SATP_MODE |
		((app->params.app_id & 0xFFu) << HARVOS_SATP_ASID_SHIFT) |
		((page_table_root >> 12) & HARVOS_SATP_PPN_MASK);
	app->task.a0 = params_vaddr;
	app->task.caps = caps_from_services(app->config.service_mask);
	app->task.budget = 1000u;
	app->task.page_table_root = page_table_root;
	app->task.stack_low = HVS_SUP_USER_STACK_LOW;
	app->task.stack_guard_low = HVS_SUP_USER_STACK_LOW - HVS_SUP_GUARD_BYTES;
	app->task.stack_guard_high = HVS_SUP_USER_STACK_TOP;
	return HVS_OK;
}

typedef struct {
	uint8_t *buffer;
	uint32_t cursor;
	uint32_t count;
} hvs_http_bundle_builder_t;

static uint32_t round_up_u32(uint32_t value, uint32_t align)
{
	return (value + align - 1u) & ~(align - 1u);
}

static int char_eq_ci(char a, char b)
{
	if(a >= 'A' && a <= 'Z') a = (char)(a + ('a' - 'A'));
	if(b >= 'A' && b <= 'Z') b = (char)(b + ('a' - 'A'));
	return a == b;
}

static int ends_with_ci(const char *s, const char *suffix)
{
	uint32_t sl = str_len(s);
	uint32_t tl = str_len(suffix);
	uint32_t i;
	if(tl > sl) return 0;
	for(i = 0; i < tl; ++i) {
		if(!char_eq_ci(s[sl - tl + i], suffix[i])) return 0;
	}
	return 1;
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
	return HARVOS_HTTP_MIME_BIN;
}

static void join_path(char *dst, uint32_t dst_len, const char *base, const char *name)
{
	uint32_t i = 0;
	uint32_t j = 0;
	if(dst_len == 0u) return;
	while(i + 1u < dst_len && base[i]) {
		dst[i] = base[i];
		i++;
	}
	if(i > 0u && dst[i - 1u] != '/' && i + 1u < dst_len) dst[i++] = '/';
	while(i + 1u < dst_len && name[j]) dst[i++] = name[j++];
	dst[i] = 0;
}

static hvs_status_t bundle_add_file(
	hvs_fs_t *fs,
	hvs_http_bundle_builder_t *builder,
	const char *full_path,
	const char *rel_path)
{
	harvos_http_bundle_entry_t *entries;
	hvs_file_t file;
	uint32_t actual = 0;
	uint32_t size;
	hvs_status_t st;

	if(builder->count >= HARVOS_HTTP_BUNDLE_MAX_FILES) return HVS_OK;
	if(str_len(rel_path) >= HARVOS_HTTP_BUNDLE_PATH_BYTES) return HVS_OK;

	st = hvs_fs_open(fs, full_path, &file);
	if(st != HVS_OK) return HVS_OK;
	if(file.is_dir || file.size > 0xFFFFFFFFull) return HVS_OK;
	size = (uint32_t)file.size;
	if(builder->cursor + size > HVS_SUP_MAX_PRELOAD_BYTES) return HVS_OK;

	entries = (harvos_http_bundle_entry_t *)(builder->buffer + sizeof(harvos_http_bundle_header_t));
	zero(&entries[builder->count], sizeof(entries[builder->count]));
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

static hvs_status_t bundle_scan_dir(
	hvs_fs_t *fs,
	hvs_http_bundle_builder_t *builder,
	const char *full_dir,
	const char *rel_dir,
	uint32_t depth)
{
	uint32_t idx = 0;
	hvs_dirent_t ent;
	while(hvs_fs_read_dir(fs, full_dir, idx++, &ent) == HVS_OK) {
		char full_child[HVS_SUP_MAX_PATH];
		char rel_child[HVS_SUP_MAX_PATH];
		if(ent.name[0] == '.') continue;
		join_path(full_child, sizeof(full_child), full_dir, ent.name);
		if(rel_dir[0]) join_path(rel_child, sizeof(rel_child), rel_dir, ent.name);
		else join2(rel_child, sizeof(rel_child), "/", ent.name);

		if(ent.is_dir) {
			if(depth < 3u) (void)bundle_scan_dir(fs, builder, full_child, rel_child, depth + 1u);
		} else {
			(void)bundle_add_file(fs, builder, full_child, rel_child);
		}
	}
	return HVS_OK;
}

static hvs_status_t preload_harvttp_content(
	hvs_supervisor_context_t *ctx,
	const hvs_elf_runtime_ops_t *ops,
	hvs_supervisor_app_t *app,
	uint32_t page_table_root)
{
	static const char root_path[] = "/confg/harvttp/httproot";
	static uint8_t bundle[HVS_SUP_MAX_PRELOAD_BYTES];
	harvos_http_bundle_header_t *header = (harvos_http_bundle_header_t *)bundle;
	hvs_http_bundle_builder_t builder;
	uint32_t phys;
	uint32_t vaddr;
	uint32_t map_bytes;
	hvs_status_t st;

	if(!str_eq(app->name, "harvttp")) return HVS_OK;

	copy_str(app->params.content_root_path, sizeof(app->params.content_root_path), root_path);
	zero(bundle, sizeof(bundle));
	header->magic = HARVOS_HTTP_BUNDLE_MAGIC;
	header->version = HARVOS_HTTP_BUNDLE_VERSION;
	header->entry_size = sizeof(harvos_http_bundle_entry_t);
	header->data_offset = round_up_u32(
		sizeof(harvos_http_bundle_header_t) +
		HARVOS_HTTP_BUNDLE_MAX_FILES * sizeof(harvos_http_bundle_entry_t),
		4u);

	builder.buffer = bundle;
	builder.cursor = header->data_offset;
	builder.count = 0u;
	(void)bundle_scan_dir(ctx->program_fs, &builder, root_path, "", 0u);
	if(builder.count == 0u) return HVS_OK;

	header->file_count = builder.count;
	header->total_size = builder.cursor;
	map_bytes = round_up_u32(header->total_size, HVS_ELF_PAGE_SIZE);

	st = ops->alloc_pages(map_bytes, HVS_ELF_PAGE_SIZE, &phys);
	if(st != HVS_OK) return st;
	ops->zero_memory(phys, map_bytes);
	ops->copy_to_memory(phys, bundle, header->total_size);

	vaddr = HVS_SUP_USER_CONTENT_BASE + (app->params.app_id - 1u) * HVS_SUP_USER_CONTENT_STRIDE;
	st = ops->map_pages(
		page_table_root,
		vaddr,
		phys,
		map_bytes,
		HVS_ELF_PTE_V | HVS_ELF_PTE_R | HVS_ELF_PTE_U | HVS_ELF_PTE_A);
	if(st != HVS_OK) return st;
	if(vaddr >= HVS_ELF_PAGE_SIZE) {
		st = isolated_guard_page(page_table_root, vaddr - HVS_ELF_PAGE_SIZE);
		if(st != HVS_OK) return st;
	}
	if(map_bytes < HVS_SUP_USER_CONTENT_STRIDE) {
		st = isolated_guard_page(page_table_root, vaddr + map_bytes);
		if(st != HVS_OK) return st;
	}

	app->params.preloaded_content_vaddr = vaddr;
	app->params.preloaded_content_size = header->total_size;
	return HVS_OK;
}

static hvs_status_t load_app(
	hvs_supervisor_context_t *ctx,
	const hvs_elf_runtime_ops_t *memory_ops,
	const char *elf_name)
{
	hvs_supervisor_app_t *app;
	hvs_elf_runtime_ops_t elf_ops;
	hvs_elf_runtime_ops_t isolated_ops;
	hvs_elf_file_t elf_file;
	uint8_t yaml[HVS_YAML_MAX_TEXT];
	uint32_t yaml_len = 0;
	uint32_t page_table_root;
	uint32_t image_guard;
	char cfg_suffix[HVS_SUP_MAX_PATH];
	hvs_status_t st;

	if(ctx->app_count >= HVS_SUP_MAX_APPS) return HVS_ERR_TOO_MANY;
	app = &ctx->apps[ctx->app_count];
	zero(app, sizeof(*app));

	app_name_from_elf(app->name, sizeof(app->name), elf_name);
	join2(app->elf_path, sizeof(app->elf_path), "/", elf_name);
	join2(cfg_suffix, sizeof(cfg_suffix), app->name, ".yaml");
	join2(app->config_path, sizeof(app->config_path), "/config/", cfg_suffix);
	join2(app->data_path, sizeof(app->data_path), "/data/", app->name);

	if(hvs_fs_is_dir(ctx->data_fs, app->data_path) != HVS_OK) return HVS_ERR_NOT_FOUND;
	st = read_config(ctx->program_fs, app->config_path, yaml, sizeof(yaml), &yaml_len);
	if(st != HVS_OK) return st;
	st = hvs_yaml_parse_app_config(yaml, yaml_len, app->name, &app->config);
	if(st != HVS_OK) return st;

	st = hvs_fs_open(ctx->program_fs, app->elf_path, &elf_file.fs_file);
	if(st != HVS_OK) return st;
	if(elf_file.fs_file.is_dir) return HVS_ERR_BAD_FORMAT;

	st = make_isolated_runtime_ops(memory_ops, &isolated_ops);
	if(st != HVS_OK) return st;

	st = memory_ops->alloc_pages(HVS_ELF_PAGE_SIZE, HVS_ELF_PAGE_SIZE, &page_table_root);
	if(st != HVS_OK) return st;
	memory_ops->zero_memory(page_table_root, HVS_ELF_PAGE_SIZE);

	elf_ops = isolated_ops;
	elf_ops.read = fs_elf_read;
	elf_ops.size = fs_elf_size;
	st = hvs_elf_load(&elf_ops, &elf_file, page_table_root, &app->image);
	if(st != HVS_OK) return st;
	if(app->image.low_vaddr >= HVS_ELF_PAGE_SIZE) {
		image_guard = app->image.low_vaddr & ~(HVS_ELF_PAGE_SIZE - 1u);
		st = isolated_guard_page(page_table_root, image_guard - HVS_ELF_PAGE_SIZE);
		if(st != HVS_OK) return st;
	}
	image_guard = round_up_u32(app->image.high_vaddr, HVS_ELF_PAGE_SIZE);
	if(image_guard >= app->image.high_vaddr) {
		st = isolated_guard_page(page_table_root, image_guard);
		if(st != HVS_OK) return st;
	}

	app->params.app_id = ctx->next_app_id++;
	app->params.service_mask = app->config.service_mask;
	app->params.mem_base = app->image.low_vaddr;
	app->params.mem_size = app->image.high_vaddr - app->image.low_vaddr;
	app->params.debug_flags = app->config.debug_flags;
	copy_str(app->params.config_path, sizeof(app->params.config_path), app->config_path);
	copy_str(app->params.data_path, sizeof(app->params.data_path), app->data_path);
	copy_str(app->params.content_root_path, sizeof(app->params.content_root_path), "");

	st = preload_harvttp_content(ctx, &isolated_ops, app, page_table_root);
	if(st != HVS_OK) return st;

	st = create_stack_and_params(&isolated_ops, app, page_table_root);
	if(st != HVS_OK) return st;
	ctx->app_count++;
	return HVS_OK;
}

void hvs_supervisor_context_init(hvs_supervisor_context_t *ctx)
{
	zero(ctx, sizeof(*ctx));
	ctx->next_app_id = 1u;
}

hvs_status_t hvs_supervisor_boot_from_usb(
	hvs_supervisor_context_t *ctx,
	hvs_usb_hcd_t *hcd,
	const hvs_elf_runtime_ops_t *memory_ops)
{
	uint32_t i;
	hvs_status_t st;

	st = hvs_usb_enumerate_msc(hcd, ctx->usb, HVS_SUP_MAX_USB_DEVICES, &ctx->usb_count);
	if(st != HVS_OK) return st;

	ctx->fs_count = 0u;
	for(i = 0; i < ctx->usb_count && ctx->fs_count < HVS_SUP_MAX_FILESYSTEMS; ++i) {
		st = hvs_fs_mount(&ctx->usb[i].block, &ctx->filesystems[ctx->fs_count]);
		if(st == HVS_OK) ctx->fs_count++;
	}
	if(ctx->fs_count == 0u) return HVS_ERR_NOT_FOUND;

	st = classify_filesystems(ctx);
	if(st != HVS_OK) return st;

	for(i = 0; i < HVS_SUP_MAX_APPS; ++i) {
		hvs_dirent_t ent;
		st = hvs_fs_read_dir(ctx->program_fs, "/", i, &ent);
		if(st != HVS_OK) break;
		if(ent.is_dir || !ends_with(ent.name, ".elf")) continue;
		st = load_app(ctx, memory_ops, ent.name);
		if(st != HVS_OK) {
			/* A bad app must not stop the whole boot. Continue discovery. */
			continue;
		}
	}

	return ctx->app_count ? HVS_OK : HVS_ERR_NOT_FOUND;
}

hvs_status_t hvs_supervisor_boot_from_blocks(
	hvs_supervisor_context_t *ctx,
	hvs_block_device_t *blocks,
	uint32_t block_count,
	const hvs_elf_runtime_ops_t *memory_ops)
{
	uint32_t i;
	hvs_status_t st;

	ctx->fs_count = 0u;
	for(i = 0; i < block_count && ctx->fs_count < HVS_SUP_MAX_FILESYSTEMS; ++i) {
		st = hvs_fs_mount(&blocks[i], &ctx->filesystems[ctx->fs_count]);
		if(st == HVS_OK) ctx->fs_count++;
	}
	if(ctx->fs_count == 0u) return HVS_ERR_NOT_FOUND;

	st = classify_filesystems(ctx);
	if(st != HVS_OK) return st;

	for(i = 0; i < HVS_SUP_MAX_APPS; ++i) {
		hvs_dirent_t ent;
		st = hvs_fs_read_dir(ctx->program_fs, "/", i, &ent);
		if(st != HVS_OK) break;
		if(ent.is_dir || !ends_with(ent.name, ".elf")) continue;
		st = load_app(ctx, memory_ops, ent.name);
		if(st != HVS_OK) continue;
	}

	return ctx->app_count ? HVS_OK : HVS_ERR_NOT_FOUND;
}

hvs_status_t hvs_supervisor_boot_auto(
	hvs_supervisor_context_t *ctx,
	hvs_usb_hcd_t *usb_hcd,
	hvs_block_device_t *fallback_blocks,
	uint32_t fallback_block_count,
	const hvs_elf_runtime_ops_t *memory_ops)
{
	hvs_status_t st = HVS_ERR_NOT_FOUND;

	if(usb_hcd) {
		hvs_supervisor_context_init(ctx);
		st = hvs_supervisor_boot_from_usb(ctx, usb_hcd, memory_ops);
		if(st == HVS_OK) return HVS_OK;
	}

	if(fallback_blocks && fallback_block_count) {
		hvs_supervisor_context_init(ctx);
		st = hvs_supervisor_boot_from_blocks(ctx, fallback_blocks, fallback_block_count, memory_ops);
	}

	return st;
}
