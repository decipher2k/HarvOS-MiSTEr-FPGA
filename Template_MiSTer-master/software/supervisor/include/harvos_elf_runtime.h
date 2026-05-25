// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_ELF_RUNTIME_H
#define HARVOS_ELF_RUNTIME_H

#include "harvos_block.h"

#define HVS_ELF_PAGE_SIZE 4096u
#define HVS_ELF_MAX_PHDRS 16u

#define HVS_ELF_PTE_V 0x01u
#define HVS_ELF_PTE_R 0x02u
#define HVS_ELF_PTE_W 0x04u
#define HVS_ELF_PTE_X 0x08u
#define HVS_ELF_PTE_U 0x10u
#define HVS_ELF_PTE_A 0x40u
#define HVS_ELF_PTE_D 0x80u

typedef struct hvs_elf_file hvs_elf_file_t;

typedef struct {
	hvs_status_t (*read)(hvs_elf_file_t *file, uint32_t offset, void *dst, uint32_t len);
	hvs_status_t (*size)(hvs_elf_file_t *file, uint32_t *size);
	hvs_status_t (*alloc_pages)(uint32_t bytes, uint32_t align, uint32_t *phys_base);
	hvs_status_t (*alloc_virtual_base)(uint32_t bytes, uint32_t align, uint32_t *vbase);
	hvs_status_t (*map_pages)(uint32_t page_table_root, uint32_t vaddr, uint32_t paddr, uint32_t bytes, uint32_t pte_flags);
	hvs_status_t (*write_u32)(uint32_t page_table_root, uint32_t vaddr, uint32_t value);
	hvs_status_t (*read_phys_u32)(uint32_t phys_addr, uint32_t *value);
	hvs_status_t (*write_phys_u32)(uint32_t phys_addr, uint32_t value);
	void (*copy_to_memory)(uint32_t phys_addr, const void *src, uint32_t bytes);
	void (*zero_memory)(uint32_t phys_addr, uint32_t bytes);
	void (*flush_dcache)(uint32_t phys_addr, uint32_t bytes);
	void (*invalidate_icache)(uint32_t vaddr, uint32_t bytes);
} hvs_elf_runtime_ops_t;

typedef struct {
	uint32_t entry;
	uint32_t low_vaddr;
	uint32_t high_vaddr;
	uint32_t load_bias;
	uint32_t page_table_root;
	uint8_t is_dynamic;
} hvs_elf_image_t;

hvs_status_t hvs_elf_load(
	const hvs_elf_runtime_ops_t *ops,
	hvs_elf_file_t *file,
	uint32_t page_table_root,
	hvs_elf_image_t *image);

#endif
