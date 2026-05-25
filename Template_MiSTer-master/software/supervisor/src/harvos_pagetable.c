// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_pagetable.h"

static uint32_t l1_index(uint32_t vaddr)
{
	return vaddr >> 22;
}

static uint32_t l0_index(uint32_t vaddr)
{
	return (vaddr >> 12) & 0x3FFu;
}

static uint32_t pte_flags(uint32_t pte)
{
	return pte & 0xFFu;
}

static uint32_t pte_addr(uint32_t pte)
{
	return pte & 0xFFFFF000u;
}

static int pte_valid(uint32_t pte)
{
	return (pte_flags(pte) & HARVOS_PTE_V) != 0u;
}

static int pte_leaf(uint32_t pte)
{
	return (pte_flags(pte) & (HARVOS_PTE_R | HARVOS_PTE_W | HARVOS_PTE_X)) != 0u;
}

static uint32_t make_pte(uint32_t phys, uint32_t flags)
{
	return (phys & 0xFFFFF000u) | (flags & 0xFFu);
}

static hvs_status_t validate_ops(const hvs_pagetable_ops_t *ops)
{
	if(ops == 0) return HVS_ERR_INVALID;
	if(ops->alloc_page == 0 || ops->read_u32 == 0 || ops->write_u32 == 0 || ops->zero_page == 0) {
		return HVS_ERR_INVALID;
	}
	return HVS_OK;
}

static hvs_status_t read_pte(const hvs_pagetable_ops_t *ops, uint32_t addr, uint32_t *pte)
{
	if((addr & 3u) != 0u) return HVS_ERR_INVALID;
	return ops->read_u32(addr, pte);
}

static hvs_status_t ensure_l0_table(
	const hvs_pagetable_ops_t *ops,
	uint32_t root_phys,
	uint32_t vaddr,
	uint32_t *l0_base)
{
	uint32_t l1_addr;
	uint32_t l1_pte;
	uint32_t page;
	hvs_status_t st;

	l1_addr = root_phys + l1_index(vaddr) * 4u;
	st = read_pte(ops, l1_addr, &l1_pte);
	if(st != HVS_OK) return st;

	if(pte_valid(l1_pte)) {
		if(pte_leaf(l1_pte)) return HVS_ERR_SECURITY;
		*l0_base = pte_addr(l1_pte);
		return HVS_OK;
	}

	st = ops->alloc_page(&page);
	if(st != HVS_OK) return st;
	if((page & (HARVOS_PAGE_SIZE - 1u)) != 0u) return HVS_ERR_INVALID;
	ops->zero_page(page);
	st = ops->write_u32(l1_addr, make_pte(page, HARVOS_PTE_V));
	if(st != HVS_OK) return st;
	*l0_base = page;
	return HVS_OK;
}

hvs_status_t hvs_pagetable_map_pages(
	const hvs_pagetable_ops_t *ops,
	uint32_t root_phys,
	uint32_t vaddr,
	uint32_t paddr,
	uint32_t bytes,
	uint32_t pte_flags_in)
{
	uint32_t off;
	uint32_t flags;
	hvs_status_t st;

	st = validate_ops(ops);
	if(st != HVS_OK) return st;
	if((root_phys & (HARVOS_PAGE_SIZE - 1u)) != 0u) return HVS_ERR_INVALID;
	if((vaddr & (HARVOS_PAGE_SIZE - 1u)) != 0u) return HVS_ERR_INVALID;
	if((paddr & (HARVOS_PAGE_SIZE - 1u)) != 0u) return HVS_ERR_INVALID;
	if(bytes == 0u || (bytes & (HARVOS_PAGE_SIZE - 1u)) != 0u) return HVS_ERR_INVALID;
	if(vaddr + bytes < vaddr || paddr + bytes < paddr) return HVS_ERR_INVALID;
	if((pte_flags_in & HARVOS_PTE_W) && (pte_flags_in & HARVOS_PTE_X)) return HVS_ERR_SECURITY;

	flags = (pte_flags_in | HARVOS_PTE_V | HARVOS_PTE_A) & 0xFFu;
	if(flags & HARVOS_PTE_W) flags |= HARVOS_PTE_D;

	for(off = 0u; off < bytes; off += HARVOS_PAGE_SIZE) {
		uint32_t l0_base;
		uint32_t l0_addr;
		uint32_t old_pte;
		uint32_t new_pte;

		st = ensure_l0_table(ops, root_phys, vaddr + off, &l0_base);
		if(st != HVS_OK) return st;
		l0_addr = l0_base + l0_index(vaddr + off) * 4u;
		st = read_pte(ops, l0_addr, &old_pte);
		if(st != HVS_OK) return st;
		if(pte_valid(old_pte)) return HVS_ERR_SECURITY;
		new_pte = make_pte(paddr + off, flags);
		st = ops->write_u32(l0_addr, new_pte);
		if(st != HVS_OK) return st;
	}

	return HVS_OK;
}

hvs_status_t hvs_pagetable_guard_page(
	const hvs_pagetable_ops_t *ops,
	uint32_t root_phys,
	uint32_t vaddr)
{
	uint32_t l0_base;
	uint32_t l0_addr;
	uint32_t old_pte;
	hvs_status_t st;

	st = validate_ops(ops);
	if(st != HVS_OK) return st;
	if((root_phys & (HARVOS_PAGE_SIZE - 1u)) != 0u) return HVS_ERR_INVALID;
	if((vaddr & (HARVOS_PAGE_SIZE - 1u)) != 0u) return HVS_ERR_INVALID;

	st = ensure_l0_table(ops, root_phys, vaddr, &l0_base);
	if(st != HVS_OK) return st;
	l0_addr = l0_base + l0_index(vaddr) * 4u;
	st = read_pte(ops, l0_addr, &old_pte);
	if(st != HVS_OK) return st;
	if(pte_valid(old_pte)) return HVS_ERR_SECURITY;
	return ops->write_u32(l0_addr, 0u);
}

hvs_status_t hvs_pagetable_translate(
	const hvs_pagetable_ops_t *ops,
	uint32_t root_phys,
	uint32_t vaddr,
	uint32_t *paddr,
	uint32_t *pte_flags_out)
{
	uint32_t l1_pte;
	uint32_t l0_pte;
	uint32_t l1_addr;
	uint32_t l0_addr;
	hvs_status_t st;

	st = validate_ops(ops);
	if(st != HVS_OK) return st;
	if(paddr == 0 || pte_flags_out == 0) return HVS_ERR_INVALID;
	if((root_phys & (HARVOS_PAGE_SIZE - 1u)) != 0u) return HVS_ERR_INVALID;

	l1_addr = root_phys + l1_index(vaddr) * 4u;
	st = read_pte(ops, l1_addr, &l1_pte);
	if(st != HVS_OK) return st;
	if(!pte_valid(l1_pte) || pte_leaf(l1_pte)) return HVS_ERR_NOT_FOUND;

	l0_addr = pte_addr(l1_pte) + l0_index(vaddr) * 4u;
	st = read_pte(ops, l0_addr, &l0_pte);
	if(st != HVS_OK) return st;
	if(!pte_valid(l0_pte) || !pte_leaf(l0_pte)) return HVS_ERR_NOT_FOUND;

	*paddr = pte_addr(l0_pte) | (vaddr & (HARVOS_PAGE_SIZE - 1u));
	*pte_flags_out = pte_flags(l0_pte);
	return HVS_OK;
}
