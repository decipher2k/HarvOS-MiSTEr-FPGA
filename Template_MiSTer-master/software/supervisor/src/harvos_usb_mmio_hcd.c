// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_usb_mmio_hcd.h"
#include "../../include/harvos_abi.h"

static volatile uint32_t *regp(hvs_usb_mmio_hcd_t *mmio, uint32_t off)
{
	return (volatile uint32_t *)(mmio->base + off);
}

static uint32_t reg_read(hvs_usb_mmio_hcd_t *mmio, uint32_t off)
{
	return *regp(mmio, off);
}

static void reg_write(hvs_usb_mmio_hcd_t *mmio, uint32_t off, uint32_t value)
{
	*regp(mmio, off) = value;
}

static void copy_bytes(uint8_t *dst, const uint8_t *src, uint32_t len)
{
	uint32_t i;
	for(i = 0; i < len; ++i) dst[i] = src[i];
}

static void delay_ms(void *ctx, uint32_t ms)
{
	(void)ctx;
	(void)ms;
}

static void log_noop(void *ctx, hvs_status_t status, const char *msg)
{
	(void)ctx;
	(void)status;
	(void)msg;
}

static hvs_status_t wait_done(hvs_usb_mmio_hcd_t *mmio)
{
	uint32_t i;
	for(i = 0; i < mmio->timeout_cycles; ++i) {
		uint32_t status = reg_read(mmio, HARVOS_USB_REG_STATUS);
		if(status & HARVOS_USB_STATUS_FAULT) return HVS_ERR_IO;
		if(status & HARVOS_USB_STATUS_DONE) return HVS_OK;
	}
	return HVS_ERR_TIMEOUT;
}

static hvs_status_t start_dma(hvs_usb_mmio_hcd_t *mmio, uint32_t len, uint8_t token_pid, uint8_t data_pid)
{
	if(len > mmio->bounce_bytes) return HVS_ERR_INVALID;
	reg_write(mmio, HARVOS_USB_REG_IRQ_STAT,
		HARVOS_USB_IRQ_DONE |
		HARVOS_USB_IRQ_FAULT |
		HARVOS_USB_IRQ_STALL |
		HARVOS_USB_IRQ_NAK_LIMIT |
		HARVOS_USB_IRQ_OVERCURRENT);
	reg_write(mmio, HARVOS_USB_REG_DMA_ADDR, mmio->dma_addr);
	reg_write(mmio, HARVOS_USB_REG_DMA_LEN, len);
	reg_write(mmio, HARVOS_USB_REG_COMMAND,
		1u | ((uint32_t)token_pid << 8) | ((uint32_t)data_pid << 16));
	return wait_done(mmio);
}

static hvs_status_t reset_port(void *ctx, uint32_t port)
{
	hvs_usb_mmio_hcd_t *mmio = (hvs_usb_mmio_hcd_t *)ctx;
	if(port != 0u) return HVS_ERR_NOT_FOUND;
	reg_write(mmio, HARVOS_USB_REG_CTRL,
		HARVOS_USB_CTRL_ENABLE |
		HARVOS_USB_CTRL_SIM_CONNECT |
		HARVOS_USB_CTRL_PORT_POWER |
		HARVOS_USB_CTRL_CLEAR);
	reg_write(mmio, HARVOS_USB_REG_IRQ_EN,
		HARVOS_USB_IRQ_DONE |
		HARVOS_USB_IRQ_FAULT |
		HARVOS_USB_IRQ_STALL |
		HARVOS_USB_IRQ_NAK_LIMIT |
		HARVOS_USB_IRQ_OVERCURRENT);
	return HVS_OK;
}

static hvs_status_t port_connected(void *ctx, uint32_t port)
{
	hvs_usb_mmio_hcd_t *mmio = (hvs_usb_mmio_hcd_t *)ctx;
	if(port != 0u) return HVS_ERR_NOT_FOUND;
	return (reg_read(mmio, HARVOS_USB_REG_STATUS) & HARVOS_USB_STATUS_CONNECTED) ? HVS_OK : HVS_ERR_NOT_FOUND;
}

