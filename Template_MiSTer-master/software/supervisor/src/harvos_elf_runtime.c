// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_elf_runtime.h"

#define EI_NIDENT 16u
#define EI_CLASS 4u
#define EI_DATA 5u
#define ELFCLASS32 1u
#define ELFDATA2LSB 1u
#define ET_EXEC 2u
#define ET_DYN 3u
#define EM_RISCV 243u
#define EV_CURRENT 1u
#define PT_LOAD 1u
#define PT_DYNAMIC 2u
#define PF_X 1u
#define PF_W 2u
#define PF_R 4u
#define DT_NULL 0
#define DT_RELA 7
#define DT_RELASZ 8
#define DT_RELAENT 9
#define R_RISCV_NONE 0u
#define R_RISCV_32 1u
#define R_RISCV_RELATIVE 3u

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
} elf32_ehdr_t;

typedef struct {
	uint32_t type;
	uint32_t offset;
	uint32_t vaddr;
	uint32_t paddr;
	uint32_t filesz;
	uint32_t memsz;
	uint32_t flags;
	uint32_t align;
} elf32_phdr_t;

typedef struct {
	int32_t tag;
	uint32_t value;
} elf32_dyn_t;

typedef struct {
	uint32_t offset;
	uint32_t info;
	int32_t addend;
} elf32_rela_t;

static uint32_t round_down(uint32_t value, uint32_t align)
{
	return value & ~(align - 1u);
}

static uint32_t round_up(uint32_t value, uint32_t align)
{
	return (value + align - 1u) & ~(align - 1u);
}

static int add_overflow(uint32_t a, uint32_t b, uint32_t *out)
{
	*out = a + b;
	return *out < a;
}

static hvs_status_t read_phdr(const hvs_elf_runtime_ops_t *ops, hvs_elf_file_t *file, const elf32_ehdr_t *eh, uint32_t i, elf32_phdr_t *ph)
{
	return ops->read(file, eh->phoff + i * (uint32_t)eh->phentsize, ph, sizeof(*ph));
}

static hvs_status_t validate_ehdr(const elf32_ehdr_t *eh, uint32_t file_size)
{
	uint32_t ph_bytes;
	uint32_t ph_end;

	if(eh->ident[0] != 0x7fu || eh->ident[1] != 'E' || eh->ident[2] != 'L' || eh->ident[3] != 'F') return HVS_ERR_BAD_FORMAT;
	if(eh->ident[EI_CLASS] != ELFCLASS32 || eh->ident[EI_DATA] != ELFDATA2LSB) return HVS_ERR_UNSUPPORTED;
	if(eh->type != ET_EXEC && eh->type != ET_DYN) return HVS_ERR_UNSUPPORTED;
	if(eh->machine != EM_RISCV) return HVS_ERR_UNSUPPORTED;
	if(eh->version != EV_CURRENT) return HVS_ERR_BAD_FORMAT;
	if(eh->ehsize != sizeof(*eh) || eh->phentsize != sizeof(elf32_phdr_t)) return HVS_ERR_BAD_FORMAT;
	if(eh->phnum == 0u || eh->phnum > HVS_ELF_MAX_PHDRS) return HVS_ERR_BAD_FORMAT;
	ph_bytes = (uint32_t)eh->phnum * (uint32_t)eh->phentsize;
	if(add_overflow(eh->phoff, ph_bytes, &ph_end) || ph_end > file_size) return HVS_ERR_BAD_FORMAT;
	if(eh->entry & 3u) return HVS_ERR_BAD_FORMAT;
	return HVS_OK;
}

static hvs_status_t validate_load(const elf32_phdr_t *ph, uint32_t file_size)
{
	uint32_t end;
	if(ph->type != PT_LOAD) return HVS_OK;
	if(ph->memsz < ph->filesz) return HVS_ERR_BAD_FORMAT;
	if(add_overflow(ph->offset, ph->filesz, &end) || end > file_size) return HVS_ERR_BAD_FORMAT;
	if(add_overflow(ph->vaddr, ph->memsz, &end)) return HVS_ERR_BAD_FORMAT;
	if((ph->flags & PF_W) && (ph->flags & PF_X)) return HVS_ERR_SECURITY;
	if(ph->align != 0u && ph->align != 1u && (ph->align & (ph->align - 1u)) != 0u) return HVS_ERR_BAD_FORMAT;
	return HVS_OK;
}

