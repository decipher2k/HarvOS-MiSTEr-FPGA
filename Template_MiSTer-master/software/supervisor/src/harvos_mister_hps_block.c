// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_mister_hps_block.h"
#include "../../include/harvos_abi.h"

typedef struct {
	hvs_mister_hps_block_t *hps;
	uint32_t drive;
} hps_drive_ctx_t;

static hps_drive_ctx_t drive_ctx[HVS_MISTER_HPS_MAX_DRIVES];

static volatile uint32_t *regp(hvs_mister_hps_block_t *hps, uint32_t off)
{
	return (volatile uint32_t *)(hps->base + off);
}

static uint32_t reg_read(hvs_mister_hps_block_t *hps, uint32_t off)
{
	return *regp(hps, off);
}

static void reg_write(hvs_mister_hps_block_t *hps, uint32_t off, uint32_t value)
{
	*regp(hps, off) = value;
}

static hvs_status_t wait_done(hvs_mister_hps_block_t *hps)
{
	uint32_t i;
	for(i = 0; i < hps->timeout_cycles; ++i) {
		uint32_t status = reg_read(hps, HARVOS_HPS_BLOCK_REG_STATUS);
		if(status & HARVOS_HPS_BLOCK_STATUS_FAULT) return HVS_ERR_IO;
		if(status & HARVOS_HPS_BLOCK_STATUS_DONE) return HVS_OK;
	}
	return HVS_ERR_TIMEOUT;
}

static hvs_status_t start_io(hvs_mister_hps_block_t *hps, uint32_t drive, uint64_t lba, uint32_t count, uint8_t write)
{
	if(drive >= HVS_MISTER_HPS_MAX_DRIVES) return HVS_ERR_INVALID;
	if(count == 0u || count > 64u || (lba >> 32) != 0u) return HVS_ERR_INVALID;
	reg_write(hps, HARVOS_HPS_BLOCK_REG_CTRL, HARVOS_HPS_BLOCK_CTRL_CLEAR);
	reg_write(hps, HARVOS_HPS_BLOCK_REG_DRIVE, drive);
	reg_write(hps, HARVOS_HPS_BLOCK_REG_LBA_LO, (uint32_t)lba);
	reg_write(hps, HARVOS_HPS_BLOCK_REG_LBA_HI, 0u);
	reg_write(hps, HARVOS_HPS_BLOCK_REG_COUNT, count);
	reg_write(hps, HARVOS_HPS_BLOCK_REG_CTRL,
		HARVOS_HPS_BLOCK_CTRL_START | (write ? HARVOS_HPS_BLOCK_CTRL_WRITE : 0u));
	return wait_done(hps);
}

static void copy_from_window(hvs_mister_hps_block_t *hps, void *dst, uint32_t words)
{
	uint32_t i;
	uint16_t *out = (uint16_t *)dst;
	reg_write(hps, HARVOS_HPS_BLOCK_REG_BUF_IDX, 0u);
	for(i = 0; i < words; i += 2u) {
		uint32_t v = reg_read(hps, HARVOS_HPS_BLOCK_REG_BUF_DATA);
		out[i] = (uint16_t)v;
		if(i + 1u < words) out[i + 1u] = (uint16_t)(v >> 16);
	}
}

static void copy_to_window(hvs_mister_hps_block_t *hps, const void *src, uint32_t words)
{
	uint32_t i;
	const uint16_t *in = (const uint16_t *)src;
	reg_write(hps, HARVOS_HPS_BLOCK_REG_BUF_IDX, 0u);
	for(i = 0; i < words; i += 2u) {
		uint32_t lo = in[i];
		uint32_t hi = (i + 1u < words) ? in[i + 1u] : 0u;
		reg_write(hps, HARVOS_HPS_BLOCK_REG_BUF_DATA, lo | (hi << 16));
	}
}

static hvs_status_t hps_read_blocks(hvs_block_device_t *dev, uint64_t lba, uint32_t count, void *dst)
{
	hps_drive_ctx_t *ctx = (hps_drive_ctx_t *)dev->driver_data;
	hvs_status_t st = start_io(ctx->hps, ctx->drive, lba, count, 0u);
	if(st != HVS_OK) return st;
	copy_from_window(ctx->hps, dst, count * 256u);
	return HVS_OK;
}

static hvs_status_t hps_write_blocks(hvs_block_device_t *dev, uint64_t lba, uint32_t count, const void *src)
{
	hps_drive_ctx_t *ctx = (hps_drive_ctx_t *)dev->driver_data;
	copy_to_window(ctx->hps, src, count * 256u);
	return start_io(ctx->hps, ctx->drive, lba, count, 1u);
}

void hvs_mister_hps_block_init(hvs_mister_hps_block_t *hps, uintptr_t base)
{
	uint32_t i;
	hps->base = base;
	hps->timeout_cycles = 10000000u;
	for(i = 0; i < HVS_MISTER_HPS_MAX_DRIVES; ++i) {
		uint32_t size_lo;
		uint32_t size_hi;
		drive_ctx[i].hps = hps;
		drive_ctx[i].drive = i;
		reg_write(hps, HARVOS_HPS_BLOCK_REG_DRIVE, i);
		size_lo = reg_read(hps, HARVOS_HPS_BLOCK_REG_SIZE_LO);
		size_hi = reg_read(hps, HARVOS_HPS_BLOCK_REG_SIZE_HI);
		hps->drives[i].block_size = 512u;
		hps->drives[i].block_count = (((uint64_t)size_hi << 32) | size_lo) / 512u;
		hps->drives[i].driver_data = &drive_ctx[i];
		hps->drives[i].read_blocks = hps_read_blocks;
		hps->drives[i].write_blocks = hps_write_blocks;
	}
}
