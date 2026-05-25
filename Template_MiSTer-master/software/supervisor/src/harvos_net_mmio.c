// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_net_mmio.h"

static volatile uint32_t *regp(hvs_net_mmio_t *net, uint32_t off)
{
	return (volatile uint32_t *)(net->base + off);
}

static uint32_t reg_read(hvs_net_mmio_t *net, uint32_t off)
{
	return *regp(net, off);
}

static void reg_write(hvs_net_mmio_t *net, uint32_t off, uint32_t value)
{
	*regp(net, off) = value;
}

static void copy_bytes(uint8_t *dst, const uint8_t *src, uint32_t len)
{
	uint32_t i;
	for(i = 0; i < len; ++i) dst[i] = src[i];
}

static void zero_tail(uint8_t *dst, uint32_t start, uint32_t end)
{
	uint32_t i;
	for(i = start; i < end; ++i) dst[i] = 0u;
}

static void zero_bytes(uint8_t *dst, uint32_t len)
{
	uint32_t i;
	for(i = 0; i < len; ++i) dst[i] = 0u;
}

static uint32_t align4(uint32_t value)
{
	return (value + 3u) & ~3u;
}

static uint32_t ring_next(uint32_t value, uint32_t limit)
{
	value++;
	return value == limit ? 0u : value;
}

static hvs_status_t wait_done(hvs_net_mmio_t *net)
{
	uint32_t i;
	uint8_t seen_busy = 0u;
	for(i = 0; i < net->timeout_cycles; ++i) {
		uint32_t status = reg_read(net, HARVOS_NET_REG_STATUS);
		if(status & HARVOS_NET_STATUS_FAULT) return HVS_ERR_IO;
		if(status & HARVOS_NET_STATUS_BUSY) seen_busy = 1u;
		if((status & HARVOS_NET_STATUS_DONE) && seen_busy) return HVS_OK;
	}
	return HVS_ERR_TIMEOUT;
}

static hvs_status_t wait_idle(hvs_net_mmio_t *net)
{
	uint32_t i;
	for(i = 0; i < net->timeout_cycles; ++i) {
		uint32_t status = reg_read(net, HARVOS_NET_REG_STATUS);
		if(status & HARVOS_NET_STATUS_FAULT) return HVS_ERR_IO;
		if((status & HARVOS_NET_STATUS_BUSY) == 0u) return HVS_OK;
	}
	return HVS_ERR_TIMEOUT;
}

void hvs_net_mmio_init(
	hvs_net_mmio_t *net,
	uintptr_t base,
	uint32_t dma_addr,
	void *bounce,
	uint32_t bounce_bytes)
{
	net->base = base;
	net->dma_addr = dma_addr;
	net->bounce = (uint8_t *)bounce;
	net->bounce_bytes = bounce_bytes;
	net->timeout_cycles = 100000u;

	reg_write(net, HARVOS_NET_REG_CTRL,
		HARVOS_NET_CTRL_ENABLE | HARVOS_NET_CTRL_CLEAR |
		HARVOS_NET_CTRL_TX_CSUM_OFFLOAD | HARVOS_NET_CTRL_TX_DESC_RING);
	reg_write(net, HARVOS_NET_REG_IRQ_EN,
		HARVOS_NET_IRQ_RX_READY | HARVOS_NET_IRQ_RX_DONE | HARVOS_NET_IRQ_TX_DONE |
		HARVOS_NET_IRQ_FAULT | HARVOS_NET_IRQ_LINK);
	reg_write(net, HARVOS_NET_REG_RX_ADDR, dma_addr);
	reg_write(net, HARVOS_NET_REG_TX_ADDR, dma_addr);
}

hvs_status_t hvs_net_mmio_send_frame(hvs_net_mmio_t *net, const void *frame, uint32_t len)
{
	uint32_t dma_len = align4(len);
	if(!frame || len == 0u || dma_len > net->bounce_bytes) return HVS_ERR_INVALID;
	if(wait_idle(net) != HVS_OK) return HVS_ERR_TIMEOUT;
	if((reg_read(net, HARVOS_NET_REG_STATUS) & HARVOS_NET_STATUS_TX_READY) == 0u) {
		return HVS_ERR_NO_SPACE;
	}

	copy_bytes(net->bounce, (const uint8_t *)frame, len);
	zero_tail(net->bounce, len, dma_len);

	reg_write(net, HARVOS_NET_REG_TX_ADDR, net->dma_addr);
	reg_write(net, HARVOS_NET_REG_TX_LEN, len);
	reg_write(net, HARVOS_NET_REG_COMMAND, HARVOS_NET_CMD_TX_START);
	return wait_done(net);
}

hvs_status_t hvs_net_mmio_recv_frame(hvs_net_mmio_t *net, void *frame, uint32_t max_len, uint32_t *actual)
{
	hvs_status_t st;
	uint32_t dma_len = align4(max_len);
	uint32_t got;
	if(!frame || max_len == 0u || dma_len > net->bounce_bytes) return HVS_ERR_INVALID;
	st = wait_idle(net);
	if(st != HVS_OK) return st;

	reg_write(net, HARVOS_NET_REG_RX_ADDR, net->dma_addr);
	reg_write(net, HARVOS_NET_REG_RX_LEN, max_len);
	reg_write(net, HARVOS_NET_REG_COMMAND, HARVOS_NET_CMD_RX_START);
	st = wait_done(net);
	if(st != HVS_OK) return st;

	got = reg_read(net, HARVOS_NET_REG_FRAME_LEN);
	if(got > max_len) got = max_len;
	copy_bytes((uint8_t *)frame, net->bounce, got);
	if(actual) *actual = got;
	return HVS_OK;
}