static uint32_t pte_from_phdr(uint32_t flags)
{
	uint32_t pte = HVS_ELF_PTE_V | HVS_ELF_PTE_U | HVS_ELF_PTE_A;
	if(flags & PF_R) pte |= HVS_ELF_PTE_R;
	if(flags & PF_X) pte |= HVS_ELF_PTE_X;
	if(flags & PF_W) pte |= HVS_ELF_PTE_W | HVS_ELF_PTE_D;
	return pte;
}

static hvs_status_t find_vaddr_file_offset(const elf32_phdr_t *phdrs, uint32_t phnum, uint32_t vaddr, uint32_t size, uint32_t *file_off)
{
	uint32_t i;
	for(i = 0; i < phnum; ++i) {
		const elf32_phdr_t *ph = &phdrs[i];
		if(ph->type != PT_LOAD) continue;
		if(vaddr >= ph->vaddr && vaddr + size >= vaddr && vaddr + size <= ph->vaddr + ph->filesz) {
			*file_off = ph->offset + (vaddr - ph->vaddr);
			return HVS_OK;
		}
	}
	return HVS_ERR_BAD_FORMAT;
}

static hvs_status_t load_segment(
	const hvs_elf_runtime_ops_t *ops,
	hvs_elf_file_t *file,
	uint32_t page_table_root,
	uint32_t load_bias,
	const elf32_phdr_t *ph)
{
	uint32_t seg_vaddr;
	uint32_t page_vaddr;
	uint32_t page_off;
	uint32_t map_bytes;
	uint32_t phys;
	uint32_t done = 0;
	uint8_t buffer[256];
	hvs_status_t st;

	if(ph->type != PT_LOAD || ph->memsz == 0u) return HVS_OK;

	seg_vaddr = ph->vaddr + load_bias;
	page_vaddr = round_down(seg_vaddr, HVS_ELF_PAGE_SIZE);
	page_off = seg_vaddr - page_vaddr;
	map_bytes = round_up(page_off + ph->memsz, HVS_ELF_PAGE_SIZE);

	st = ops->alloc_pages(map_bytes, HVS_ELF_PAGE_SIZE, &phys);
	if(st != HVS_OK) return st;
	ops->zero_memory(phys, map_bytes);

	st = ops->map_pages(page_table_root, page_vaddr, phys, map_bytes, pte_from_phdr(ph->flags));
	if(st != HVS_OK) return st;

	while(done < ph->filesz) {
		uint32_t chunk = ph->filesz - done;
		if(chunk > sizeof(buffer)) chunk = sizeof(buffer);
		st = ops->read(file, ph->offset + done, buffer, chunk);
		if(st != HVS_OK) return st;
		ops->copy_to_memory(phys + page_off + done, buffer, chunk);
		done += chunk;
	}

	ops->flush_dcache(phys, map_bytes);
	if(ph->flags & PF_X) ops->invalidate_icache(page_vaddr, map_bytes);
	return HVS_OK;
}

static hvs_status_t apply_dynamic_relocations(
	const hvs_elf_runtime_ops_t *ops,
	hvs_elf_file_t *file,
	uint32_t page_table_root,
	uint32_t load_bias,
	const elf32_phdr_t *phdrs,
	uint32_t phnum,
	const elf32_phdr_t *dynamic_ph)
{
	uint32_t off;
	uint32_t end;
	uint32_t rela = 0;
	uint32_t rela_size = 0;
	uint32_t rela_ent = sizeof(elf32_rela_t);
	hvs_status_t st;

	if(ops->write_u32 == 0) return HVS_ERR_UNSUPPORTED;
	st = find_vaddr_file_offset(phdrs, phnum, dynamic_ph->vaddr, dynamic_ph->filesz, &off);
	if(st != HVS_OK) return st;
	end = off + dynamic_ph->filesz;

	while(off + sizeof(elf32_dyn_t) <= end) {
		elf32_dyn_t dyn;
		st = ops->read(file, off, &dyn, sizeof(dyn));
		if(st != HVS_OK) return st;
		off += sizeof(dyn);
		if(dyn.tag == DT_NULL) break;
		if(dyn.tag == DT_RELA) rela = dyn.value;
		else if(dyn.tag == DT_RELASZ) rela_size = dyn.value;
		else if(dyn.tag == DT_RELAENT) rela_ent = dyn.value;
	}

	if(rela == 0u || rela_size == 0u) return HVS_OK;
	if(rela_ent != sizeof(elf32_rela_t)) return HVS_ERR_UNSUPPORTED;
	st = find_vaddr_file_offset(phdrs, phnum, rela, rela_size, &off);
	if(st != HVS_OK) return st;

	while(rela_size >= sizeof(elf32_rela_t)) {
		elf32_rela_t r;
		uint32_t type;
		uint32_t sym;
		st = ops->read(file, off, &r, sizeof(r));
		if(st != HVS_OK) return st;
		type = r.info & 0xFFu;
		sym = r.info >> 8;
		if(type == R_RISCV_NONE) {
			/* nothing */
		} else if(type == R_RISCV_RELATIVE && sym == 0u) {
			st = ops->write_u32(page_table_root, load_bias + r.offset, load_bias + (uint32_t)r.addend);
			if(st != HVS_OK) return st;
		} else if(type == R_RISCV_32 && sym == 0u) {
			st = ops->write_u32(page_table_root, load_bias + r.offset, (uint32_t)r.addend);
			if(st != HVS_OK) return st;
		} else {
			return HVS_ERR_UNSUPPORTED;
		}
		off += sizeof(r);
		rela_size -= sizeof(r);
	}

	return HVS_OK;
}

