// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_BOOTLOADER_H
#define HARVOS_BOOTLOADER_H

#include <stddef.h>
#include <stdint.h>

#define HVBL_MAX_BLOCK_DEVICES 8u
#define HVBL_MAX_APPS 8u
#define HVBL_MAX_PATH 96u
#define HVBL_MAX_NAME 32u
#define HVBL_PAGE_SIZE 4096u
#define HVBL_STACK_BYTES 4096u

#define HVBL_SERVICE_STORAGE (1u << 0)
#define HVBL_SERVICE_NET     (1u << 1)
#define HVBL_SERVICE_IPC     (1u << 2)
#define HVBL_SERVICE_DEBUG   (1u << 3)

#define HVBL_PTE_V 0x01u
#define HVBL_PTE_R 0x02u
#define HVBL_PTE_W 0x04u
#define HVBL_PTE_X 0x08u
#define HVBL_PTE_U 0x10u
#define HVBL_PTE_A 0x40u
#define HVBL_PTE_D 0x80u

#define HVBL_SATP_MODE       0x80000000u
#define HVBL_SATP_ASID_SHIFT 22u
#define HVBL_SATP_PPN_MASK   0x000FFFFFu

typedef enum {
	HVBL_OK = 0,
	HVBL_ERR_IO = -1,
	HVBL_ERR_NOT_FOUND = -2,
	HVBL_ERR_TOO_MANY = -3,
	HVBL_ERR_BAD_ELF = -4,
	HVBL_ERR_BAD_CONFIG = -5,
	HVBL_ERR_BAD_DATA_DIR = -6,
	HVBL_ERR_MEMORY = -7,
	HVBL_ERR_SECURITY = -8,
	HVBL_ERR_UNSUPPORTED = -9
} hvbl_status_t;

typedef enum {
	HVBL_TASK_EMPTY = 0,
	HVBL_TASK_READY = 1,
	HVBL_TASK_RUNNING = 2,
	HVBL_TASK_FAULTED = 3
} hvbl_task_state_t;

typedef enum {
	HVBL_LOG_INFO = 0,
	HVBL_LOG_WARN = 1,
	HVBL_LOG_ERROR = 2
} hvbl_log_level_t;

typedef struct hvbl_fs hvbl_fs_t;
typedef struct hvbl_file hvbl_file_t;

typedef struct {
	uint32_t controller_id;
	uint32_t lun;
	uint32_t block_size;
	uint32_t block_count_low;
	uint32_t block_count_high;
} hvbl_block_device_t;

typedef struct {
	uint32_t app_id;
	uint32_t service_mask;
	uint32_t mem_base;
	uint32_t mem_size;
	uint32_t debug_flags;
	char config_path[HVBL_MAX_PATH];
	char data_path[HVBL_MAX_PATH];
} hvbl_start_params_t;

typedef struct {
	char name[HVBL_MAX_NAME];
	char elf_path[HVBL_MAX_PATH];
	char config_path[HVBL_MAX_PATH];
	char data_path[HVBL_MAX_PATH];
	uint32_t entry;
	uint32_t mem_base;
	uint32_t mem_size;
	uint32_t stack_top;
	uint32_t params_vaddr;
	uint32_t page_table_root;
	uint32_t caps;
	hvbl_start_params_t params;
} hvbl_app_image_t;

typedef struct {
	uint32_t id;
	uint32_t pc;
	uint32_t sp;
	uint32_t satp;
	uint32_t caps;
	uint32_t budget;
	uint32_t a0;
	hvbl_task_state_t state;
	uint32_t params_vaddr;
} hvbl_task_t;

typedef struct {
	hvbl_app_image_t apps[HVBL_MAX_APPS];
	hvbl_task_t tasks[HVBL_MAX_APPS];
	uint32_t app_count;
	uint32_t task_count;
	uint32_t next_app_id;
	uint32_t service_mask;
} hvbl_boot_context_t;

typedef struct {
	hvbl_status_t (*enumerate_usb_storage)(hvbl_block_device_t *out, uint32_t max, uint32_t *count);
	hvbl_status_t (*mount_fs)(hvbl_block_device_t *dev, hvbl_fs_t **fs);
	hvbl_status_t (*open)(hvbl_fs_t *fs, const char *path, hvbl_file_t **file);
	hvbl_status_t (*read)(hvbl_file_t *file, uint32_t offset, void *dst, uint32_t len);
	hvbl_status_t (*size)(hvbl_file_t *file, uint32_t *size);
	void (*close)(hvbl_file_t *file);
	hvbl_status_t (*exists)(hvbl_fs_t *fs, const char *path);
	hvbl_status_t (*is_dir)(hvbl_fs_t *fs, const char *path);
	hvbl_status_t (*read_dir)(hvbl_fs_t *fs, const char *path, uint32_t index, char *name, uint32_t name_len);
	hvbl_status_t (*validate_yaml)(hvbl_fs_t *fs, const char *path, const char *app_name);
	hvbl_status_t (*alloc_pages)(uint32_t bytes, uint32_t align, uint32_t *phys_base);
	hvbl_status_t (*map_pages)(uint32_t page_table_root, uint32_t vaddr, uint32_t paddr, uint32_t bytes, uint32_t pte_flags);
	void (*zero_memory)(uint32_t phys_addr, uint32_t bytes);
	void (*copy_to_memory)(uint32_t phys_addr, const void *src, uint32_t bytes);
	void (*flush_dcache)(uint32_t phys_addr, uint32_t bytes);
	void (*invalidate_icache)(uint32_t vaddr, uint32_t bytes);
	void (*log)(hvbl_log_level_t level, const char *app, hvbl_status_t status, const char *detail);
} hvbl_platform_ops_t;

void hvbl_context_init(hvbl_boot_context_t *ctx, uint32_t service_mask);
hvbl_status_t hvbl_discover_and_prepare(const hvbl_platform_ops_t *ops, hvbl_boot_context_t *ctx);
hvbl_status_t hvbl_start_all_tasks(const hvbl_platform_ops_t *ops, hvbl_boot_context_t *ctx);

#endif
