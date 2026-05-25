// Copyright 2025 Dennis Michael Heine

#include "harvos_bootloader.h"

#define EI_NIDENT 16u
#define EI_CLASS 4u
#define EI_DATA 5u
#define ELFCLASS32 1u
#define ELFDATA2LSB 1u
#define ET_EXEC 2u
#define EM_RISCV 243u
#define PT_LOAD 1u
#define PF_X 1u
#define PF_W 2u
#define PF_R 4u
#define EV_CURRENT 1u
#define HVBL_USER_STACK_TOP 0x70000000u
#define HVBL_USER_PARAMS_VADDR 0x70001000u

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
} hvbl_elf32_ehdr_t;

typedef struct {
	uint32_t type;
	uint32_t offset;
	uint32_t vaddr;
	uint32_t paddr;
	uint32_t filesz;
	uint32_t memsz;
	uint32_t flags;
	uint32_t align;
} hvbl_elf32_phdr_t;

static uint32_t hvbl_strlen(const char *s)
{
	uint32_t n = 0;
	while(s[n] != '\0') ++n;
	return n;
}

static int hvbl_streq(const char *a, const char *b)
{
	uint32_t i = 0;
	while(a[i] != '\0' && b[i] != '\0') {
		if(a[i] != b[i]) return 0;
		++i;
	}
	return a[i] == b[i];
}

static int hvbl_ends_with(const char *s, const char *suffix)
{
	uint32_t sl = hvbl_strlen(s);
	uint32_t tl = hvbl_strlen(suffix);
	uint32_t i;
	if(tl > sl) return 0;
	for(i = 0; i < tl; ++i) {
		if(s[sl - tl + i] != suffix[i]) return 0;
	}
	return 1;
}

static void hvbl_copy(char *dst, uint32_t dst_len, const char *src)
{
	uint32_t i;
	if(dst_len == 0) return;
	for(i = 0; i + 1u < dst_len && src[i] != '\0'; ++i) dst[i] = src[i];
	dst[i] = '\0';
}

static void hvbl_join2(char *dst, uint32_t dst_len, const char *a, const char *b)
{
	uint32_t i = 0;
	uint32_t j = 0;
	if(dst_len == 0) return;
	while(i + 1u < dst_len && a[i] != '\0') {
		dst[i] = a[i];
		++i;
	}
	while(i + 1u < dst_len && b[j] != '\0') {
		dst[i++] = b[j++];
	}
	dst[i] = '\0';
}

static void hvbl_make_app_name(char *dst, uint32_t dst_len, const char *elf_name)
{
	uint32_t i;
	if(dst_len == 0) return;
	for(i = 0; i + 1u < dst_len && elf_name[i] != '\0'; ++i) {
		if(elf_name[i] == '.' && hvbl_streq(&elf_name[i], ".elf")) break;
		dst[i] = elf_name[i];
	}
	dst[i] = '\0';
}

static uint32_t hvbl_round_up(uint32_t value, uint32_t align)
{
	return (value + align - 1u) & ~(align - 1u);
}

static int hvbl_add_overflow_u32(uint32_t a, uint32_t b, uint32_t *out)
{
	*out = a + b;
	return *out < a;
}

static uint32_t hvbl_pte_flags_from_elf(uint32_t flags)
{
	uint32_t pte = HVBL_PTE_V | HVBL_PTE_U | HVBL_PTE_A;
	if(flags & PF_R) pte |= HVBL_PTE_R;
	if(flags & PF_W) pte |= HVBL_PTE_W | HVBL_PTE_D;
	if(flags & PF_X) pte |= HVBL_PTE_X;
	return pte;
}