hvs_status_t hvs_elf_load(
	const hvs_elf_runtime_ops_t *ops,
	hvs_elf_file_t *file,
	uint32_t page_table_root,
	hvs_elf_image_t *image)
{
	elf32_ehdr_t eh;
	elf32_phdr_t phdrs[HVS_ELF_MAX_PHDRS];
	elf32_phdr_t *dynamic_ph = 0;
	uint32_t file_size;
	uint32_t i;
	uint32_t low = 0xFFFFFFFFu;
	uint32_t high = 0u;
	uint32_t load_bias = 0u;
	uint8_t entry_seen = 0u;
	hvs_status_t st;

	st = ops->size(file, &file_size);
	if(st != HVS_OK) return st;
	if(file_size < sizeof(eh)) return HVS_ERR_BAD_FORMAT;
	st = ops->read(file, 0u, &eh, sizeof(eh));
	if(st != HVS_OK) return st;
	st = validate_ehdr(&eh, file_size);
	if(st != HVS_OK) return st;

	for(i = 0; i < eh.phnum; ++i) {
		st = read_phdr(ops, file, &eh, i, &phdrs[i]);
		if(st != HVS_OK) return st;
		st = validate_load(&phdrs[i], file_size);
		if(st != HVS_OK) return st;
		if(phdrs[i].type == PT_LOAD) {
			uint32_t end = phdrs[i].vaddr + phdrs[i].memsz;
			if(phdrs[i].vaddr < low) low = phdrs[i].vaddr;
			if(end > high) high = end;
			if((phdrs[i].flags & PF_X) && eh.entry >= phdrs[i].vaddr && eh.entry < end) entry_seen = 1u;
		} else if(phdrs[i].type == PT_DYNAMIC) {
			dynamic_ph = &phdrs[i];
		}
	}

	if(low == 0xFFFFFFFFu || high <= low || !entry_seen) return HVS_ERR_BAD_FORMAT;
	if(eh.type == ET_DYN) {
		if(ops->alloc_virtual_base == 0) return HVS_ERR_UNSUPPORTED;
		st = ops->alloc_virtual_base(round_up(high - low, HVS_ELF_PAGE_SIZE), HVS_ELF_PAGE_SIZE, &load_bias);
		if(st != HVS_OK) return st;
		load_bias -= round_down(low, HVS_ELF_PAGE_SIZE);
	}

	for(i = 0; i < eh.phnum; ++i) {
		st = load_segment(ops, file, page_table_root, load_bias, &phdrs[i]);
		if(st != HVS_OK) return st;
	}

	if(dynamic_ph != 0) {
		st = apply_dynamic_relocations(ops, file, page_table_root, load_bias, phdrs, eh.phnum, dynamic_ph);
		if(st != HVS_OK) return st;
	}

	image->entry = eh.entry + load_bias;
	image->low_vaddr = low + load_bias;
	image->high_vaddr = high + load_bias;
	image->load_bias = load_bias;
	image->page_table_root = page_table_root;
	image->is_dynamic = dynamic_ph != 0 ? 1u : 0u;
	return HVS_OK;
}
