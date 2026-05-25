// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_NET_MMIO_H
#define HARVOS_NET_MMIO_H

#include "harvos_block.h"
#include "../../include/harvos_abi.h"

#define HVS_NET_FRAME_MAX 1518u
#define HVS_NET_RX_QUEUE_LEN 16u
#define HVS_NET_TX_QUEUE_LEN 16u

typedef struct {
	uintptr_t base;
	uint32_t dma_addr;
	uint8_t *bounce;
	uint32_t bounce_bytes;
	uint32_t timeout_cycles;
} hvs_net_mmio_t;

typedef struct {
	uint16_t len;
	uint16_t flags;
	uint8_t data[HVS_NET_FRAME_MAX];
} hvs_net_frame_t;

typedef struct {
	hvs_net_mmio_t *mmio;
	hvs_net_frame_t rx[HVS_NET_RX_QUEUE_LEN];
	hvs_net_frame_t tx[HVS_NET_TX_QUEUE_LEN];
	uint32_t rx_head;
	uint32_t rx_tail;
	uint32_t rx_count;
	uint32_t tx_head;
	uint32_t tx_tail;
	uint32_t tx_count;
	uint32_t rx_frames;
	uint32_t tx_frames;
	uint32_t rx_drops;
	uint32_t tx_drops;
	uint32_t faults;
} hvs_net_driver_t;

void hvs_net_mmio_init(
	hvs_net_mmio_t *net,
	uintptr_t base,
	uint32_t dma_addr,
	void *bounce,
	uint32_t bounce_bytes);

hvs_status_t hvs_net_mmio_send_frame(hvs_net_mmio_t *net, const void *frame, uint32_t len);
hvs_status_t hvs_net_mmio_recv_frame(hvs_net_mmio_t *net, void *frame, uint32_t max_len, uint32_t *actual);
uint32_t hvs_net_mmio_status(hvs_net_mmio_t *net);
uint32_t hvs_net_mmio_rx_pending(hvs_net_mmio_t *net);

void hvs_net_driver_init(hvs_net_driver_t *driver, hvs_net_mmio_t *mmio);
uint32_t hvs_net_driver_rx_available(const hvs_net_driver_t *driver);
uint32_t hvs_net_driver_tx_space(const hvs_net_driver_t *driver);
hvs_status_t hvs_net_driver_enqueue_tx(hvs_net_driver_t *driver, const void *frame, uint32_t len);
hvs_status_t hvs_net_driver_dequeue_rx(hvs_net_driver_t *driver, void *frame, uint32_t max_len, uint32_t *actual);
hvs_status_t hvs_net_driver_poll(hvs_net_driver_t *driver, uint32_t rx_budget, uint32_t tx_budget);

#endif
