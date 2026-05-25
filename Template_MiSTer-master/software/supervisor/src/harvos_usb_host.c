// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_usb_host.h"

#define USB_REQ_GET_DESCRIPTOR 0x06u
#define USB_REQ_SET_ADDRESS 0x05u
#define USB_REQ_SET_CONFIGURATION 0x09u
#define USB_DT_DEVICE 0x01u
#define USB_DT_CONFIG 0x02u
#define USB_DT_INTERFACE 0x04u
#define USB_DT_ENDPOINT 0x05u
#define USB_CLASS_MASS_STORAGE 0x08u
#define USB_MSC_SUBCLASS_SCSI 0x06u
#define USB_MSC_PROTOCOL_BOT 0x50u
#define USB_ENDPOINT_BULK 0x02u
#define USB_ENDPOINT_DIR_IN 0x80u
#define USB_TIMEOUT_MS 5000u

#define CBW_SIGNATURE 0x43425355u
#define CSW_SIGNATURE 0x53425355u
#define SCSI_INQUIRY 0x12u
#define SCSI_TEST_UNIT_READY 0x00u
#define SCSI_READ_CAPACITY_10 0x25u
#define SCSI_READ_10 0x28u
#define SCSI_WRITE_10 0x2Au

static uint16_t rd16(const uint8_t *p)
{
	return (uint16_t)p[0] | ((uint16_t)p[1] << 8);
}