static hvbl_status_t hvbl_validate_elf_header(const hvbl_elf32_ehdr_t *eh, uint32_t file_size)
{
	uint32_t ph_bytes;
	uint32_t ph_end;

	if(eh->ident[0] != 0x7fu || eh->ident[1] != 'E' || eh->ident[2] != 'L' || eh->ident[3] != 'F') {
		return HVBL_ERR_BAD_ELF;
	}
	if(eh->ident[EI_CLASS] != ELFCLASS32 || eh->ident[EI_DATA] != ELFDATA2LSB) return HVBL_ERR_BAD_ELF;
	if(eh->type != ET_EXEC) return HVBL_ERR_UNSUPPORTED;
	if(eh->machine != EM_RISCV) return HVBL_ERR_UNSUPPORTED;
	if(eh->version != EV_CURRENT) return HVBL_ERR_BAD_ELF;
	if(eh->ehsize != sizeof(hvbl_elf32_ehdr_t)) return HVBL_ERR_BAD_ELF;
	if(eh->phentsize != sizeof(hvbl_elf32_phdr_t)) return HVBL_ERR_BAD_ELF;
	if(eh->phnum == 0u || eh->phnum > 16u) return HVBL_ERR_BAD_ELF;
	ph_bytes = (uint32_t)eh->phnum * (uint32_t)eh->phentsize;
	if(hvbl_add_overflow_u32(eh->phoff, ph_bytes, &ph_end)) return HVBL_ERR_BAD_ELF;
	if(ph_end > file_size) return HVBL_ERR_BAD_ELF;
	if((eh->entry & 3u) != 0u) return HVBL_ERR_BAD_ELF;
	return HVBL_OK;
}

static hvbl_status_t hvbl_read_elf_header(const hvbl_platform_ops_t *ops, hvbl_file_t *file, hvbl_elf32_ehdr_t *eh, uint32_t *file_size)
{
	hvbl_status_t st;
	st = ops->size(file, file_size);
	if(st != HVBL_OK) return st;
	if(*file_size < sizeof(*eh)) return HVBL_ERR_BAD_ELF;
	st = ops->read(file, 0u, eh, sizeof(*eh));
	if(st != HVBL_OK) return st;
	return hvbl_validate_elf_header(eh, *file_size);
}

static hvbl_status_t hvbl_validate_load_segment(const hvbl_elf32_phdr_t *ph, uint32_t file_size)
{
	uint32_t file_end;
	uint32_t mem_end;

	if(ph->type != PT_LOAD) return HVBL_OK;
	if(ph->memsz < ph->filesz) return HVBL_ERR_BAD_ELF;
	if(hvbl_add_overflow_u32(ph->offset, ph->filesz, &file_end) || file_end > file_size) return HVBL_ERR_BAD_ELF;
	if(hvbl_add_overflow_u32(ph->vaddr, ph->memsz, &mem_end)) return HVBL_ERR_BAD_ELF;
	if(mem_end < ph->vaddr) return HVBL_ERR_BAD_ELF;
	if((ph->vaddr & 3u) != 0u || (ph->paddr & 3u) != 0u) return HVBL_ERR_BAD_ELF;
	if((ph->flags & PF_W) && (ph->flags & PF_X)) return HVBL_ERR_SECURITY;
	if(ph->align != 0u && ph->align != 1u && (ph->align & (ph->align - 1u)) != 0u) return HVBL_ERR_BAD_ELF;
	return HVBL_OK;
}

static hvbl_status_t hvbl_read_phdr(const hvbl_platform_ops_t *ops, hvbl_file_t *file, const hvbl_elf32_ehdr_t *eh, uint32_t index, hvbl_elf32_phdr_t *ph)
{
	uint32_t off = eh->phoff + index * (uint32_t)eh->phentsize;
	return ops->read(file, off, ph, sizeof(*ph));
}

