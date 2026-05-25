// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_SERVICES_H
#define HARVOS_SERVICES_H

#include <stddef.h>
#include <stdint.h>

#define HARVOS_NET_FLOWS 8u
#define HARVOS_STORAGE_FILES 8u
#define HARVOS_STORAGE_BYTES 256u
#define HARVOS_DMA_WINDOW_BYTES 2048u

typedef struct {
	uint32_t tokens;
	uint32_t refill;
	uint32_t limit;
	uint32_t drops;
} harvos_net_flow_t;

typedef struct {
	harvos_net_flow_t flows[HARVOS_NET_FLOWS];
	uint32_t audit;
} harvos_net_state_t;

typedef struct {
	char name[16];
	uint8_t base[HARVOS_STORAGE_BYTES];
	uint8_t overlay[HARVOS_STORAGE_BYTES];
	uint8_t overlay_valid[HARVOS_STORAGE_BYTES];
	uint32_t size;
	uint8_t immutable;
} harvos_storage_file_t;

typedef struct {
	harvos_storage_file_t files[HARVOS_STORAGE_FILES];
	uint32_t journal_digest;
} harvos_storage_state_t;

typedef struct {
	uint8_t window[HARVOS_DMA_WINDOW_BYTES];
	uint32_t base;
	uint32_t faults;
	uint32_t copies;
} harvos_dma_mediator_t;

void harvos_net_init(harvos_net_state_t *net);
int harvos_net_send(harvos_net_state_t *net, uint32_t flow, uint32_t bytes);
void harvos_net_tick(harvos_net_state_t *net);

void harvos_storage_init(harvos_storage_state_t *storage);
int harvos_storage_create_base(harvos_storage_state_t *storage, const char *name, const uint8_t *data, uint32_t size);
int harvos_storage_read(const harvos_storage_state_t *storage, const char *name, uint32_t off, uint8_t *out, uint32_t len);
int harvos_storage_write_overlay(harvos_storage_state_t *storage, const char *name, uint32_t off, const uint8_t *data, uint32_t len);

void harvos_dma_init(harvos_dma_mediator_t *dma, uint32_t base);
int harvos_dma_copy_in(harvos_dma_mediator_t *dma, uint32_t device_addr, const uint8_t *src, uint32_t len);
int harvos_dma_copy_out(harvos_dma_mediator_t *dma, uint32_t device_addr, uint8_t *dst, uint32_t len);

#endif
