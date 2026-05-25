// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_BLOCK_H
#define HARVOS_BLOCK_H

#include <stddef.h>
#include <stdint.h>

typedef enum {
	HVS_OK = 0,
	HVS_ERR_IO = -1,
	HVS_ERR_TIMEOUT = -2,
	HVS_ERR_NOT_FOUND = -3,
	HVS_ERR_UNSUPPORTED = -4,
	HVS_ERR_BAD_STATE = -5,
	HVS_ERR_BAD_FORMAT = -6,
	HVS_ERR_NO_SPACE = -7,
	HVS_ERR_SECURITY = -8,
	HVS_ERR_TOO_MANY = -9,
	HVS_ERR_INVALID = -10
} hvs_status_t;

typedef struct hvs_block_device hvs_block_device_t;

struct hvs_block_device {
	uint32_t block_size;
	uint64_t block_count;
	void *driver_data;
	hvs_status_t (*read_blocks)(hvs_block_device_t *dev, uint64_t lba, uint32_t count, void *dst);
	hvs_status_t (*write_blocks)(hvs_block_device_t *dev, uint64_t lba, uint32_t count, const void *src);
};

#endif
