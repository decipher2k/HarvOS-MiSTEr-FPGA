// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_RUNTIME_MEMORY_H
#define HARVOS_RUNTIME_MEMORY_H

#include "harvos_elf_runtime.h"

typedef struct {
	uint32_t heap_base;
	uint32_t heap_limit;
	uint32_t cursor;
} hvs_runtime_memory_t;

void hvs_runtime_memory_init(hvs_runtime_memory_t *mem, uint32_t heap_base, uint32_t heap_bytes);
hvs_status_t hvs_runtime_memory_make_ops(hvs_runtime_memory_t *mem, hvs_elf_runtime_ops_t *ops);

#endif
