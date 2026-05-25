// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_USB_MMIO_HCD_H
#define HARVOS_USB_MMIO_HCD_H

#include "harvos_usb_host.h"

typedef struct {
	uintptr_t base;
	uint32_t dma_addr;
	uint8_t *bounce;
	uint32_t bounce_bytes;
	uint32_t timeout_cycles;
} hvs_usb_mmio_hcd_t;

void hvs_usb_mmio_hcd_init(
	hvs_usb_mmio_hcd_t *mmio,
	uintptr_t base,
	uint32_t dma_addr,
	void *bounce,
	uint32_t bounce_bytes,
	hvs_usb_hcd_t *hcd);

#endif
