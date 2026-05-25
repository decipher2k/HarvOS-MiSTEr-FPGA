// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_YAML_H
#define HARVOS_YAML_H

#include "harvos_block.h"

#define HVS_YAML_MAX_TEXT 4096u
#define HVS_YAML_MAX_NAME 32u

#define HVS_YAML_SERVICE_STORAGE (1u << 0)
#define HVS_YAML_SERVICE_NET     (1u << 1)
#define HVS_YAML_SERVICE_IPC     (1u << 2)
#define HVS_YAML_SERVICE_DEBUG   (1u << 3)
#define HVS_YAML_SERVICE_DMA     (1u << 4)
#define HVS_YAML_SERVICE_MMIO    (1u << 5)

typedef struct {
	char app_name[HVS_YAML_MAX_NAME];
	uint32_t service_mask;
	uint32_t memory_limit;
	uint32_t debug_flags;
} hvs_yaml_app_config_t;

hvs_status_t hvs_yaml_parse_app_config(
	const uint8_t *data,
	uint32_t len,
	const char *expected_app_name,
	hvs_yaml_app_config_t *out);

#endif