static hvs_status_t control_transfer(
	void *ctx,
	uint8_t address,
	uint8_t ep0_max_packet,
	const uint8_t setup[8],
	void *data,
	uint16_t length,
	uint8_t dir_in)
{
	hvs_usb_mmio_hcd_t *mmio = (hvs_usb_mmio_hcd_t *)ctx;
	(void)address;
	(void)ep0_max_packet;
	reg_write(mmio, HARVOS_USB_REG_TOKEN,
		((uint32_t)setup[1] << 24) |
		((uint32_t)setup[3] << 16) |
		((uint32_t)setup[2] << 8) |
		(uint32_t)setup[0]);
	copy_bytes(mmio->bounce, setup, 8u);
	if(!dir_in && data && length) copy_bytes(mmio->bounce, (const uint8_t *)data, length);
	if(start_dma(mmio, length ? length : 8u, HARVOS_USB_PID_SETUP, HARVOS_USB_PID_DATA0) != HVS_OK) return HVS_ERR_IO;
	if(dir_in && data && length) copy_bytes((uint8_t *)data, mmio->bounce, length);
	return HVS_OK;
}

static hvs_status_t bulk_transfer(
	void *ctx,
	uint8_t address,
	uint8_t endpoint,
	void *data,
	uint32_t length,
	uint8_t dir_in,
	uint32_t timeout_ms,
	uint32_t *actual)
{
	hvs_usb_mmio_hcd_t *mmio = (hvs_usb_mmio_hcd_t *)ctx;
	hvs_status_t st;
	(void)address;
	(void)timeout_ms;
	reg_write(mmio, HARVOS_USB_REG_TOKEN, ((uint32_t)endpoint << 16) | (dir_in ? 1u : 0u));
	if(!dir_in && data && length) copy_bytes(mmio->bounce, (const uint8_t *)data, length);
	st = start_dma(mmio, length, dir_in ? HARVOS_USB_PID_IN : HARVOS_USB_PID_OUT, HARVOS_USB_PID_DATA0);
	if(st != HVS_OK) return st;
	if(dir_in && data && length) copy_bytes((uint8_t *)data, mmio->bounce, length);
	if(actual) *actual = reg_read(mmio, HARVOS_USB_REG_ACTUAL);
	return HVS_OK;
}

void hvs_usb_mmio_hcd_init(
	hvs_usb_mmio_hcd_t *mmio,
	uintptr_t base,
	uint32_t dma_addr,
	void *bounce,
	uint32_t bounce_bytes,
	hvs_usb_hcd_t *hcd)
{
	static const hvs_usb_hcd_ops_t ops = {
		reset_port,
		port_connected,
		control_transfer,
		bulk_transfer,
		delay_ms,
		log_noop
	};
	mmio->base = base;
	mmio->dma_addr = dma_addr;
	mmio->bounce = (uint8_t *)bounce;
	mmio->bounce_bytes = bounce_bytes;
	mmio->timeout_cycles = 100000u;
	reg_write(mmio, HARVOS_USB_REG_CTRL,
		HARVOS_USB_CTRL_ENABLE |
		HARVOS_USB_CTRL_SIM_CONNECT |
		HARVOS_USB_CTRL_PORT_POWER |
		HARVOS_USB_CTRL_CLEAR);
	reg_write(mmio, HARVOS_USB_REG_RETRY, 3u);
	reg_write(mmio, HARVOS_USB_REG_IRQ_EN,
		HARVOS_USB_IRQ_DONE |
		HARVOS_USB_IRQ_FAULT |
		HARVOS_USB_IRQ_STALL |
		HARVOS_USB_IRQ_NAK_LIMIT |
		HARVOS_USB_IRQ_OVERCURRENT);
	hvs_usb_host_init(hcd, mmio, &ops, 1u);
}