static hvbl_status_t hvbl_load_segment(const hvbl_platform_ops_t *ops, hvbl_file_t *file, uint32_t page_table, const hvbl_elf32_phdr_t *ph)
{
	uint32_t phys;
	uint32_t map_bytes;
	uint32_t pte_flags;
	hvbl_status_t st;
	uint8_t buffer[256];
	uint32_t done = 0;

	if(ph->type != PT_LOAD || ph->memsz == 0u) return HVBL_OK;

	map_bytes = hvbl_round_up(ph->memsz, HVBL_PAGE_SIZE);
	st = ops->alloc_pages(map_bytes, HVBL_PAGE_SIZE, &phys);
	if(st != HVBL_OK) return st;

	pte_flags = hvbl_pte_flags_from_elf(ph->flags);
	st = ops->map_pages(page_table, ph->vaddr, phys, map_bytes, pte_flags);
	if(st != HVBL_OK) return st;

	while(done < ph->filesz) {
		uint32_t chunk = ph->filesz - done;
		if(chunk > sizeof(buffer)) chunk = sizeof(buffer);
		st = ops->read(file, ph->offset + done, buffer, chunk);
		if(st != HVBL_OK) return st;
		ops->copy_to_memory(phys + done, buffer, chunk);
		done += chunk;
	}

	if(ph->memsz > ph->filesz) {
		ops->zero_memory(phys + ph->filesz, ph->memsz - ph->filesz);
	}

	ops->flush_dcache(phys, map_bytes);
	if(ph->flags & PF_X) ops->invalidate_icache(ph->vaddr, map_bytes);
	return HVBL_OK;
}

static hvbl_status_t hvbl_load_elf_image(const hvbl_platform_ops_t *ops, hvbl_fs_t *program_fs, hvbl_app_image_t *app)
{
	hvbl_file_t *file = 0;
	hvbl_elf32_ehdr_t eh;
	hvbl_elf32_phdr_t ph;
	uint32_t file_size;
	uint32_t i;
	uint32_t stack_phys;
	uint32_t entry_seen = 0;
	uint32_t load_seen = 0;
	uint32_t low = 0xFFFFFFFFu;
	uint32_t high = 0u;
	hvbl_status_t st;

	st = ops->open(program_fs, app->elf_path, &file);
	if(st != HVBL_OK) return st;

	st = hvbl_read_elf_header(ops, file, &eh, &file_size);
	if(st != HVBL_OK) goto out;

	st = ops->alloc_pages(HVBL_PAGE_SIZE, HVBL_PAGE_SIZE, &app->page_table_root);
	if(st != HVBL_OK) goto out;
	ops->zero_memory(app->page_table_root, HVBL_PAGE_SIZE);

	for(i = 0; i < eh.phnum; ++i) {
		st = hvbl_read_phdr(ops, file, &eh, i, &ph);
		if(st != HVBL_OK) goto out;
		st = hvbl_validate_load_segment(&ph, file_size);
		if(st != HVBL_OK) goto out;
		if(ph.type == PT_LOAD) {
			uint32_t end = ph.vaddr + ph.memsz;
			load_seen = 1u;
			if(ph.vaddr < low) low = ph.vaddr;
			if(end > high) high = end;
			if((ph.flags & PF_X) && eh.entry >= ph.vaddr && eh.entry < end) entry_seen = 1u;
		}
		st = hvbl_load_segment(ops, file, app->page_table_root, &ph);
		if(st != HVBL_OK) goto out;
	}

	if(!load_seen || !entry_seen) {
		st = HVBL_ERR_BAD_ELF;
		goto out;
	}

	st = ops->alloc_pages(HVBL_STACK_BYTES, HVBL_PAGE_SIZE, &stack_phys);
	if(st != HVBL_OK) goto out;
	ops->zero_memory(stack_phys, HVBL_STACK_BYTES);
	app->stack_top = HVBL_USER_STACK_TOP;
	st = ops->map_pages(
		app->page_table_root,
		app->stack_top - HVBL_STACK_BYTES,
		stack_phys,
		HVBL_STACK_BYTES,
		HVBL_PTE_V | HVBL_PTE_R | HVBL_PTE_W | HVBL_PTE_U | HVBL_PTE_A | HVBL_PTE_D);
	if(st != HVBL_OK) goto out;

	app->entry = eh.entry;
	app->mem_base = low;
	app->mem_size = high - low;
	app->params_vaddr = HVBL_USER_PARAMS_VADDR;

out:
	ops->close(file);
	return st;
}

