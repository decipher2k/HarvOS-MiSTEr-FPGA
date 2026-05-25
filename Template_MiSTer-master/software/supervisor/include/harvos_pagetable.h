// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_PAGETABLE_H
#define HARVOS_PAGETABLE_H

#include "harvos_block.h"
#include "harvos_abi.h"

typedef struct {
	hvs_status_t (*alloc_page)(uint32_t *phys_page);
	hvs_status_t (*read_u32)(uint32_t phys_addr, uint32_t *value);
	hvs_status_t (*write_u32)(uint32_t phys_addr, uint32_t value);
	void (*zero_page)(uint32_t phys_page);
} hvs_pagetable_ops_t;

hvs_status_t hvs_pagetable_map_pages(
	const hvs_pagetable_ops_t *ops,
	uint32_t root_phys,
	uint32_t vaddr,
	uint32_t paddr,
	uint32_t bytes,
	uint32_t pte_flags);

hvs_status_t hvs_pagetable_guard_page(
	const hvs_pagetable_ops_t *ops,
	uint32_t root_phys,
	uint32_t vaddr);

hvs_status_t hvs_pagetable_translate(
	const hvs_pagetable_ops_t *ops,
	uint32_t root_phys,
	uint32_t vaddr,
	uint32_t *paddr,
	uint32_t *pte_flags);

#endif
