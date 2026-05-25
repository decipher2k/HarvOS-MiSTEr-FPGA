// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_MISTER_HPS_BLOCK_H
#define HARVOS_MISTER_HPS_BLOCK_H

#include "harvos_block.h"

#define HVS_MISTER_HPS_MAX_DRIVES 2u

typedef struct {
	uintptr_t base;
	uint32_t timeout_cycles;
	hvs_block_device_t drives[HVS_MISTER_HPS_MAX_DRIVES];
} hvs_mister_hps_block_t;

void hvs_mister_hps_block_init(hvs_mister_hps_block_t *hps, uintptr_t base);

#endif