static hvbl_status_t hvbl_classify_filesystems(const hvbl_platform_ops_t *ops, hvbl_fs_t **program_fs, hvbl_fs_t **data_fs)
{
	hvbl_block_device_t devices[HVBL_MAX_BLOCK_DEVICES];
	hvbl_fs_t *mounted[HVBL_MAX_BLOCK_DEVICES];
	uint32_t count = 0;
	uint32_t i;
	hvbl_status_t st;

	*program_fs = 0;
	*data_fs = 0;
	st = ops->enumerate_usb_storage(devices, HVBL_MAX_BLOCK_DEVICES, &count);
	if(st != HVBL_OK) return st;

	for(i = 0; i < count; ++i) {
		mounted[i] = 0;
		st = ops->mount_fs(&devices[i], &mounted[i]);
		if(st != HVBL_OK) {
			ops->log(HVBL_LOG_WARN, "-", st, "USB block device could not be mounted");
			continue;
		}
		if(ops->is_dir(mounted[i], "/data") == HVBL_OK) {
			*data_fs = mounted[i];
		} else {
			char name[HVBL_MAX_NAME];
			uint32_t index = 0;
			while(ops->read_dir(mounted[i], "/", index++, name, sizeof(name)) == HVBL_OK) {
				if(hvbl_ends_with(name, ".elf")) {
					*program_fs = mounted[i];
					break;
				}
			}
		}
	}

	if(*program_fs == 0) return HVBL_ERR_NOT_FOUND;
	if(*data_fs == 0) return HVBL_ERR_NOT_FOUND;
	return HVBL_OK;
}

static hvbl_status_t hvbl_add_app_candidate(
	const hvbl_platform_ops_t *ops,
	hvbl_boot_context_t *ctx,
	hvbl_fs_t *program_fs,
	hvbl_fs_t *data_fs,
	const char *elf_name)
{
	hvbl_app_image_t *app;
	char suffix[HVBL_MAX_PATH];
	hvbl_status_t st;

	if(ctx->app_count >= HVBL_MAX_APPS) return HVBL_ERR_TOO_MANY;
	app = &ctx->apps[ctx->app_count];
	hvbl_make_app_name(app->name, sizeof(app->name), elf_name);
	hvbl_join2(app->elf_path, sizeof(app->elf_path), "/", elf_name);
	hvbl_join2(suffix, sizeof(suffix), app->name, ".yaml");
	hvbl_join2(app->config_path, sizeof(app->config_path), "/config/", suffix);
	hvbl_join2(app->data_path, sizeof(app->data_path), "/data/", app->name);

	if(ops->exists(program_fs, app->config_path) != HVBL_OK) {
		ops->log(HVBL_LOG_ERROR, app->name, HVBL_ERR_BAD_CONFIG, "missing YAML config");
		return HVBL_ERR_BAD_CONFIG;
	}
	st = ops->validate_yaml(program_fs, app->config_path, app->name);
	if(st != HVBL_OK) {
		ops->log(HVBL_LOG_ERROR, app->name, st, "YAML config rejected");
		return st;
	}
	if(ops->is_dir(data_fs, app->data_path) != HVBL_OK) {
		ops->log(HVBL_LOG_ERROR, app->name, HVBL_ERR_BAD_DATA_DIR, "missing data directory");
		return HVBL_ERR_BAD_DATA_DIR;
	}

	st = hvbl_load_elf_image(ops, program_fs, app);
	if(st != HVBL_OK) {
		ops->log(HVBL_LOG_ERROR, app->name, st, "ELF load failed");
		return st;
	}

	app->params.app_id = ctx->next_app_id++;
	app->params.service_mask = ctx->service_mask;
	app->params.mem_base = app->mem_base;
	app->params.mem_size = app->mem_size;
	app->params.debug_flags = 0u;
	hvbl_copy(app->params.config_path, sizeof(app->params.config_path), app->config_path);
	hvbl_copy(app->params.data_path, sizeof(app->params.data_path), app->data_path);
	app->caps = 0u;
	ctx->app_count++;
	ops->log(HVBL_LOG_INFO, app->name, HVBL_OK, "application accepted");
	return HVBL_OK;
}

