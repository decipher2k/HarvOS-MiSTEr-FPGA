// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_USB_HOST_H
#define HARVOS_USB_HOST_H

#include "harvos_block.h"

#define HVS_USB_MAX_MSC_DEVICES 8u
#define HVS_USB_MAX_CONFIG_BYTES 256u
#define HVS_USB_DIR_IN 1u
#define HVS_USB_DIR_OUT 0u

typedef struct hvs_usb_hcd hvs_usb_hcd_t;

typedef struct {
	hvs_status_t (*reset_port)(void *ctx, uint32_t port);
	hvs_status_t (*port_connected)(void *ctx, uint32_t port);
	hvs_status_t (*control_transfer)(
		void *ctx,
		uint8_t address,
		uint8_t ep0_max_packet,
		const uint8_t setup[8],
		void *data,
		uint16_t length,
		uint8_t dir_in);
	hvs_status_t (*bulk_transfer)(
		void *ctx,
		uint8_t address,
		uint8_t endpoint,
		void *data,
		uint32_t length,
		uint8_t dir_in,
		uint32_t timeout_ms,
		uint32_t *actual);
	void (*delay_ms)(void *ctx, uint32_t ms);
	void (*log)(void *ctx, hvs_status_t status, const char *msg);
} hvs_usb_hcd_ops_t;

struct hvs_usb_hcd {
	void *ctx;
	const hvs_usb_hcd_ops_t *ops;
	uint32_t port_count;
	uint8_t next_address;
};

typedef struct {
	hvs_block_device_t block;
	hvs_usb_hcd_t *hcd;
	uint8_t address;
	uint8_t ep_in;
	uint8_t ep_out;
	uint8_t ep0_max_packet;
	uint8_t interface_number;
	uint32_t block_size;
	uint64_t block_count;
	uint32_t tag;
} hvs_usb_msc_device_t;

void hvs_usb_host_init(hvs_usb_hcd_t *hcd, void *ctx, const hvs_usb_hcd_ops_t *ops, uint32_t port_count);
hvs_status_t hvs_usb_enumerate_msc(hvs_usb_hcd_t *hcd, hvs_usb_msc_device_t *out, uint32_t max_devices, uint32_t *count);
hvs_status_t hvs_usb_msc_read_blocks(hvs_block_device_t *dev, uint64_t lba, uint32_t count, void *dst);
hvs_status_t hvs_usb_msc_write_blocks(hvs_block_device_t *dev, uint64_t lba, uint32_t count, const void *src);

#endif
