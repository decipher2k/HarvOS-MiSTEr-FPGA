// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_runtime_memory.h"
#include "../include/harvos_pagetable.h"

static hvs_runtime_memory_t *g_runtime_memory;

static uint32_t align_up(uint32_t value, uint32_t align)
{
	return (value + align - 1u) & ~(align - 1u);
}

static int is_power_of_two(uint32_t value)
{
	return value != 0u && (value & (value - 1u)) == 0u;
}

static int in_heap(uint32_t addr, uint32_t bytes)
{
	if(g_runtime_memory == 0) return 0;
	if(bytes == 0u) return 0;
	if(addr < g_runtime_memory->heap_base) return 0;
	if(addr + bytes < addr) return 0;
	return addr + bytes <= g_runtime_memory->heap_limit;
}

static hvs_status_t runtime_alloc_pages(uint32_t bytes, uint32_t align, uint32_t *phys_base)
{
	uint32_t start;
	uint32_t end;

	if(g_runtime_memory == 0 || phys_base == 0) return HVS_ERR_INVALID;
	if(bytes == 0u || !is_power_of_two(align)) return HVS_ERR_INVALID;
	start = align_up(g_runtime_memory->cursor, align);
	end = align_up(start + bytes, HVS_ELF_PAGE_SIZE);
	if(end < start || end > g_runtime_memory->heap_limit) return HVS_ERR_NO_SPACE;
	*phys_base = start;
	g_runtime_memory->cursor = end;
	return HVS_OK;
}

static hvs_status_t runtime_read_phys_u32(uint32_t phys_addr, uint32_t *value)
{
	volatile uint32_t *ptr;
	if(value == 0 || (phys_addr & 3u) != 0u || !in_heap(phys_addr, 4u)) return HVS_ERR_INVALID;
	ptr = (volatile uint32_t *)(uintptr_t)phys_addr;
	*value = *ptr;
	return HVS_OK;
}

static hvs_status_t runtime_write_phys_u32(uint32_t phys_addr, uint32_t value)
{
	volatile uint32_t *ptr;
	if((phys_addr & 3u) != 0u || !in_heap(phys_addr, 4u)) return HVS_ERR_INVALID;
	ptr = (volatile uint32_t *)(uintptr_t)phys_addr;
	*ptr = value;
	return HVS_OK;
}

static void runtime_copy_to_memory(uint32_t phys_addr, const void *src, uint32_t bytes)
{
	const uint8_t *s = (const uint8_t *)src;
	volatile uint8_t *d = (volatile uint8_t *)(uintptr_t)phys_addr;
	uint32_t i;
	if(src == 0 || !in_heap(phys_addr, bytes)) return;
	for(i = 0u; i < bytes; ++i) d[i] = s[i];
}

static void runtime_zero_memory(uint32_t phys_addr, uint32_t bytes)
{
	volatile uint8_t *d = (volatile uint8_t *)(uintptr_t)phys_addr;
	uint32_t i;
	if(!in_heap(phys_addr, bytes)) return;
	for(i = 0u; i < bytes; ++i) d[i] = 0u;
}

static hvs_status_t runtime_alloc_page_for_pt(uint32_t *phys_page)
{
	return runtime_alloc_pages(HVS_ELF_PAGE_SIZE, HVS_ELF_PAGE_SIZE, phys_page);
}

static void runtime_zero_page_for_pt(uint32_t phys_page)
{
	runtime_zero_memory(phys_page, HVS_ELF_PAGE_SIZE);
}

static const hvs_pagetable_ops_t g_runtime_pt_ops = {
	runtime_alloc_page_for_pt,
	runtime_read_phys_u32,
	runtime_write_phys_u32,
	runtime_zero_page_for_pt
};

static hvs_status_t runtime_map_pages(uint32_t page_table_root, uint32_t vaddr, uint32_t paddr, uint32_t bytes, uint32_t pte_flags)
{
	return hvs_pagetable_map_pages(&g_runtime_pt_ops, page_table_root, vaddr, paddr, bytes, pte_flags);
}

static hvs_status_t runtime_write_u32(uint32_t page_table_root, uint32_t vaddr, uint32_t value)
{
	uint32_t phys;
	uint32_t flags;
	hvs_status_t st;

	st = hvs_pagetable_translate(&g_runtime_pt_ops, page_table_root, vaddr, &phys, &flags);
	if(st != HVS_OK) return st;
	if((flags & HVS_ELF_PTE_W) == 0u) return HVS_ERR_SECURITY;
	return runtime_write_phys_u32(phys, value);
}

static void runtime_noop_cache(uint32_t addr, uint32_t bytes)
{
	(void)addr;
	(void)bytes;
}

void hvs_runtime_memory_init(hvs_runtime_memory_t *mem, uint32_t heap_base, uint32_t heap_bytes)
{
	if(mem == 0) return;
	mem->heap_base = align_up(heap_base, HVS_ELF_PAGE_SIZE);
	mem->heap_limit = heap_base + heap_bytes;
	if(mem->heap_limit < heap_base || mem->heap_limit < mem->heap_base) mem->heap_limit = mem->heap_base;
	mem->cursor = mem->heap_base;
}

hvs_status_t hvs_runtime_memory_make_ops(hvs_runtime_memory_t *mem, hvs_elf_runtime_ops_t *ops)
{
	if(mem == 0 || ops == 0) return HVS_ERR_INVALID;
	g_runtime_memory = mem;
	ops->read = 0;
	ops->size = 0;
	ops->alloc_pages = runtime_alloc_pages;
	ops->alloc_virtual_base = 0;
	ops->map_pages = runtime_map_pages;
	ops->write_u32 = runtime_write_u32;
	ops->read_phys_u32 = runtime_read_phys_u32;
	ops->write_phys_u32 = runtime_write_phys_u32;
	ops->copy_to_memory = runtime_copy_to_memory;
	ops->zero_memory = runtime_zero_memory;
	ops->flush_dcache = runtime_noop_cache;
	ops->invalidate_icache = runtime_noop_cache;
	return HVS_OK;
}