void hvbl_context_init(hvbl_boot_context_t *ctx, uint32_t service_mask)
{
	uint32_t i;
	ctx->app_count = 0u;
	ctx->task_count = 0u;
	ctx->next_app_id = 1u;
	ctx->service_mask = service_mask;
	for(i = 0; i < HVBL_MAX_APPS; ++i) {
		ctx->tasks[i].state = HVBL_TASK_EMPTY;
	}
}

hvbl_status_t hvbl_discover_and_prepare(const hvbl_platform_ops_t *ops, hvbl_boot_context_t *ctx)
{
	hvbl_fs_t *program_fs;
	hvbl_fs_t *data_fs;
	char name[HVBL_MAX_NAME];
	uint32_t index = 0;
	hvbl_status_t st;
	uint32_t accepted = 0;

	st = hvbl_classify_filesystems(ops, &program_fs, &data_fs);
	if(st != HVBL_OK) return st;

	while(ops->read_dir(program_fs, "/", index++, name, sizeof(name)) == HVBL_OK) {
		if(!hvbl_ends_with(name, ".elf")) continue;
		st = hvbl_add_app_candidate(ops, ctx, program_fs, data_fs, name);
		if(st == HVBL_OK) accepted++;
	}

	return accepted > 0u ? HVBL_OK : HVBL_ERR_NOT_FOUND;
}

static hvbl_status_t hvbl_init_task_from_app(const hvbl_platform_ops_t *ops, hvbl_boot_context_t *ctx, hvbl_app_image_t *app)
{
	hvbl_task_t *task;
	uint32_t params_phys;
	hvbl_status_t st;

	if(ctx->task_count >= HVBL_MAX_APPS) return HVBL_ERR_TOO_MANY;

	st = ops->alloc_pages(HVBL_PAGE_SIZE, HVBL_PAGE_SIZE, &params_phys);
	if(st != HVBL_OK) return st;
	ops->zero_memory(params_phys, HVBL_PAGE_SIZE);
	ops->copy_to_memory(params_phys, &app->params, sizeof(app->params));
	st = ops->map_pages(
		app->page_table_root,
		app->params_vaddr,
		params_phys,
		HVBL_PAGE_SIZE,
		HVBL_PTE_V | HVBL_PTE_R | HVBL_PTE_U | HVBL_PTE_A);
	if(st != HVBL_OK) return st;

	task = &ctx->tasks[ctx->task_count];
	task->id = app->params.app_id;
	task->pc = app->entry;
	task->sp = app->stack_top;
	task->satp = HVBL_SATP_MODE |
		((app->params.app_id & 0xFFu) << HVBL_SATP_ASID_SHIFT) |
		((app->page_table_root >> 12) & HVBL_SATP_PPN_MASK);
	task->caps = app->caps | 1u;
	task->budget = 1000u;
	task->a0 = app->params_vaddr;
	task->state = HVBL_TASK_READY;
	task->params_vaddr = app->params_vaddr;
	ctx->task_count++;
	return HVBL_OK;
}

hvbl_status_t hvbl_start_all_tasks(const hvbl_platform_ops_t *ops, hvbl_boot_context_t *ctx)
{
	uint32_t i;
	hvbl_status_t st;

	for(i = 0; i < ctx->app_count; ++i) {
		st = hvbl_init_task_from_app(ops, ctx, &ctx->apps[i]);
		if(st != HVBL_OK) {
			ops->log(HVBL_LOG_ERROR, ctx->apps[i].name, st, "task setup failed");
			continue;
		}
	}

	if(ctx->task_count == 0u) return HVBL_ERR_NOT_FOUND;

	/*
	 * On HarvOS this is the handoff point to the supervisor scheduler:
	 * load pc/sp/satp, put the start-params pointer in a0, set scaps from
	 * task->caps, switch to user mode, and enter the first READY task.
	 */
	ops->log(HVBL_LOG_INFO, "-", HVBL_OK, "tasks are ready for supervisor handoff");
	return HVBL_OK;
}
