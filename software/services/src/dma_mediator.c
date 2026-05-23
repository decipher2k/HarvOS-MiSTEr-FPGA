// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_services.h"

void harvos_dma_init(harvos_dma_mediator_t *dma, uint32_t base)
{
	uint32_t i;
	for(i = 0; i < HARVOS_DMA_WINDOW_BYTES; ++i) dma->window[i] = 0;
	dma->base = base;
	dma->faults = 0;
	dma->copies = 0;
}

static int check_window(harvos_dma_mediator_t *dma, uint32_t device_addr, uint32_t len)
{
	uint32_t off;
	if(device_addr < dma->base) return -1;
	off = device_addr - dma->base;
	if(len == 0) return -1;
	if(off >= HARVOS_DMA_WINDOW_BYTES) return -1;
	if(len > HARVOS_DMA_WINDOW_BYTES - off) return -1;
	return (int)off;
}

int harvos_dma_copy_in(harvos_dma_mediator_t *dma, uint32_t device_addr, const uint8_t *src, uint32_t len)
{
	int off = check_window(dma, device_addr, len);
	uint32_t i;
	if(off < 0) {
		dma->faults++;
		return -1;
	}
	for(i = 0; i < len; ++i) dma->window[(uint32_t)off + i] = src[i];
	dma->copies++;
	return 0;
}

int harvos_dma_copy_out(harvos_dma_mediator_t *dma, uint32_t device_addr, uint8_t *dst, uint32_t len)
{
	int off = check_window(dma, device_addr, len);
	uint32_t i;
	if(off < 0) {
		dma->faults++;
		return -1;
	}
	for(i = 0; i < len; ++i) dst[i] = dma->window[(uint32_t)off + i];
	dma->copies++;
	return 0;
}
