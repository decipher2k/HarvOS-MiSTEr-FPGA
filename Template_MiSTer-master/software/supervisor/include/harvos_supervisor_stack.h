// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_SUPERVISOR_STACK_H
#define HARVOS_SUPERVISOR_STACK_H

#include "harvos_elf_runtime.h"
#include "harvos_fs.h"
#include "harvos_usb_host.h"
#include "harvos_yaml.h"
#include "harvos_abi.h"

#define HVS_SUP_MAX_USB_DEVICES 8u
#define HVS_SUP_MAX_FILESYSTEMS 8u
#define HVS_SUP_MAX_APPS 8u
#define HVS_SUP_MAX_PATH 128u
#define HVS_SUP_STACK_BYTES 4096u
#define HVS_SUP_GUARD_BYTES 4096u
#define HVS_SUP_USER_STACK_TOP 0x70000000u
#define HVS_SUP_USER_STACK_LOW (HVS_SUP_USER_STACK_TOP - HVS_SUP_STACK_BYTES)
#define HVS_SUP_USER_PARAMS_BASE 0x70001000u
#define HVS_SUP_USER_CONTENT_BASE 0x70010000u
#define HVS_SUP_MAX_PRELOAD_BYTES 65536u
#define HVS_SUP_USER_CONTENT_STRIDE HVS_SUP_MAX_PRELOAD_BYTES

typedef struct {
	uint32_t app_id;
	uint32_t service_mask;
	uint32_t mem_base;
	uint32_t mem_size;
	uint32_t debug_flags;
	uint32_t preloaded_content_vaddr;
	uint32_t preloaded_content_size;
	char config_path[HVS_SUP_MAX_PATH];
	char data_path[HVS_SUP_MAX_PATH];
	char content_root_path[HVS_SUP_MAX_PATH];
} hvs_app_start_params_t;

typedef struct {
	uint32_t id;
	uint32_t pc;
	uint32_t sp;
	uint32_t satp;
	uint32_t a0;
	uint32_t caps;
	uint32_t budget;
	uint32_t page_table_root;
	uint32_t stack_low;
	uint32_t stack_guard_low;
	uint32_t stack_guard_high;
} hvs_supervisor_task_t;

typedef struct {
	char name[HVS_YAML_MAX_NAME];
	char elf_path[HVS_SUP_MAX_PATH];
	char config_path[HVS_SUP_MAX_PATH];
	char data_path[HVS_SUP_MAX_PATH];
	hvs_yaml_app_config_t config;
	hvs_elf_image_t image;
	hvs_app_start_params_t params;
	hvs_supervisor_task_t task;
} hvs_supervisor_app_t;

typedef struct {
	hvs_usb_msc_device_t usb[HVS_SUP_MAX_USB_DEVICES];
	hvs_fs_t filesystems[HVS_SUP_MAX_FILESYSTEMS];
	uint32_t usb_count;
	uint32_t fs_count;
	hvs_fs_t *program_fs;
	hvs_fs_t *data_fs;
	hvs_supervisor_app_t apps[HVS_SUP_MAX_APPS];
	uint32_t app_count;
	uint32_t next_app_id;
} hvs_supervisor_context_t;

void hvs_supervisor_context_init(hvs_supervisor_context_t *ctx);
hvs_status_t hvs_supervisor_boot_from_usb(
	hvs_supervisor_context_t *ctx,
	hvs_usb_hcd_t *hcd,
	const hvs_elf_runtime_ops_t *memory_ops);

hvs_status_t hvs_supervisor_boot_from_blocks(
	hvs_supervisor_context_t *ctx,
	hvs_block_device_t *blocks,
	uint32_t block_count,
	const hvs_elf_runtime_ops_t *memory_ops);

hvs_status_t hvs_supervisor_boot_auto(
	hvs_supervisor_context_t *ctx,
	hvs_usb_hcd_t *usb_hcd,
	hvs_block_device_t *fallback_blocks,
	uint32_t fallback_block_count,
	const hvs_elf_runtime_ops_t *memory_ops);

#endif