uint32_t hvs_net_mmio_status(hvs_net_mmio_t *net)
{
	return reg_read(net, HARVOS_NET_REG_STATUS);
}

uint32_t hvs_net_mmio_rx_pending(hvs_net_mmio_t *net)
{
	return reg_read(net, HARVOS_NET_REG_RX_PENDING) & 0xFFFFu;
}

void hvs_net_driver_init(hvs_net_driver_t *driver, hvs_net_mmio_t *mmio)
{
	if(!driver) return;
	zero_bytes((uint8_t *)driver, sizeof(*driver));
	driver->mmio = mmio;
}

uint32_t hvs_net_driver_rx_available(const hvs_net_driver_t *driver)
{
	return driver ? driver->rx_count : 0u;
}

uint32_t hvs_net_driver_tx_space(const hvs_net_driver_t *driver)
{
	return driver ? (HVS_NET_TX_QUEUE_LEN - driver->tx_count) : 0u;
}

hvs_status_t hvs_net_driver_enqueue_tx(hvs_net_driver_t *driver, const void *frame, uint32_t len)
{
	hvs_net_frame_t *slot;
	if(!driver || !driver->mmio || !frame || len == 0u || len > HVS_NET_FRAME_MAX) {
		return HVS_ERR_INVALID;
	}
	if(driver->tx_count >= HVS_NET_TX_QUEUE_LEN) {
		driver->tx_drops++;
		return HVS_ERR_NO_SPACE;
	}
	slot = &driver->tx[driver->tx_tail];
	slot->len = (uint16_t)len;
	slot->flags = 0u;
	copy_bytes(slot->data, (const uint8_t *)frame, len);
	driver->tx_tail = ring_next(driver->tx_tail, HVS_NET_TX_QUEUE_LEN);
	driver->tx_count++;
	return HVS_OK;
}

hvs_status_t hvs_net_driver_dequeue_rx(hvs_net_driver_t *driver, void *frame, uint32_t max_len, uint32_t *actual)
{
	hvs_net_frame_t *slot;
	uint32_t len;
	if(!driver || !frame || max_len == 0u) return HVS_ERR_INVALID;
	if(driver->rx_count == 0u) return HVS_ERR_NOT_FOUND;
	slot = &driver->rx[driver->rx_head];
	len = slot->len;
	if(max_len < len) return HVS_ERR_INVALID;
	copy_bytes((uint8_t *)frame, slot->data, len);
	if(actual) *actual = len;
	driver->rx_head = ring_next(driver->rx_head, HVS_NET_RX_QUEUE_LEN);
	driver->rx_count--;
	return HVS_OK;
}

hvs_status_t hvs_net_driver_poll(hvs_net_driver_t *driver, uint32_t rx_budget, uint32_t tx_budget)
{
	hvs_status_t st = HVS_OK;
	uint32_t work;
	uint32_t pending;
	if(!driver || !driver->mmio) return HVS_ERR_INVALID;

	for(work = 0; work < tx_budget && driver->tx_count != 0u; ++work) {
		hvs_net_frame_t *slot = &driver->tx[driver->tx_head];
		st = hvs_net_mmio_send_frame(driver->mmio, slot->data, slot->len);
		if(st != HVS_OK) {
			driver->faults++;
			return st;
		}
		driver->tx_head = ring_next(driver->tx_head, HVS_NET_TX_QUEUE_LEN);
		driver->tx_count--;
		driver->tx_frames++;
	}

	pending = hvs_net_mmio_rx_pending(driver->mmio);
	for(work = 0; work < rx_budget; ++work) {
		hvs_net_frame_t *slot;
		uint32_t got = 0u;
		if(pending == 0u) {
			uint32_t status = hvs_net_mmio_status(driver->mmio);
			if((status & HARVOS_NET_STATUS_RX_VALID) == 0u) break;
			pending = 1u;
		}
		if(driver->rx_count >= HVS_NET_RX_QUEUE_LEN) {
			driver->rx_drops++;
			break;
		}
		slot = &driver->rx[driver->rx_tail];
		st = hvs_net_mmio_recv_frame(driver->mmio, slot->data, HVS_NET_FRAME_MAX, &got);
		if(st != HVS_OK) {
			driver->faults++;
			return st;
		}
		if(got > HVS_NET_FRAME_MAX) got = HVS_NET_FRAME_MAX;
		slot->len = (uint16_t)got;
		slot->flags = 0u;
		driver->rx_tail = ring_next(driver->rx_tail, HVS_NET_RX_QUEUE_LEN);
		driver->rx_count++;
		driver->rx_frames++;
		if(pending != 0u) pending--;
		if(pending == 0u) pending = hvs_net_mmio_rx_pending(driver->mmio);
	}
	if(work != 0u) {
		reg_write(driver->mmio, HARVOS_NET_REG_IRQ_STAT,
			HARVOS_NET_IRQ_RX_READY | HARVOS_NET_IRQ_RX_DONE);
	}

	return HVS_OK;
}