static uint32_t rd32(const uint8_t *p)
{
	return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

static uint32_t rd32be(const uint8_t *p)
{
	return ((uint32_t)p[0] << 24) | ((uint32_t)p[1] << 16) | ((uint32_t)p[2] << 8) | (uint32_t)p[3];
}

static void wr16be(uint8_t *p, uint16_t v)
{
	p[0] = (uint8_t)(v >> 8);
	p[1] = (uint8_t)v;
}

static void wr32(uint8_t *p, uint32_t v)
{
	p[0] = (uint8_t)v;
	p[1] = (uint8_t)(v >> 8);
	p[2] = (uint8_t)(v >> 16);
	p[3] = (uint8_t)(v >> 24);
}

static void wr32be(uint8_t *p, uint32_t v)
{
	p[0] = (uint8_t)(v >> 24);
	p[1] = (uint8_t)(v >> 16);
	p[2] = (uint8_t)(v >> 8);
	p[3] = (uint8_t)v;
}

static void zero(void *ptr, uint32_t len)
{
	uint8_t *p = (uint8_t *)ptr;
	while(len--) *p++ = 0;
}

static void usb_log(hvs_usb_hcd_t *hcd, hvs_status_t status, const char *msg)
{
	if(hcd->ops->log) hcd->ops->log(hcd->ctx, status, msg);
}

static hvs_status_t usb_setup(
	hvs_usb_hcd_t *hcd,
	uint8_t addr,
	uint8_t ep0,
	uint8_t bm_request,
	uint8_t request,
	uint16_t value,
	uint16_t index,
	void *data,
	uint16_t len,
	uint8_t dir_in)
{
	uint8_t setup[8];
	setup[0] = bm_request;
	setup[1] = request;
	setup[2] = (uint8_t)value;
	setup[3] = (uint8_t)(value >> 8);
	setup[4] = (uint8_t)index;
	setup[5] = (uint8_t)(index >> 8);
	setup[6] = (uint8_t)len;
	setup[7] = (uint8_t)(len >> 8);
	return hcd->ops->control_transfer(hcd->ctx, addr, ep0, setup, data, len, dir_in);
}

static hvs_status_t get_descriptor(
	hvs_usb_hcd_t *hcd,
	uint8_t addr,
	uint8_t ep0,
	uint8_t type,
	uint8_t index,
	void *data,
	uint16_t len)
{
	return usb_setup(
		hcd,
		addr,
		ep0,
		0x80u,
		USB_REQ_GET_DESCRIPTOR,
		((uint16_t)type << 8) | index,
		0u,
		data,
		len,
		HVS_USB_DIR_IN);
}

static hvs_status_t set_address(hvs_usb_hcd_t *hcd, uint8_t address)
{
	hvs_status_t st = usb_setup(hcd, 0u, 8u, 0x00u, USB_REQ_SET_ADDRESS, address, 0u, 0, 0u, HVS_USB_DIR_OUT);
	if(st == HVS_OK && hcd->ops->delay_ms) hcd->ops->delay_ms(hcd->ctx, 10u);
	return st;
}

static hvs_status_t set_configuration(hvs_usb_hcd_t *hcd, uint8_t address, uint8_t ep0, uint8_t configuration)
{
	return usb_setup(hcd, address, ep0, 0x00u, USB_REQ_SET_CONFIGURATION, configuration, 0u, 0, 0u, HVS_USB_DIR_OUT);
}

static hvs_status_t msc_bulk(
	hvs_usb_msc_device_t *msc,
	uint8_t endpoint,
	void *data,
	uint32_t length,
	uint8_t dir_in,
	uint32_t *actual)
{
	return msc->hcd->ops->bulk_transfer(
		msc->hcd->ctx,
		msc->address,
		endpoint,
		data,
		length,
		dir_in,
		USB_TIMEOUT_MS,
		actual);
}

static hvs_status_t msc_command(
	hvs_usb_msc_device_t *msc,
	const uint8_t *cdb,
	uint8_t cdb_len,
	void *data,
	uint32_t data_len,
	uint8_t dir_in)
{
	uint8_t cbw[31];
	uint8_t csw[13];
	uint32_t actual = 0;
	hvs_status_t st;

	zero(cbw, sizeof(cbw));
	wr32(&cbw[0], CBW_SIGNATURE);
	wr32(&cbw[4], ++msc->tag);
	wr32(&cbw[8], data_len);
	cbw[12] = dir_in ? 0x80u : 0x00u;
	cbw[13] = 0u;
	cbw[14] = cdb_len;
	for(actual = 0; actual < cdb_len && actual < 16u; ++actual) cbw[15u + actual] = cdb[actual];

	st = msc_bulk(msc, msc->ep_out, cbw, sizeof(cbw), HVS_USB_DIR_OUT, &actual);
	if(st != HVS_OK || actual != sizeof(cbw)) return st != HVS_OK ? st : HVS_ERR_IO;

	if(data_len != 0u) {
		st = msc_bulk(msc, dir_in ? msc->ep_in : msc->ep_out, data, data_len, dir_in, &actual);
		if(st != HVS_OK) return st;
		if(actual != data_len) return HVS_ERR_IO;
	}

	zero(csw, sizeof(csw));
	st = msc_bulk(msc, msc->ep_in, csw, sizeof(csw), HVS_USB_DIR_IN, &actual);
	if(st != HVS_OK || actual != sizeof(csw)) return st != HVS_OK ? st : HVS_ERR_IO;
	if(rd32(&csw[0]) != CSW_SIGNATURE) return HVS_ERR_BAD_FORMAT;
	if(rd32(&csw[4]) != msc->tag) return HVS_ERR_BAD_STATE;
	if(csw[12] != 0u) return HVS_ERR_IO;
	return HVS_OK;
}

static hvs_status_t msc_probe_capacity(hvs_usb_msc_device_t *msc)
{
	uint8_t inquiry[36];
	uint8_t cap[8];
	uint8_t cdb[16];
	hvs_status_t st;
	uint32_t last_lba;
	uint32_t block_size;

	zero(cdb, sizeof(cdb));
	cdb[0] = SCSI_INQUIRY;
	cdb[4] = sizeof(inquiry);
	st = msc_command(msc, cdb, 6u, inquiry, sizeof(inquiry), HVS_USB_DIR_IN);
	if(st != HVS_OK) return st;

	zero(cdb, sizeof(cdb));
	cdb[0] = SCSI_TEST_UNIT_READY;
	st = msc_command(msc, cdb, 6u, 0, 0u, HVS_USB_DIR_IN);
	if(st != HVS_OK) return st;

	zero(cdb, sizeof(cdb));
	cdb[0] = SCSI_READ_CAPACITY_10;
	st = msc_command(msc, cdb, 10u, cap, sizeof(cap), HVS_USB_DIR_IN);
	if(st != HVS_OK) return st;

	last_lba = rd32be(&cap[0]);
	block_size = rd32be(&cap[4]);
	if(block_size == 0u || block_size > 4096u) return HVS_ERR_UNSUPPORTED;

	msc->block_size = block_size;
	msc->block_count = (uint64_t)last_lba + 1u;
	msc->block.block_size = block_size;
	msc->block.block_count = msc->block_count;
	msc->block.driver_data = msc;
	msc->block.read_blocks = hvs_usb_msc_read_blocks;
	msc->block.write_blocks = hvs_usb_msc_write_blocks;
	return HVS_OK;
}

static hvs_status_t parse_msc_config(
	const uint8_t *cfg,
	uint16_t cfg_len,
	uint8_t *configuration,
	uint8_t *iface,
	uint8_t *ep_in,
	uint8_t *ep_out)
{
	uint16_t off = 0;
	uint8_t in_msc = 0;

	if(cfg_len < 9u || cfg[1] != USB_DT_CONFIG) return HVS_ERR_BAD_FORMAT;
	*configuration = cfg[5];
	*iface = 0xFFu;
	*ep_in = 0u;
	*ep_out = 0u;

	while(off + 2u <= cfg_len) {
		uint8_t len = cfg[off];
		uint8_t type = cfg[off + 1u];
		if(len < 2u || off + len > cfg_len) break;
		if(type == USB_DT_INTERFACE && len >= 9u) {
			in_msc =
				(cfg[off + 5u] == USB_CLASS_MASS_STORAGE) &&
				(cfg[off + 6u] == USB_MSC_SUBCLASS_SCSI) &&
				(cfg[off + 7u] == USB_MSC_PROTOCOL_BOT);
			if(in_msc) *iface = cfg[off + 2u];
		} else if(type == USB_DT_ENDPOINT && in_msc && len >= 7u) {
			uint8_t attr = cfg[off + 3u] & 0x03u;
			uint8_t ep = cfg[off + 2u];
			if(attr == USB_ENDPOINT_BULK) {
				if(ep & USB_ENDPOINT_DIR_IN) *ep_in = ep;
				else *ep_out = ep;
			}
		}
		off = (uint16_t)(off + len);
	}

	if(*iface == 0xFFu || *ep_in == 0u || *ep_out == 0u) return HVS_ERR_NOT_FOUND;
	return HVS_OK;
}

void hvs_usb_host_init(hvs_usb_hcd_t *hcd, void *ctx, const hvs_usb_hcd_ops_t *ops, uint32_t port_count)
{
	hcd->ctx = ctx;
	hcd->ops = ops;
	hcd->port_count = port_count;
	hcd->next_address = 1u;
}

hvs_status_t hvs_usb_enumerate_msc(hvs_usb_hcd_t *hcd, hvs_usb_msc_device_t *out, uint32_t max_devices, uint32_t *count)
{
	uint32_t port;
	*count = 0u;

	for(port = 0; port < hcd->port_count && *count < max_devices; ++port) {
		uint8_t dev[18];
		uint8_t cfg[HVS_USB_MAX_CONFIG_BYTES];
		uint8_t address;
		uint8_t ep0;
		uint16_t total_len;
		uint8_t configuration;
		hvs_usb_msc_device_t *msc;
		hvs_status_t st;

		if(hcd->ops->port_connected(hcd->ctx, port) != HVS_OK) continue;
		st = hcd->ops->reset_port(hcd->ctx, port);
		if(st != HVS_OK) {
			usb_log(hcd, st, "USB port reset failed");
			continue;
		}

		zero(dev, sizeof(dev));
		st = get_descriptor(hcd, 0u, 8u, USB_DT_DEVICE, 0u, dev, 8u);
		if(st != HVS_OK) {
			usb_log(hcd, st, "USB device descriptor header failed");
			continue;
		}
		ep0 = dev[7] ? dev[7] : 8u;
		address = hcd->next_address++;
		st = set_address(hcd, address);
		if(st != HVS_OK) {
			usb_log(hcd, st, "USB set address failed");
			continue;
		}
		st = get_descriptor(hcd, address, ep0, USB_DT_DEVICE, 0u, dev, sizeof(dev));
		if(st != HVS_OK) {
			usb_log(hcd, st, "USB full device descriptor failed");
			continue;
		}

		zero(cfg, sizeof(cfg));
		st = get_descriptor(hcd, address, ep0, USB_DT_CONFIG, 0u, cfg, 9u);
		if(st != HVS_OK) continue;
		total_len = rd16(&cfg[2]);
		if(total_len > sizeof(cfg)) total_len = sizeof(cfg);
		st = get_descriptor(hcd, address, ep0, USB_DT_CONFIG, 0u, cfg, total_len);
		if(st != HVS_OK) continue;

		msc = &out[*count];
		zero(msc, sizeof(*msc));
		msc->hcd = hcd;
		msc->address = address;
		msc->ep0_max_packet = ep0;
		st = parse_msc_config(cfg, total_len, &configuration, &msc->interface_number, &msc->ep_in, &msc->ep_out);
		if(st != HVS_OK) continue;
		st = set_configuration(hcd, address, ep0, configuration);
		if(st != HVS_OK) continue;
		st = msc_probe_capacity(msc);
		if(st != HVS_OK) {
			usb_log(hcd, st, "USB MSC capacity probe failed");
			continue;
		}
		(*count)++;
	}

	return *count ? HVS_OK : HVS_ERR_NOT_FOUND;
}

hvs_status_t hvs_usb_msc_read_blocks(hvs_block_device_t *dev, uint64_t lba, uint32_t count, void *dst)
{
	hvs_usb_msc_device_t *msc = (hvs_usb_msc_device_t *)dev->driver_data;
	uint8_t cdb[16];
	uint32_t bytes;
	uint32_t todo;
	uint8_t *out = (uint8_t *)dst;

	while(count != 0u) {
		todo = count > 128u ? 128u : count;
		bytes = todo * msc->block_size;
		zero(cdb, sizeof(cdb));
		cdb[0] = SCSI_READ_10;
		wr32be(&cdb[2], (uint32_t)lba);
		wr16be(&cdb[7], (uint16_t)todo);
		if(msc_command(msc, cdb, 10u, out, bytes, HVS_USB_DIR_IN) != HVS_OK) return HVS_ERR_IO;
		lba += todo;
		count -= todo;
		out += bytes;
	}
	return HVS_OK;
}

hvs_status_t hvs_usb_msc_write_blocks(hvs_block_device_t *dev, uint64_t lba, uint32_t count, const void *src)
{
	hvs_usb_msc_device_t *msc = (hvs_usb_msc_device_t *)dev->driver_data;
	uint8_t cdb[16];
	uint32_t bytes;
	uint32_t todo;
	uint8_t *in = (uint8_t *)src;

	while(count != 0u) {
		todo = count > 128u ? 128u : count;
		bytes = todo * msc->block_size;
		zero(cdb, sizeof(cdb));
		cdb[0] = SCSI_WRITE_10;
		wr32be(&cdb[2], (uint32_t)lba);
		wr16be(&cdb[7], (uint16_t)todo);
		if(msc_command(msc, cdb, 10u, in, bytes, HVS_USB_DIR_OUT) != HVS_OK) return HVS_ERR_IO;
		lba += todo;
		count -= todo;
		in += bytes;
	}
	return HVS_OK;
}
