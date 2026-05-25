// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_FS_H
#define HARVOS_FS_H

#include "harvos_block.h"

#define HVS_FS_SECTOR_BYTES 512u
#define HVS_FS_MAX_NAME 64u
#define HVS_FS_MAX_PATH 128u

typedef enum {
	HVS_FS_NONE = 0,
	HVS_FS_FAT32 = 1,
	HVS_FS_EXFAT = 2
} hvs_fs_type_t;

typedef struct {
	char name[HVS_FS_MAX_NAME];
	uint8_t is_dir;
	uint64_t size;
	uint32_t first_cluster;
	uint8_t no_fat_chain;
} hvs_dirent_t;

typedef struct {
	hvs_block_device_t *block;
	hvs_fs_type_t type;
	uint64_t part_lba;
	uint32_t bytes_per_sector;
	uint32_t sectors_per_cluster;
	uint32_t fat_lba;
	uint32_t fat_sectors;
	uint32_t data_lba;
	uint32_t root_cluster;
	uint32_t cluster_count;
	uint8_t cache[HVS_FS_SECTOR_BYTES];
	uint64_t cache_lba;
	uint8_t cache_valid;
} hvs_fs_t;

typedef struct {
	hvs_fs_t *fs;
	uint32_t first_cluster;
	uint32_t current_cluster;
	uint64_t size;
	uint8_t is_dir;
	uint8_t no_fat_chain;
} hvs_file_t;

hvs_status_t hvs_fs_mount(hvs_block_device_t *block, hvs_fs_t *fs);
hvs_status_t hvs_fs_open(hvs_fs_t *fs, const char *path, hvs_file_t *file);
hvs_status_t hvs_fs_exists(hvs_fs_t *fs, const char *path);
hvs_status_t hvs_fs_is_dir(hvs_fs_t *fs, const char *path);
hvs_status_t hvs_fs_read(hvs_file_t *file, uint64_t offset, void *dst, uint32_t len, uint32_t *actual);
hvs_status_t hvs_fs_read_dir(hvs_fs_t *fs, const char *path, uint32_t index, hvs_dirent_t *out);

#endif
