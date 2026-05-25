// Copyright 2025 Dennis Michael Heine

#include <stdint.h>
#include "../../include/harvos_abi.h"

#define HARVTTP_FRAME_MAX 1518u
#define HARVTTP_HTTP_PORT 80u
#define HARVTTP_DHCP_CLIENT_PORT 68u
#define HARVTTP_DHCP_SERVER_PORT 67u
#define HARVTTP_THREAD_COUNT 5u
#define HARVTTP_DHCP_DISCOVER 1u
#define HARVTTP_DHCP_OFFER 2u
#define HARVTTP_DHCP_REQUEST 3u
#define HARVTTP_DHCP_ACK 5u
#define HARVTTP_DRAM_BASE 0x00000400u
#define HARVTTP_DRAM_LIMIT 0x00200000u
#define HARVTTP_TCP_PEER_COUNT 64u
#define HARVTTP_TCP_PEER_PROBES HARVTTP_TCP_PEER_COUNT
#define HARVTTP_TCP_PEER_STALE_TICKS 50000u
#define HARVTTP_TX_QUEUE_LEN 64u
#define HARVTTP_PHP_OUTPUT_MAX 4096u
#define HARVTTP_USE_TX_CSUM_OFFLOAD 1u
#define HARVTTP_RX_BATCH_BUDGET 64u
#define HARVTTP_TX_BATCH_BUDGET 32u

typedef struct {
	uint16_t len;
	uint16_t flags;
	uint8_t data[HARVTTP_FRAME_MAX];
} harvttp_frame_slot_t;

typedef struct {
	harvttp_frame_slot_t slots[HARVTTP_TX_QUEUE_LEN];
	uint32_t head;
	uint32_t tail;
	uint32_t count;
	uint32_t drops;
} harvttp_tx_queue_t;

typedef struct harvttp_context harvttp_context_t;

typedef struct {
	uint8_t active;
	uint32_t wake_tick;
	void (*run)(harvttp_context_t *ctx, uint32_t id);
} harvttp_thread_t;

typedef struct {
	uint8_t mac[6];
	uint8_t ip[4];
	uint8_t mask[4];
	uint8_t gw[4];
	uint8_t dns[4];
	uint8_t server[4];
	uint32_t xid;
	uint32_t retry_tick;
	uint8_t state;
	uint8_t bound;
} harvttp_net_t;

typedef struct {
	uint8_t mac[6];
	uint8_t ip[4];
	uint16_t port;
	uint32_t server_seq;
	uint32_t client_seq_next;
	uint32_t last_tick;
	uint8_t state;
	uint8_t active;
} harvttp_tcp_peer_t;

struct harvttp_context {
	const harvos_app_start_params_t *params;
	harvttp_thread_t threads[HARVTTP_THREAD_COUNT];
	harvttp_net_t net;
	harvttp_tcp_peer_t peers[HARVTTP_TCP_PEER_COUNT];
	const harvos_http_bundle_header_t *bundle;
	const harvos_http_bundle_entry_t *entries;
	const uint8_t *html;
	uint32_t html_len;
	uint32_t tick;
	uint32_t rx_frames;
	uint32_t tx_frames;
	uint32_t tx_drops;
	volatile uint32_t irq_events;
	volatile uint32_t irq_count;
	volatile uint32_t trap_faults;
	uint32_t php_index_cache_len;
	uint8_t php_index_cache_valid;
	harvttp_tx_queue_t txq;
	uint8_t rx[HARVTTP_FRAME_MAX];
	uint8_t tx[HARVTTP_FRAME_MAX];
	uint8_t php[HARVTTP_PHP_OUTPUT_MAX];
	uint8_t php_index_cache[HARVTTP_PHP_OUTPUT_MAX];
};

static harvttp_context_t g_ctx;

static const char fallback_html[] =
	"<!doctype html><html><head><meta charset=\"utf-8\"><title>HarvTTP</title></head>"
	"<body><h1>HarvTTP</h1><p>Fallback page. Put index.php or index.html below "
	"/confg/harvttp/httproot on the program USB stick.</p></body></html>";

static volatile uint32_t *net_reg(uint32_t off)
{
	return (volatile uint32_t *)(HARVOS_NET_MMIO_BASE + off);
}

static uint32_t net_read(uint32_t off)
{
	return *net_reg(off);
}

static void net_write(uint32_t off, uint32_t value)
{
	*net_reg(off) = value;
}

void harvttp_trap_entry(void);
void harvttp_trap_dispatch(void);

static uint32_t csr_read_sstatus(void)
{
	uint32_t value;
	__asm__ volatile("csrr %0, sstatus" : "=r"(value));
	return value;
}

static uint32_t csr_read_scause(void)
{
	uint32_t value;
	__asm__ volatile("csrr %0, 0x103" : "=r"(value));
	return value;
}

static void csr_write_sstatus(uint32_t value)
{
	__asm__ volatile("csrw sstatus, %0" :: "r"(value) : "memory");
}

static void csr_write_stvec(uint32_t value)
{
	__asm__ volatile("csrw 0x101, %0" :: "r"(value) : "memory");
}

static void harvttp_irq_enable(void)
{
	csr_write_stvec((uint32_t)(uintptr_t)&harvttp_trap_entry);
	csr_write_sstatus(csr_read_sstatus() | 1u);
}

static uint32_t harvttp_take_irq_events(void)
{
	uint32_t sstatus = csr_read_sstatus();
	uint32_t events;
	csr_write_sstatus(sstatus & ~1u);
	events = g_ctx.irq_events;
	g_ctx.irq_events = 0u;
	csr_write_sstatus(sstatus);
	return events;
}

void harvttp_trap_dispatch(void)
{
	uint32_t cause = csr_read_scause();
	if(cause == HARVOS_SCAUSE_EXTERNAL_INTERRUPT) {
		uint32_t irq = net_read(HARVOS_NET_REG_IRQ_STAT);
		if(irq) {
			g_ctx.irq_events |= irq;
			g_ctx.irq_count++;
			net_write(HARVOS_NET_REG_IRQ_STAT,
				irq & (HARVOS_NET_IRQ_RX_READY | HARVOS_NET_IRQ_RX_DONE |
				       HARVOS_NET_IRQ_TX_DONE | HARVOS_NET_IRQ_FAULT |
				       HARVOS_NET_IRQ_LINK));
		}
		return;
	}
	g_ctx.trap_faults++;
}

__attribute__((naked, aligned(4)))
void harvttp_trap_entry(void)
{
	__asm__ volatile(
		"addi sp, sp, -128\n"
		"sw ra, 0(sp)\n"
		"sw gp, 4(sp)\n"
		"sw tp, 8(sp)\n"
		"sw t0, 12(sp)\n"
		"sw t1, 16(sp)\n"
		"sw t2, 20(sp)\n"
		"sw s0, 24(sp)\n"
		"sw s1, 28(sp)\n"
		"sw a0, 32(sp)\n"
		"sw a1, 36(sp)\n"
		"sw a2, 40(sp)\n"
		"sw a3, 44(sp)\n"
		"sw a4, 48(sp)\n"
		"sw a5, 52(sp)\n"
		"sw a6, 56(sp)\n"
		"sw a7, 60(sp)\n"
		"sw s2, 64(sp)\n"
		"sw s3, 68(sp)\n"
		"sw s4, 72(sp)\n"
		"sw s5, 76(sp)\n"
		"sw s6, 80(sp)\n"
		"sw s7, 84(sp)\n"
		"sw s8, 88(sp)\n"
		"sw s9, 92(sp)\n"
		"sw s10, 96(sp)\n"
		"sw s11, 100(sp)\n"
		"sw t3, 104(sp)\n"
		"sw t4, 108(sp)\n"
		"sw t5, 112(sp)\n"
		"sw t6, 116(sp)\n"
		"call harvttp_trap_dispatch\n"
		"lw ra, 0(sp)\n"
		"lw gp, 4(sp)\n"
		"lw tp, 8(sp)\n"
		"lw t0, 12(sp)\n"
		"lw t1, 16(sp)\n"
		"lw t2, 20(sp)\n"
		"lw s0, 24(sp)\n"
		"lw s1, 28(sp)\n"
		"lw a0, 32(sp)\n"
		"lw a1, 36(sp)\n"
		"lw a2, 40(sp)\n"
		"lw a3, 44(sp)\n"
		"lw a4, 48(sp)\n"
		"lw a5, 52(sp)\n"
		"lw a6, 56(sp)\n"
		"lw a7, 60(sp)\n"
		"lw s2, 64(sp)\n"
		"lw s3, 68(sp)\n"
		"lw s4, 72(sp)\n"
		"lw s5, 76(sp)\n"
		"lw s6, 80(sp)\n"
		"lw s7, 84(sp)\n"
		"lw s8, 88(sp)\n"
		"lw s9, 92(sp)\n"
		"lw s10, 96(sp)\n"
		"lw s11, 100(sp)\n"
		"lw t3, 104(sp)\n"
		"lw t4, 108(sp)\n"
		"lw t5, 112(sp)\n"
		"lw t6, 116(sp)\n"
		"addi sp, sp, 128\n"
		"sret\n");
}

static long harvttp_syscall3(uint32_t number, uint32_t a0, uint32_t a1, uint32_t a2)
{
	register uint32_t r_a0 __asm__("a0") = a0;
	register uint32_t r_a1 __asm__("a1") = a1;
	register uint32_t r_a2 __asm__("a2") = a2;
	register uint32_t r_a7 __asm__("a7") = number;
	__asm__ volatile("ecall" : "+r"(r_a0) : "r"(r_a1), "r"(r_a2), "r"(r_a7) : "memory");
	return (long)r_a0;
}

static void harvttp_yield(void)
{
	(void)harvttp_syscall3(HARVOS_SYS_YIELD, 0u, 0u, 0u);
}

static void harvttp_audit(uint32_t a, uint32_t b)
{
	(void)harvttp_syscall3(HARVOS_SYS_IPC_SEND, 0u, a, b);
}

static void mem_zero(uint8_t *p, uint32_t n)
{
	uint32_t i;
	for(i = 0; i < n; ++i) p[i] = 0u;
}

static void mem_copy(uint8_t *dst, const uint8_t *src, uint32_t n)
{
	uint32_t i;
	for(i = 0; i < n; ++i) dst[i] = src[i];
}

static int mem_eq(const uint8_t *a, const uint8_t *b, uint32_t n)
{
	uint32_t i;
	for(i = 0; i < n; ++i) {
		if(a[i] != b[i]) return 0;
	}
	return 1;
}

static int ptr_in_dram(const void *ptr, uint32_t len)
{
	uint32_t addr = (uint32_t)(uintptr_t)ptr;
	uint32_t end = addr + len;
	if(len == 0u) return 1;
	return addr >= HARVTTP_DRAM_BASE && end >= addr && end <= HARVTTP_DRAM_LIMIT;
}

static uint32_t cstr_len(const char *s)
{
	uint32_t n = 0;
	while(s[n]) n++;
	return n;
}

static uint16_t get16(const uint8_t *p)
{
	return (uint16_t)(((uint16_t)p[0] << 8) | p[1]);
}

static uint32_t get32(const uint8_t *p)
{
	return ((uint32_t)p[0] << 24) | ((uint32_t)p[1] << 16) | ((uint32_t)p[2] << 8) | p[3];
}

static void put16(uint8_t *p, uint16_t v)
{
	p[0] = (uint8_t)(v >> 8);
	p[1] = (uint8_t)v;
}

static void put32(uint8_t *p, uint32_t v)
{
	p[0] = (uint8_t)(v >> 24);
	p[1] = (uint8_t)(v >> 16);
	p[2] = (uint8_t)(v >> 8);
	p[3] = (uint8_t)v;
}

static uint16_t checksum_finish(uint32_t sum)
{
	while(sum >> 16) sum = (sum & 0xFFFFu) + (sum >> 16);
	return (uint16_t)~sum;
}

static uint16_t checksum16(const uint8_t *data, uint32_t len)
{
	uint32_t sum = 0;
	while(len > 1u) {
		sum += get16(data);
		data += 2;
		len -= 2;
	}
	if(len) sum += ((uint32_t)data[0] << 8);
	return checksum_finish(sum);
}

static uint16_t tcp_checksum(const uint8_t *ip, const uint8_t *tcp, uint32_t tcp_len)
{
	uint32_t sum = 0;
	uint32_t i;
	for(i = 12u; i < 20u; i += 2u) sum += get16(ip + i);
	sum += 6u;
	sum += tcp_len;
	for(i = 0; i + 1u < tcp_len; i += 2u) sum += get16(tcp + i);
	if(tcp_len & 1u) sum += ((uint32_t)tcp[tcp_len - 1u] << 8);
	return checksum_finish(sum);
}

static uint16_t udp_checksum(const uint8_t *ip, const uint8_t *udp, uint32_t udp_len)
{
	uint32_t sum = 0;
	uint32_t i;
	for(i = 12u; i < 20u; i += 2u) sum += get16(ip + i);
	sum += 17u;
	sum += udp_len;
	for(i = 0; i + 1u < udp_len; i += 2u) sum += get16(udp + i);
	if(udp_len & 1u) sum += ((uint32_t)udp[udp_len - 1u] << 8);
	return checksum_finish(sum);
}

static uint32_t append_bytes(uint8_t *dst, uint32_t off, uint32_t cap, const uint8_t *src, uint32_t len)
{
	uint32_t i;
	for(i = 0; i < len && off < cap; ++i) dst[off++] = src[i];
	return off;
}

static uint32_t append_str(uint8_t *dst, uint32_t off, uint32_t cap, const char *src)
{
	return append_bytes(dst, off, cap, (const uint8_t *)src, cstr_len(src));
}

static int emit_dec_no_div(uint8_t *dst, uint32_t *off, uint32_t cap, uint32_t value)
{
	static const uint32_t powers[] = {
		1000000000u, 100000000u, 10000000u, 1000000u, 100000u,
		10000u, 1000u, 100u, 10u, 1u
	};
	uint32_t i;
	uint8_t seen = 0u;
	for(i = 0u; i < sizeof(powers) / sizeof(powers[0]); ++i) {
		uint8_t digit = 0u;
		while(value >= powers[i]) {
			value -= powers[i];
			digit++;
		}
		if(digit || seen || powers[i] == 1u) {
			if(*off >= cap) return 0;
			dst[(*off)++] = (uint8_t)('0' + digit);
			seen = 1u;
		}
	}
	return 1;
}

static uint32_t append_dec(uint8_t *dst, uint32_t off, uint32_t cap, uint32_t value)
{
	(void)emit_dec_no_div(dst, &off, cap, value);
	return off;
}

static int net_link_up(void)
{
	return (net_read(HARVOS_NET_REG_STATUS) & HARVOS_NET_STATUS_LINK) != 0u;
}

static uint32_t nic_rx_pending_frames(void)
{
	return net_read(HARVOS_NET_REG_RX_PENDING) & 0xFFFFu;
}

static uint32_t queue_next(uint32_t value, uint32_t limit)
{
	value++;
	return value == limit ? 0u : value;
}

static int nic_wait_done(uint32_t spins)
{
	uint32_t i;
	uint8_t seen_busy = 0u;
	for(i = 0; i < spins; i += 4u) {
		uint32_t st = net_read(HARVOS_NET_REG_STATUS);
		if(st & HARVOS_NET_STATUS_FAULT) return -1;
		if(st & HARVOS_NET_STATUS_BUSY) seen_busy = 1u;
		if((st & HARVOS_NET_STATUS_DONE) && seen_busy) return 0;
	}
	return -1;
}

static int nic_wait_idle(uint32_t spins)
{
	uint32_t i;
	for(i = 0; i < spins; ++i) {
		uint32_t st = net_read(HARVOS_NET_REG_STATUS);
		if(st & HARVOS_NET_STATUS_FAULT) return -1;
		if((st & HARVOS_NET_STATUS_BUSY) == 0u) return 0;
	}
	return -1;
}

static int nic_send_now(const uint8_t *frame, uint32_t len)
{
	volatile uint32_t *dma = (volatile uint32_t *)HARVOS_DMA_WINDOW_BASE;
	uint32_t i;
	if(len == 0u || len > HARVOS_DMA_WINDOW_BYTES || len > HARVTTP_FRAME_MAX) return -1;
	if(nic_wait_idle(256u) != 0) return -1;
	if((net_read(HARVOS_NET_REG_STATUS) & HARVOS_NET_STATUS_TX_READY) == 0u) return -1;
	for(i = 0; i < len; i += 4u) {
		uint32_t word = frame[i];
		if(i + 1u < len) word |= ((uint32_t)frame[i + 1u] << 8);
		if(i + 2u < len) word |= ((uint32_t)frame[i + 2u] << 16);
		if(i + 3u < len) word |= ((uint32_t)frame[i + 3u] << 24);
		dma[i >> 2] = word;
	}
	net_write(HARVOS_NET_REG_TX_ADDR, HARVOS_DMA_WINDOW_BASE);
	net_write(HARVOS_NET_REG_TX_LEN, len);
	net_write(HARVOS_NET_REG_COMMAND, HARVOS_NET_CMD_TX_START);
	if(nic_wait_done(20000u) != 0) {
		net_write(HARVOS_NET_REG_COMMAND, HARVOS_NET_CMD_CLEAR);
		return -1;
	}
	g_ctx.tx_frames++;
	return 0;
}

static int nic_send(const uint8_t *frame, uint32_t len)
{
	harvttp_frame_slot_t *slot;
	if(len == 0u || len > HARVTTP_FRAME_MAX) return -1;
	if(g_ctx.txq.count == 0u && nic_send_now(frame, len) == 0) {
		return 0;
	}
	if(g_ctx.txq.count >= HARVTTP_TX_QUEUE_LEN) {
		g_ctx.txq.drops++;
		g_ctx.tx_drops++;
		return -1;
	}
	slot = &g_ctx.txq.slots[g_ctx.txq.tail];
	slot->len = (uint16_t)len;
	slot->flags = 0u;
	mem_copy(slot->data, frame, len);
	g_ctx.txq.tail = queue_next(g_ctx.txq.tail, HARVTTP_TX_QUEUE_LEN);
	g_ctx.txq.count++;
	return 0;
}

static void nic_flush_tx(uint32_t budget)
{
	uint32_t sent = 0;
	while(sent < budget && g_ctx.txq.count != 0u) {
		harvttp_frame_slot_t *slot = &g_ctx.txq.slots[g_ctx.txq.head];
		if(nic_send_now(slot->data, slot->len) != 0) break;
		g_ctx.txq.head = queue_next(g_ctx.txq.head, HARVTTP_TX_QUEUE_LEN);
		g_ctx.txq.count--;
		sent++;
	}
}

static int nic_recv_ready(uint8_t *frame, uint32_t cap, uint32_t *actual, uint32_t known_ready)
{
	volatile uint32_t *dma = (volatile uint32_t *)HARVOS_DMA_WINDOW_BASE;
	uint32_t len;
	uint32_t i;
	if(!known_ready) {
		uint32_t status = net_read(HARVOS_NET_REG_STATUS);
		if((status & HARVOS_NET_STATUS_LINK) == 0u) return -1;
		if((status & HARVOS_NET_STATUS_RX_VALID) == 0u) return -1;
	}
	if(cap > HARVOS_DMA_WINDOW_BYTES) cap = HARVOS_DMA_WINDOW_BYTES;
	if(cap > HARVTTP_FRAME_MAX) cap = HARVTTP_FRAME_MAX;
	if(nic_wait_idle(256u) != 0) return -1;
	net_write(HARVOS_NET_REG_RX_ADDR, HARVOS_DMA_WINDOW_BASE);
	net_write(HARVOS_NET_REG_RX_LEN, cap);
	net_write(HARVOS_NET_REG_COMMAND, HARVOS_NET_CMD_RX_START);
	if(nic_wait_done(2048u) != 0) {
		net_write(HARVOS_NET_REG_COMMAND, HARVOS_NET_CMD_CLEAR);
		return -1;
	}
	len = net_read(HARVOS_NET_REG_FRAME_LEN);
	if(len > cap) len = cap;
	for(i = 0; i < len; i += 4u) {
		uint32_t word = dma[i >> 2];
		frame[i] = (uint8_t)word;
		if(i + 1u < len) frame[i + 1u] = (uint8_t)(word >> 8);
		if(i + 2u < len) frame[i + 2u] = (uint8_t)(word >> 16);
		if(i + 3u < len) frame[i + 3u] = (uint8_t)(word >> 24);
	}
	*actual = len;
	g_ctx.rx_frames++;
	return 0;
}

static void build_ipv4(uint8_t *ip, uint16_t total_len, uint8_t proto,
	const uint8_t *src, const uint8_t *dst, uint16_t id)
{
	ip[0] = 0x45u;
	ip[1] = 0u;
	put16(ip + 2, total_len);
	put16(ip + 4, id);
	put16(ip + 6, 0x4000u);
	ip[8] = 64u;
	ip[9] = proto;
	put16(ip + 10, 0u);
	mem_copy(ip + 12, src, 4u);
	mem_copy(ip + 16, dst, 4u);
	put16(ip + 10, checksum16(ip, 20u));
}

static uint32_t build_udp_packet(harvttp_context_t *ctx, const uint8_t *dst_mac,
	const uint8_t *dst_ip, uint16_t src_port, uint16_t dst_port,
	const uint8_t *payload, uint32_t payload_len)
{
	uint8_t *f = ctx->tx;
	uint8_t *ip = f + 14u;
	uint8_t *udp = ip + 20u;
	uint32_t total = 14u + 20u + 8u + payload_len;
	mem_copy(f, dst_mac, 6u);
	mem_copy(f + 6u, ctx->net.mac, 6u);
	put16(f + 12u, 0x0800u);
	build_ipv4(ip, (uint16_t)(20u + 8u + payload_len), 17u, ctx->net.ip, dst_ip, (uint16_t)ctx->tick);
	put16(udp, src_port);
	put16(udp + 2u, dst_port);
	put16(udp + 4u, (uint16_t)(8u + payload_len));
	put16(udp + 6u, 0u);
	mem_copy(udp + 8u, payload, payload_len);
	return total;
}

static uint32_t write_dhcp_base(harvttp_context_t *ctx, uint8_t *bootp, uint8_t msg_type)
{
	uint32_t o = 240u;
	mem_zero(bootp, 320u);
	bootp[0] = 1u;
	bootp[1] = 1u;
	bootp[2] = 6u;
	put32(bootp + 4u, ctx->net.xid);
	put16(bootp + 10u, 0x8000u);
	mem_copy(bootp + 28u, ctx->net.mac, 6u);
	bootp[236] = 99u;
	bootp[237] = 130u;
	bootp[238] = 83u;
	bootp[239] = 99u;
	bootp[o++] = 53u;
	bootp[o++] = 1u;
	bootp[o++] = msg_type;
	bootp[o++] = 55u;
	bootp[o++] = 4u;
	bootp[o++] = 1u;
	bootp[o++] = 3u;
	bootp[o++] = 6u;
	bootp[o++] = 15u;
	bootp[o++] = 61u;
	bootp[o++] = 7u;
	bootp[o++] = 1u;
	mem_copy(bootp + o, ctx->net.mac, 6u);
	o += 6u;
	return o;
}

static void send_dhcp_discover(harvttp_context_t *ctx)
{
	harvttp_audit(0x44484350u, ctx->tick);
	uint8_t bootp[320];
	uint8_t bcast_mac[6] = {255u, 255u, 255u, 255u, 255u, 255u};
	uint8_t bcast_ip[4] = {255u, 255u, 255u, 255u};
	uint32_t o = write_dhcp_base(ctx, bootp, HARVTTP_DHCP_DISCOVER);
	uint32_t len;
	bootp[o++] = 255u;
	len = build_udp_packet(ctx, bcast_mac, bcast_ip,
		HARVTTP_DHCP_CLIENT_PORT, HARVTTP_DHCP_SERVER_PORT, bootp, o);
	(void)nic_send(ctx->tx, len);
}

static void send_dhcp_request(harvttp_context_t *ctx)
{
	uint8_t bootp[320];
	uint8_t bcast_mac[6] = {255u, 255u, 255u, 255u, 255u, 255u};
	uint8_t bcast_ip[4] = {255u, 255u, 255u, 255u};
	uint32_t o = write_dhcp_base(ctx, bootp, HARVTTP_DHCP_REQUEST);
	uint32_t len;
	bootp[o++] = 50u;
	bootp[o++] = 4u;
	mem_copy(bootp + o, ctx->net.ip, 4u);
	o += 4u;
	bootp[o++] = 54u;
	bootp[o++] = 4u;
	mem_copy(bootp + o, ctx->net.server, 4u);
	o += 4u;
	bootp[o++] = 255u;
	len = build_udp_packet(ctx, bcast_mac, bcast_ip,
		HARVTTP_DHCP_CLIENT_PORT, HARVTTP_DHCP_SERVER_PORT, bootp, o);
	(void)nic_send(ctx->tx, len);
}

static void parse_dhcp_options(harvttp_context_t *ctx, const uint8_t *opts, uint32_t len, uint8_t *msg)
{
	uint32_t i = 0;
	*msg = 0u;
	while(i + 1u < len) {
		uint8_t code = opts[i++];
		uint8_t opt_len;
		if(code == 0u) continue;
		if(code == 255u) break;
		opt_len = opts[i++];
		if(i + opt_len > len) break;
		if(code == 53u && opt_len == 1u) *msg = opts[i];
		else if(code == 54u && opt_len == 4u) mem_copy(ctx->net.server, opts + i, 4u);
		else if(code == 1u && opt_len == 4u) mem_copy(ctx->net.mask, opts + i, 4u);
		else if(code == 3u && opt_len >= 4u) mem_copy(ctx->net.gw, opts + i, 4u);
		else if(code == 6u && opt_len >= 4u) mem_copy(ctx->net.dns, opts + i, 4u);
		i += opt_len;
	}
}

static void handle_dhcp(harvttp_context_t *ctx, const uint8_t *frame, uint32_t len)
{
	const uint8_t *ip;
	const uint8_t *udp;
	const uint8_t *bootp;
	uint32_t ihl;
	uint32_t total;
	uint32_t udp_len;
	uint16_t csum;
	uint8_t msg;
	if(len < 14u + 20u + 8u + 240u) {
		if(!ctx->net.bound) harvttp_audit(0x44485201u, len);
		return;
	}
	if(get16(frame + 12u) != 0x0800u) {
		if(!ctx->net.bound) harvttp_audit(0x44485202u, get16(frame + 12u));
		return;
	}
	ip = frame + 14u;
	if((ip[0] >> 4) != 4u) {
		if(!ctx->net.bound) harvttp_audit(0x44485203u, ip[0]);
		return;
	}
	ihl = (uint32_t)(ip[0] & 0x0Fu) << 2;
	if(ihl < 20u || 14u + ihl + 8u + 240u > len || ip[9] != 17u) {
		if(!ctx->net.bound) harvttp_audit(0x44485204u, (ihl << 16) | ((uint32_t)ip[9] << 8) | len);
		return;
	}
	csum = checksum16(ip, ihl);
	if(csum != 0u) {
		if(!ctx->net.bound) harvttp_audit(0x44485205u, csum);
		return;
	}
	total = get16(ip + 2u);
	if(total < ihl + 8u + 240u || 14u + total > len) {
		if(!ctx->net.bound) harvttp_audit(0x44485206u, (total << 16) | len);
		return;
	}
	udp = ip + ihl;
	if(get16(udp) != HARVTTP_DHCP_SERVER_PORT || get16(udp + 2u) != HARVTTP_DHCP_CLIENT_PORT) {
		if(!ctx->net.bound) harvttp_audit(0x44485207u, ((uint32_t)get16(udp) << 16) | get16(udp + 2u));
		return;
	}
	udp_len = get16(udp + 4u);
	if(udp_len < 248u || udp_len > total - ihl) {
		if(!ctx->net.bound) harvttp_audit(0x44485208u, (udp_len << 16) | (total - ihl));
		return;
	}
	csum = udp_checksum(ip, udp, udp_len);
	if(get16(udp + 6u) != 0u && csum != 0u) {
		if(!ctx->net.bound) harvttp_audit(0x44485209u, csum);
		return;
	}
	bootp = udp + 8u;
	if(bootp[0] != 2u || get32(bootp + 4u) != ctx->net.xid) {
		if(!ctx->net.bound) harvttp_audit(0x4448520au, get32(bootp + 4u));
		return;
	}
	if(bootp[236] != 99u || bootp[237] != 130u || bootp[238] != 83u || bootp[239] != 99u) {
		if(!ctx->net.bound) harvttp_audit(0x4448520bu, get32(bootp + 236u));
		return;
	}
	parse_dhcp_options(ctx, bootp + 240u, udp_len - 248u, &msg);
	if(msg == HARVTTP_DHCP_OFFER && ctx->net.state == HARVTTP_DHCP_DISCOVER) {
		mem_copy(ctx->net.ip, bootp + 16u, 4u);
		ctx->net.state = HARVTTP_DHCP_REQUEST;
		ctx->net.retry_tick = 0u;
		harvttp_audit(0x44484f46u, get32(ctx->net.ip));
	} else if(msg == HARVTTP_DHCP_ACK && ctx->net.state == HARVTTP_DHCP_REQUEST) {
		mem_copy(ctx->net.ip, bootp + 16u, 4u);
		ctx->net.bound = 1u;
		ctx->net.state = HARVTTP_DHCP_ACK;
		harvttp_audit(0x44484143u, get32(ctx->net.ip));
		harvttp_audit(0x48545450u, get32(ctx->net.ip));
	} else if(!ctx->net.bound) {
		harvttp_audit(0x4448520cu, ((uint32_t)msg << 16) | ctx->net.state);
	}
}

static void send_arp_reply(harvttp_context_t *ctx, const uint8_t *req)
{
	uint8_t *f = ctx->tx;
	mem_copy(f, req + 6u, 6u);
	mem_copy(f + 6u, ctx->net.mac, 6u);
	put16(f + 12u, 0x0806u);
	put16(f + 14u, 1u);
	put16(f + 16u, 0x0800u);
	f[18] = 6u;
	f[19] = 4u;
	put16(f + 20u, 2u);
	mem_copy(f + 22u, ctx->net.mac, 6u);
	mem_copy(f + 28u, ctx->net.ip, 4u);
	mem_copy(f + 32u, req + 22u, 6u);
	mem_copy(f + 38u, req + 28u, 4u);
	(void)nic_send(f, 42u);
}

static harvttp_tcp_peer_t *tcp_peer_lookup(harvttp_context_t *ctx, const uint8_t *ip, uint16_t port)
{
	uint32_t i;
	uint32_t slot = (get32(ip) ^ port ^ (port >> 6)) & (HARVTTP_TCP_PEER_COUNT - 1u);
	for(i = 0; i < HARVTTP_TCP_PEER_PROBES; ++i) {
		harvttp_tcp_peer_t *peer = &ctx->peers[(slot + i) & (HARVTTP_TCP_PEER_COUNT - 1u)];
		if(peer->active && peer->port == port && mem_eq(peer->ip, ip, 4u)) {
			peer->last_tick = ctx->tick;
			return peer;
		}
	}
	return (harvttp_tcp_peer_t *)0;
}

static harvttp_tcp_peer_t *tcp_peer_alloc(harvttp_context_t *ctx,
	const uint8_t *mac, const uint8_t *ip, uint16_t port)
{
	uint32_t i;
	uint32_t slot = (get32(ip) ^ port ^ (port >> 6)) & (HARVTTP_TCP_PEER_COUNT - 1u);
	uint32_t victim = slot;
	uint32_t oldest = 0xFFFFFFFFu;
	harvttp_tcp_peer_t *peer = tcp_peer_lookup(ctx, ip, port);
	if(peer) {
		mem_copy(peer->mac, mac, 6u);
		return peer;
	}
	for(i = 0; i < HARVTTP_TCP_PEER_PROBES; ++i) {
		uint32_t idx = (slot + i) & (HARVTTP_TCP_PEER_COUNT - 1u);
		harvttp_tcp_peer_t *candidate = &ctx->peers[idx];
		if(candidate->active &&
		   (uint32_t)(ctx->tick - candidate->last_tick) > HARVTTP_TCP_PEER_STALE_TICKS) {
			candidate->active = 0u;
		}
		if(!candidate->active) {
			victim = idx;
			break;
		}
		if(candidate->last_tick < oldest) {
			oldest = candidate->last_tick;
			victim = idx;
		}
	}
	peer = &ctx->peers[victim];
	mem_copy(peer->mac, mac, 6u);
	mem_copy(peer->ip, ip, 4u);
	peer->port = port;
	peer->server_seq = 0u;
	peer->client_seq_next = 0u;
	peer->last_tick = ctx->tick;
	peer->state = 0u;
	peer->active = 1u;
	return peer;
}

static void handle_arp(harvttp_context_t *ctx, const uint8_t *frame, uint32_t len)
{
	if(!ctx->net.bound || len < 42u || get16(frame + 12u) != 0x0806u) return;
	if(get16(frame + 20u) != 1u) return;
	if(!mem_eq(frame + 38u, ctx->net.ip, 4u)) return;
	send_arp_reply(ctx, frame);
}

static uint32_t build_tcp_packet(harvttp_context_t *ctx, const uint8_t *dst_mac,
	const uint8_t *dst_ip, uint16_t dst_port, uint32_t seq, uint32_t ack,
	uint8_t flags, const uint8_t *payload, uint32_t payload_len)
{
	if(ctx != &g_ctx || !ptr_in_dram(dst_mac, 6u) || !ptr_in_dram(dst_ip, 4u) ||
	   !ptr_in_dram(payload, payload_len)) {
		return 0u;
	}
	uint8_t *f = ctx->tx;
	uint8_t *ip = f + 14u;
	uint8_t *tcp = ip + 20u;
	uint32_t tcp_len = 20u + payload_len;
	mem_copy(f, dst_mac, 6u);
	mem_copy(f + 6u, ctx->net.mac, 6u);
	put16(f + 12u, 0x0800u);
	build_ipv4(ip, (uint16_t)(20u + tcp_len), 6u, ctx->net.ip, dst_ip, (uint16_t)ctx->tick);
	if(HARVTTP_USE_TX_CSUM_OFFLOAD) put16(ip + 10u, 0u);
	put16(tcp, HARVTTP_HTTP_PORT);
	put16(tcp + 2u, dst_port);
	put32(tcp + 4u, seq);
	put32(tcp + 8u, ack);
	tcp[12] = 0x50u;
	tcp[13] = flags;
	put16(tcp + 14u, 2048u);
	put16(tcp + 16u, 0u);
	put16(tcp + 18u, 0u);
	if(payload_len) mem_copy(tcp + 20u, payload, payload_len);
	if(!HARVTTP_USE_TX_CSUM_OFFLOAD) put16(tcp + 16u, tcp_checksum(ip, tcp, tcp_len));
	return 14u + 20u + tcp_len;
}

static int payload_starts_get(const uint8_t *p, uint32_t len)
{
	return len >= 4u && p[0] == 'G' && p[1] == 'E' && p[2] == 'T' && p[3] == ' ';
}

static uint8_t lower_http_ascii(uint8_t c)
{
	if(c >= 'A' && c <= 'Z') return (uint8_t)(c + ('a' - 'A'));
	return c;
}

static int http_starts_with_ci(const uint8_t *p, const uint8_t *end, const char *lit)
{
	uint32_t i;
	for(i = 0u; lit[i]; ++i) {
		if(p + i >= end || lower_http_ascii(p[i]) != lower_http_ascii((uint8_t)lit[i])) return 0;
	}
	return 1;
}

static int http_line_contains_ci(const uint8_t *p, const uint8_t *end, const char *needle)
{
	uint32_t needle_len = cstr_len(needle);
	if(needle_len == 0u) return 1;
	while(p + needle_len <= end) {
		if(http_starts_with_ci(p, end, needle)) return 1;
		p++;
	}
	return 0;
}

static int request_wants_keep_alive(const uint8_t *payload, uint32_t len)
{
	const uint8_t *p = payload;
	const uint8_t *end = payload + len;
	uint8_t first_line = 1u;
	uint8_t http11 = 0u;
	uint8_t keep = 0u;
	uint8_t close = 0u;
	while(p < end) {
		const uint8_t *line = p;
		const uint8_t *line_end = p;
		while(line_end < end && *line_end != '\r' && *line_end != '\n') line_end++;
		if(line_end == line) break;
		if(first_line) {
			const uint8_t *q;
			for(q = line; q + 8u <= line_end; ++q) {
				if(http_starts_with_ci(q, line_end, "HTTP/1.1")) {
					http11 = 1u;
					break;
				}
			}
			first_line = 0u;
		} else if(http_starts_with_ci(line, line_end, "Connection:")) {
			const uint8_t *value = line + 11u;
			while(value < line_end && (*value == ' ' || *value == '\t')) value++;
			if(http_line_contains_ci(value, line_end, "close")) close = 1u;
			if(http_line_contains_ci(value, line_end, "keep-alive")) keep = 1u;
		}
		p = line_end;
		while(p < end && (*p == '\r' || *p == '\n')) p++;
	}
	if(close) return 0;
	if(keep) return 1;
	return http11;
}

static int path_eq(const char *a, const char *b)
{
	uint32_t i = 0;
	while(a[i] && b[i]) {
		if(a[i] != b[i]) return 0;
		i++;
	}
	return a[i] == b[i];
}

static int path_has_nul(const char *path, uint32_t cap)
{
	uint32_t i;
	for(i = 0; i < cap; ++i) {
		if(path[i] == 0) return 1;
	}
	return 0;
}

static int bundle_path_safe(const char *path)
{
	uint32_t i;
	if(!path_has_nul(path, HARVOS_HTTP_BUNDLE_PATH_BYTES)) return 0;
	if(path[0] != '/') return 0;
	for(i = 0; path[i]; ++i) {
		char c = path[i];
		if((uint8_t)c < 0x20u || c == 0x7Fu || c == '\\') return 0;
		if(c == '.' && path[i + 1u] == '.') return 0;
	}
	return 1;
}

static int bundle_validate(const harvos_http_bundle_header_t *bundle, uint32_t size)
{
	const harvos_http_bundle_entry_t *entries;
	uint32_t min_entries_end;
	uint32_t i;
	if(!bundle || size < sizeof(*bundle)) return 0;
	if(bundle->magic != HARVOS_HTTP_BUNDLE_MAGIC ||
	   bundle->version != HARVOS_HTTP_BUNDLE_VERSION ||
	   bundle->entry_size != sizeof(harvos_http_bundle_entry_t)) {
		return 0;
	}
	if(bundle->file_count == 0u || bundle->file_count > HARVOS_HTTP_BUNDLE_MAX_FILES) return 0;
	if(bundle->total_size > size || bundle->total_size < sizeof(*bundle)) return 0;
	min_entries_end = sizeof(*bundle) + bundle->file_count * sizeof(harvos_http_bundle_entry_t);
	if(bundle->data_offset < min_entries_end || bundle->data_offset > bundle->total_size) return 0;
	entries = (const harvos_http_bundle_entry_t *)(((const uint8_t *)bundle) + sizeof(*bundle));
	for(i = 0; i < bundle->file_count; ++i) {
		uint32_t end;
		if(!bundle_path_safe(entries[i].path)) return 0;
		if(entries[i].offset < bundle->data_offset) return 0;
		end = entries[i].offset + entries[i].size;
		if(end < entries[i].offset || end > bundle->total_size) return 0;
	}
	return 1;
}

static const char *mime_name(uint32_t mime)
{
	if(mime == HARVOS_HTTP_MIME_HTML) return "text/html; charset=utf-8";
	if(mime == HARVOS_HTTP_MIME_CSS) return "text/css; charset=utf-8";
	if(mime == HARVOS_HTTP_MIME_JS) return "application/javascript; charset=utf-8";
	if(mime == HARVOS_HTTP_MIME_PNG) return "image/png";
	if(mime == HARVOS_HTTP_MIME_JPEG) return "image/jpeg";
	if(mime == HARVOS_HTTP_MIME_GIF) return "image/gif";
	if(mime == HARVOS_HTTP_MIME_SVG) return "image/svg+xml";
	if(mime == HARVOS_HTTP_MIME_TEXT) return "text/plain; charset=utf-8";
	if(mime == HARVOS_HTTP_MIME_PHP) return "text/html; charset=utf-8";
	return "application/octet-stream";
}

static int segment_is_dot(const uint8_t *seg, uint32_t len)
{
	return len == 1u && seg[0] == '.';
}

static int segment_is_dotdot(const uint8_t *seg, uint32_t len)
{
	return len == 2u && seg[0] == '.' && seg[1] == '.';
}

static int pop_path_segment(char *path, uint32_t *len)
{
	if(*len <= 1u) return 0;
	while(*len > 1u && path[*len - 1u] != '/') (*len)--;
	if(*len > 1u && path[*len - 1u] == '/') (*len)--;
	path[*len] = 0;
	return 1;
}

static int push_path_segment(char *path, uint32_t *len, uint32_t cap,
	const uint8_t *seg, uint32_t seg_len)
{
	uint32_t i;
	uint32_t extra;
	if(seg_len == 0u || segment_is_dot(seg, seg_len)) return 1;
	if(segment_is_dotdot(seg, seg_len)) return pop_path_segment(path, len);
	extra = seg_len + ((*len > 1u) ? 1u : 0u);
	if(*len + extra + 1u > cap) return 0;
	if(*len > 1u) path[(*len)++] = '/';
	for(i = 0u; i < seg_len; ++i) path[(*len)++] = (char)seg[i];
	path[*len] = 0;
	return 1;
}

static int append_index_file(char *path, uint32_t *len, uint32_t cap)
{
	static const char index_name[] = "index.php";
	uint32_t i;
	uint32_t extra = 9u + ((*len > 1u) ? 1u : 0u);
	if(*len + extra + 1u > cap) return 0;
	if(*len > 1u) path[(*len)++] = '/';
	for(i = 0u; i < 9u; ++i) path[(*len)++] = index_name[i];
	path[*len] = 0;
	return 1;
}

static int extract_request_path(const uint8_t *payload, uint32_t len, char *path, uint32_t cap)
{
	uint32_t i = 4u;
	uint32_t o = 0;
	uint32_t seg_start;
	uint8_t ended_with_slash = 1u;
	if(!payload_starts_get(payload, len) || cap < 2u) return 0;
	while(i < len && payload[i] == ' ') i++;
	if(i >= len || payload[i] != '/') return 0;
	path[o++] = '/';
	path[o] = 0;
	i++;
	seg_start = i;
	while(i < len && payload[i] != ' ' && payload[i] != '?' && payload[i] != '#') {
		uint8_t c = payload[i];
		if(c == 0u || c == '\\' || c < 0x20u || c == 0x7Fu) return 0;
		if(c == '/') {
			if(!push_path_segment(path, &o, cap, payload + seg_start, i - seg_start)) return 0;
			ended_with_slash = 1u;
			i++;
			seg_start = i;
		} else {
			ended_with_slash = 0u;
			i++;
		}
	}
	if(!push_path_segment(path, &o, cap, payload + seg_start, i - seg_start)) return 0;
	if(o == 1u || ended_with_slash) {
		if(!append_index_file(path, &o, cap)) return 0;
	}
	return 1;
}

static const harvos_http_bundle_entry_t *find_asset(harvttp_context_t *ctx, const char *path)
{
	uint32_t i;
	if(!ctx->bundle || ctx->bundle->magic != HARVOS_HTTP_BUNDLE_MAGIC) return (const harvos_http_bundle_entry_t *)0;
	for(i = 0; i < ctx->bundle->file_count && i < HARVOS_HTTP_BUNDLE_MAX_FILES; ++i) {
		if(path_eq(ctx->entries[i].path, path)) return &ctx->entries[i];
	}
	return (const harvos_http_bundle_entry_t *)0;
}

static const uint8_t *asset_data(harvttp_context_t *ctx, const harvos_http_bundle_entry_t *entry)
{
	return ((const uint8_t *)ctx->bundle) + entry->offset;
}

static const uint8_t *php_skip_ws(const uint8_t *p, const uint8_t *end)
{
	while(p < end && (*p == ' ' || *p == '\r' || *p == '\n' || *p == '\t')) p++;
	return p;
}

static int php_starts_with(const uint8_t *p, const uint8_t *end, const char *lit)
{
	uint32_t i = 0u;
	while(lit[i]) {
		if(p + i >= end || p[i] != (uint8_t)lit[i]) return 0;
		i++;
	}
	return 1;
}

static const uint8_t *php_find_close(const uint8_t *p, const uint8_t *end)
{
	while(p + 1u < end) {
		if(p[0] == '?' && p[1] == '>') return p;
		p++;
	}
	return (const uint8_t *)0;
}

static int php_emit(uint8_t *out, uint32_t *off, uint32_t cap, const uint8_t *src, uint32_t len)
{
	if(*off + len > cap) return 0;
	mem_copy(out + *off, src, len);
	*off += len;
	return 1;
}

static int php_emit_str(uint8_t *out, uint32_t *off, uint32_t cap, const char *src)
{
	return php_emit(out, off, cap, (const uint8_t *)src, cstr_len(src));
}

static int php_emit_dec(uint8_t *out, uint32_t *off, uint32_t cap, uint32_t value)
{
	return emit_dec_no_div(out, off, cap, value);
}

static int php_emit_ip(uint8_t *out, uint32_t *off, uint32_t cap, const uint8_t *ip)
{
	uint32_t i;
	for(i = 0u; i < 4u; ++i) {
		if(i && !php_emit_str(out, off, cap, ".")) return 0;
		if(!php_emit_dec(out, off, cap, ip[i])) return 0;
	}
	return 1;
}

static int php_emit_escaped_string(uint8_t *out, uint32_t *off, uint32_t cap,
	const uint8_t **pp, const uint8_t *end)
{
	uint8_t quote;
	const uint8_t *p = *pp;
	if(p >= end || (*p != '\'' && *p != '"')) return 0;
	quote = *p++;
	while(p < end && *p != quote) {
		uint8_t c = *p++;
		if(c == '\\' && p < end) {
			c = *p++;
			if(c == 'n') c = '\n';
			else if(c == 'r') c = '\r';
			else if(c == 't') c = '\t';
		}
		if(!php_emit(out, off, cap, &c, 1u)) return 0;
	}
	if(p >= end || *p != quote) return 0;
	*pp = p + 1u;
	return 1;
}

static void php_copy_token(char *dst, uint32_t dst_len, const uint8_t *src, uint32_t len)
{
	uint32_t i;
	if(dst_len == 0u) return;
	for(i = 0u; i + 1u < dst_len && i < len; ++i) dst[i] = (char)src[i];
	dst[i] = 0;
}

static int php_emit_server_var(harvttp_context_t *ctx, const harvttp_tcp_peer_t *peer,
	const char *req_path, uint8_t *out, uint32_t *off, uint32_t cap,
	const uint8_t **pp, const uint8_t *end)
{
	const uint8_t *p = *pp;
	const uint8_t *key_start;
	uint8_t quote;
	char key[24];
	uint32_t key_len = 0u;
	if(!php_starts_with(p, end, "$_SERVER")) return 0;
	p += 8u;
	p = php_skip_ws(p, end);
	if(p >= end || *p++ != '[') return 0;
	p = php_skip_ws(p, end);
	if(p >= end || (*p != '\'' && *p != '"')) return 0;
	quote = *p++;
	key_start = p;
	while(p < end && *p != quote) p++;
	if(p >= end) return 0;
	key_len = (uint32_t)(p - key_start);
	if(key_len >= sizeof(key)) return 0;
	php_copy_token(key, sizeof(key), key_start, key_len);
	p++;
	p = php_skip_ws(p, end);
	if(p >= end || *p++ != ']') return 0;
	*pp = p;
	if(path_eq(key, "REQUEST_URI") || path_eq(key, "SCRIPT_NAME") || path_eq(key, "PHP_SELF")) {
		return php_emit_str(out, off, cap, req_path);
	}
	if(path_eq(key, "SERVER_SOFTWARE")) return php_emit_str(out, off, cap, "HarvTTP/0.1");
	if(path_eq(key, "SERVER_PROTOCOL")) return php_emit_str(out, off, cap, "HTTP/1.0");
	if(path_eq(key, "DOCUMENT_ROOT")) {
		if(ctx->params && ctx->params->content_root_path[0]) {
			return php_emit_str(out, off, cap, ctx->params->content_root_path);
		}
		return php_emit_str(out, off, cap, "/confg/harvttp/httproot");
	}
	if(path_eq(key, "SERVER_ADDR")) return php_emit_ip(out, off, cap, ctx->net.ip);
	if(path_eq(key, "REMOTE_ADDR")) return php_emit_ip(out, off, cap, peer->ip);
	return 0;
}

static int php_eval_term(harvttp_context_t *ctx, const harvttp_tcp_peer_t *peer,
	const char *req_path, uint8_t *out, uint32_t *off, uint32_t cap,
	const uint8_t **pp, const uint8_t *end)
{
	const uint8_t *p = php_skip_ws(*pp, end);
	if(p >= end) return 0;
	if(*p == '\'' || *p == '"') {
		if(!php_emit_escaped_string(out, off, cap, &p, end)) return 0;
		*pp = p;
		return 1;
	}
	if(php_starts_with(p, end, "$_SERVER")) {
		if(!php_emit_server_var(ctx, peer, req_path, out, off, cap, &p, end)) return 0;
		*pp = p;
		return 1;
	}
	if(php_starts_with(p, end, "phpversion()")) {
		*pp = p + 12u;
		return php_emit_str(out, off, cap, "HarvTTP-PHP/0.1");
	}
	if(php_starts_with(p, end, "harvttp_ip()") || php_starts_with(p, end, "server_ip()")) {
		*pp = p + (php_starts_with(p, end, "harvttp_ip()") ? 12u : 11u);
		return php_emit_ip(out, off, cap, ctx->net.ip);
	}
	if(php_starts_with(p, end, "remote_addr()")) {
		*pp = p + 13u;
		return php_emit_ip(out, off, cap, peer->ip);
	}
	if(php_starts_with(p, end, "time()") || php_starts_with(p, end, "harvttp_uptime()")) {
		*pp = p + (php_starts_with(p, end, "time()") ? 6u : 16u);
		return php_emit_dec(out, off, cap, ctx->tick);
	}
	if(php_starts_with(p, end, "__FILE__")) {
		*pp = p + 8u;
		return php_emit_str(out, off, cap, req_path);
	}
	if(*p >= '0' && *p <= '9') {
		const uint8_t *start = p;
		while(p < end && *p >= '0' && *p <= '9') p++;
		if(!php_emit(out, off, cap, start, (uint32_t)(p - start))) return 0;
		*pp = p;
		return 1;
	}
	return 0;
}

static int php_eval_expr(harvttp_context_t *ctx, const harvttp_tcp_peer_t *peer,
	const char *req_path, uint8_t *out, uint32_t *off, uint32_t cap,
	const uint8_t *p, const uint8_t *end)
{
	uint8_t have_term = 0u;
	while(p < end) {
		p = php_skip_ws(p, end);
		if(p >= end || *p == ';') break;
		if(!php_eval_term(ctx, peer, req_path, out, off, cap, &p, end)) return 0;
		have_term = 1u;
		p = php_skip_ws(p, end);
		if(p < end && *p == '.') {
			p++;
			continue;
		}
		if(p < end && *p != ';') return 0;
	}
	return have_term;
}

static int php_emit_info(harvttp_context_t *ctx, const harvttp_tcp_peer_t *peer,
	const char *req_path, uint8_t *out, uint32_t *off, uint32_t cap)
{
	return php_emit_str(out, off, cap, "<section><h2>HarvTTP PHP</h2><ul><li>version: ") &&
	       php_emit_str(out, off, cap, "HarvTTP-PHP/0.1") &&
	       php_emit_str(out, off, cap, "</li><li>script: ") &&
	       php_emit_str(out, off, cap, req_path) &&
	       php_emit_str(out, off, cap, "</li><li>server: ") &&
	       php_emit_ip(out, off, cap, ctx->net.ip) &&
	       php_emit_str(out, off, cap, "</li><li>remote: ") &&
	       php_emit_ip(out, off, cap, peer->ip) &&
	       php_emit_str(out, off, cap, "</li></ul></section>");
}

static int php_exec_block(harvttp_context_t *ctx, const harvttp_tcp_peer_t *peer,
	const char *req_path, uint8_t *out, uint32_t *off, uint32_t cap,
	const uint8_t *p, const uint8_t *end)
{
	while(p < end) {
		p = php_skip_ws(p, end);
		if(p >= end) break;
		if(php_starts_with(p, end, "echo")) {
			p += 4u;
			if(!php_eval_expr(ctx, peer, req_path, out, off, cap, p, end)) return 0;
			while(p < end && *p != ';') p++;
			if(p < end) p++;
		} else if(php_starts_with(p, end, "phpinfo()") || php_starts_with(p, end, "harvttp_info()")) {
			if(!php_emit_info(ctx, peer, req_path, out, off, cap)) return 0;
			p += php_starts_with(p, end, "phpinfo()") ? 9u : 14u;
			p = php_skip_ws(p, end);
			if(p < end && *p == ';') p++;
		} else if(php_starts_with(p, end, "//")) {
			while(p < end && *p != '\n') p++;
		} else {
			return 0;
		}
	}
	return 1;
}

static int php_eval_static_term(uint8_t *out, uint32_t *off, uint32_t cap,
	const uint8_t **pp, const uint8_t *end)
{
	const uint8_t *p = php_skip_ws(*pp, end);
	if(p >= end) return 0;
	if(*p == '\'' || *p == '"') {
		if(!php_emit_escaped_string(out, off, cap, &p, end)) return 0;
		*pp = p;
		return 1;
	}
	if(*p >= '0' && *p <= '9') {
		const uint8_t *start = p;
		while(p < end && *p >= '0' && *p <= '9') p++;
		if(!php_emit(out, off, cap, start, (uint32_t)(p - start))) return 0;
		*pp = p;
		return 1;
	}
	return 0;
}

static int php_eval_static_expr(uint8_t *out, uint32_t *off, uint32_t cap,
	const uint8_t *p, const uint8_t *end)
{
	uint8_t have_term = 0u;
	while(p < end) {
		p = php_skip_ws(p, end);
		if(p >= end || *p == ';') break;
		if(!php_eval_static_term(out, off, cap, &p, end)) return 0;
		have_term = 1u;
		p = php_skip_ws(p, end);
		if(p < end && *p == '.') {
			p++;
			continue;
		}
		if(p < end && *p != ';') return 0;
	}
	return have_term;
}

static int php_exec_static_block(uint8_t *out, uint32_t *off, uint32_t cap,
	const uint8_t *p, const uint8_t *end)
{
	while(p < end) {
		p = php_skip_ws(p, end);
		if(p >= end) break;
		if(php_starts_with(p, end, "echo")) {
			p += 4u;
			if(!php_eval_static_expr(out, off, cap, p, end)) return 0;
			while(p < end && *p != ';') p++;
			if(p < end) p++;
		} else if(php_starts_with(p, end, "//")) {
			while(p < end && *p != '\n') p++;
		} else {
			return 0;
		}
	}
	return 1;
}

static int render_static_php_template(const uint8_t *src, uint32_t src_len,
	uint8_t *out, uint32_t cap, uint32_t *actual)
{
	const uint8_t *p = src;
	const uint8_t *end = src + src_len;
	uint32_t off = 0u;
	while(p < end) {
		if(p + 1u < end && p[0] == '<' && p[1] == '?') {
			const uint8_t *code_start;
			const uint8_t *code_end = php_find_close(p + 2u, end);
			uint8_t has_close = 1u;
			if(!code_end) {
				code_end = end;
				has_close = 0u;
			}
			if(p + 2u < end && p[2] == '=') {
				code_start = p + 3u;
				if(!php_eval_static_expr(out, &off, cap, code_start, code_end)) return 0;
			} else {
				code_start = p + 2u;
				if(php_starts_with(code_start, code_end, "php")) code_start += 3u;
				if(!php_exec_static_block(out, &off, cap, code_start, code_end)) return 0;
			}
			p = has_close ? code_end + 2u : code_end;
		} else {
			if(!php_emit(out, &off, cap, p, 1u)) return 0;
			p++;
		}
	}
	*actual = off;
	return 1;
}

static int render_php_template(harvttp_context_t *ctx, const harvttp_tcp_peer_t *peer,
	const char *req_path, const uint8_t *src, uint32_t src_len,
	uint8_t *out, uint32_t cap, uint32_t *actual)
{
	const uint8_t *p = src;
	const uint8_t *end = src + src_len;
	uint32_t off = 0u;
	while(p < end) {
		if(p + 1u < end && p[0] == '<' && p[1] == '?') {
			const uint8_t *code_start;
			const uint8_t *code_end = php_find_close(p + 2u, end);
			uint8_t has_close = 1u;
			if(!code_end) {
				code_end = end;
				has_close = 0u;
			}
			if(p + 2u < end && p[2] == '=') {
				code_start = p + 3u;
				if(!php_eval_expr(ctx, peer, req_path, out, &off, cap, code_start, code_end)) return 0;
			} else {
				code_start = p + 2u;
				if(php_starts_with(code_start, code_end, "php")) code_start += 3u;
				if(!php_exec_block(ctx, peer, req_path, out, &off, cap, code_start, code_end)) return 0;
			}
			p = has_close ? code_end + 2u : code_end;
		} else {
			if(!php_emit(out, &off, cap, p, 1u)) return 0;
			p++;
		}
	}
	*actual = off;
	return 1;
}

static uint32_t build_http_header(uint8_t *dst, uint32_t cap, uint32_t status,
	uint32_t mime, uint32_t body_len, uint8_t keep_alive)
{
	uint32_t off = 0;
	if(status == 200u) off = append_str(dst, off, cap, "HTTP/1.0 200 OK\r\n");
	else if(status == 404u) off = append_str(dst, off, cap, "HTTP/1.0 404 Not Found\r\n");
	else off = append_str(dst, off, cap, "HTTP/1.0 500 Internal Server Error\r\n");
	off = append_str(dst, off, cap, "Content-Type: ");
	off = append_str(dst, off, cap, mime_name(mime));
	off = append_str(dst, off, cap, "\r\nContent-Length: ");
	off = append_dec(dst, off, cap, body_len);
	if(keep_alive) {
		off = append_str(dst, off, cap,
			"\r\nConnection: keep-alive\r\nKeep-Alive: timeout=5, max=32\r\nServer: HarvTTP/0.1\r\n\r\n");
	} else {
		off = append_str(dst, off, cap, "\r\nConnection: close\r\nServer: HarvTTP/0.1\r\n\r\n");
	}
	return off;
}

static uint32_t send_http_response(harvttp_context_t *ctx, const harvttp_tcp_peer_t *peer,
	uint32_t seq, uint32_t ack, const uint8_t *body, uint32_t body_len,
	uint32_t mime, uint32_t status, uint8_t keep_alive)
{
	uint8_t payload_buf[1200];
	uint32_t sent = 0;
	uint8_t first = 1u;
	while(first || sent < body_len) {
		uint32_t off = 0;
		uint32_t room;
		uint32_t chunk;
		uint32_t frame_len;
		uint8_t flags;
		if(first) off = build_http_header(payload_buf, sizeof(payload_buf), status, mime, body_len, keep_alive);
		room = sizeof(payload_buf) - off;
		if(room > 1000u) room = 1000u;
		chunk = body_len - sent;
		if(chunk > room) chunk = room;
		if(chunk) mem_copy(payload_buf + off, body + sent, chunk);
		flags = (sent + chunk >= body_len) ? (keep_alive ? 0x18u : 0x19u) : 0x18u;
		frame_len = build_tcp_packet(ctx, peer->mac, peer->ip, peer->port,
			seq, ack, flags, payload_buf, off + chunk);
		(void)nic_send(ctx->tx, frame_len);
		seq += off + chunk;
		sent += chunk;
		first = 0u;
		if(chunk == 0u && sent >= body_len) break;
	}
	if(!keep_alive) seq++;
	return seq;
}

static void handle_tcp_http(harvttp_context_t *ctx, const uint8_t *frame, uint32_t len)
{
	const uint8_t *ip;
	const uint8_t *tcp;
	const uint8_t *payload;
	uint32_t ihl;
	uint32_t total;
	uint32_t tcp_hlen;
	uint32_t payload_len;
	uint32_t seq;
	uint32_t ack;
	uint16_t src_port;
	uint8_t flags;
	uint32_t frame_len;
	char req_path[HARVOS_HTTP_BUNDLE_PATH_BYTES];
	const harvos_http_bundle_entry_t *asset;
	const uint8_t *body;
	uint32_t body_len;
	uint32_t mime;
	uint32_t status;
	uint8_t keep_alive;
	harvttp_tcp_peer_t *peer;

	if(!ctx->net.bound || len < 54u || get16(frame + 12u) != 0x0800u) return;
	if(!mem_eq(frame, ctx->net.mac, 6u)) return;
	ip = frame + 14u;
	if((ip[0] >> 4) != 4u) return;
	ihl = (uint32_t)(ip[0] & 0x0Fu) << 2;
	if(ihl < 20u || 14u + ihl + 20u > len || ip[9] != 6u) return;
	if(checksum16(ip, ihl) != 0u) return;
	if(!mem_eq(ip + 16u, ctx->net.ip, 4u)) return;
	total = get16(ip + 2u);
	if(total < ihl + 20u || 14u + total > len) return;
	tcp = ip + ihl;
	if(get16(tcp + 2u) != HARVTTP_HTTP_PORT) return;
	tcp_hlen = (uint32_t)(tcp[12] >> 4) << 2;
	if(tcp_hlen < 20u || ihl + tcp_hlen > total) return;
	if(tcp_checksum(ip, tcp, total - ihl) != 0u) return;
	src_port = get16(tcp);
	flags = tcp[13];
	seq = get32(tcp + 4u);
	ack = get32(tcp + 8u);
	payload = tcp + tcp_hlen;
	payload_len = total - ihl - tcp_hlen;

	if(flags & 0x04u) {
		peer = tcp_peer_lookup(ctx, ip + 12u, src_port);
		if(peer) peer->active = 0u;
		return;
	}

	if(flags & 0x02u) {
		if(flags & 0x10u) return;
		peer = tcp_peer_alloc(ctx, frame + 6u, ip + 12u, src_port);
		if(peer->server_seq == 0u || peer->state == 0u) {
			peer->server_seq = 0x48545450u ^ ctx->tick ^
				((uint32_t)src_port << 16) ^ get32(ip + 12u);
			peer->client_seq_next = seq + 1u;
			peer->state = 1u;
		}
		frame_len = build_tcp_packet(ctx, peer->mac, peer->ip, src_port,
			peer->server_seq, seq + 1u, 0x12u, (const uint8_t *)0, 0u);
		(void)nic_send(ctx->tx, frame_len);
		return;
	}

	if(payload_len && payload_starts_get(payload, payload_len)) {
		uint32_t expected_ack;
		peer = tcp_peer_lookup(ctx, ip + 12u, src_port);
		if(!peer || peer->state < 1u) return;
		expected_ack = (peer->state == 1u) ? (peer->server_seq + 1u) : peer->server_seq;
		if(ack != expected_ack || seq != peer->client_seq_next) return;
		mem_copy(peer->mac, frame + 6u, 6u);
		keep_alive = (uint8_t)request_wants_keep_alive(payload, payload_len);
		if(extract_request_path(payload, payload_len, req_path, sizeof(req_path))) {
			asset = find_asset(ctx, req_path);
		} else {
			asset = (const harvos_http_bundle_entry_t *)0;
		}
		if(asset) {
			body = asset_data(ctx, asset);
			body_len = asset->size;
			mime = asset->mime_type;
			status = 200u;
			if(mime == HARVOS_HTTP_MIME_PHP) {
				uint32_t rendered = 0u;
				if(path_eq(req_path, "/index.php") && ctx->php_index_cache_valid) {
					body = ctx->php_index_cache;
					body_len = ctx->php_index_cache_len;
					mime = HARVOS_HTTP_MIME_HTML;
				} else if(render_php_template(ctx, peer, req_path, body, body_len,
					ctx->php, sizeof(ctx->php), &rendered)) {
					body = ctx->php;
					body_len = rendered;
					mime = HARVOS_HTTP_MIME_HTML;
				} else {
					body = (const uint8_t *)"HarvTTP PHP render error\n";
					body_len = cstr_len((const char *)body);
					mime = HARVOS_HTTP_MIME_TEXT;
					status = 500u;
				}
			}
		} else {
			body = ctx->html;
			body_len = ctx->html_len;
			mime = HARVOS_HTTP_MIME_HTML;
			status = 404u;
		}
		peer->client_seq_next = seq + payload_len;
		peer->state = keep_alive ? 2u : 3u;
		peer->server_seq = send_http_response(ctx, peer, ack, seq + payload_len,
			body, body_len, mime, status, keep_alive);
		return;
	}

	if(flags & 0x01u) {
		peer = tcp_peer_lookup(ctx, ip + 12u, src_port);
		if(peer) {
			frame_len = build_tcp_packet(ctx, peer->mac, peer->ip, src_port,
				ack, seq + 1u, 0x11u, (const uint8_t *)0, 0u);
			(void)nic_send(ctx->tx, frame_len);
			peer->active = 0u;
		}
	}
}

static void dispatch_frame(harvttp_context_t *ctx, const uint8_t *frame, uint32_t len)
{
	if(len < 14u) return;
	if(get16(frame + 12u) == 0x0806u) handle_arp(ctx, frame, len);
	else if(get16(frame + 12u) == 0x0800u) {
		handle_dhcp(ctx, frame, len);
		handle_tcp_http(ctx, frame, len);
	}
}

static void thread_sleep(harvttp_context_t *ctx, uint32_t id, uint32_t ticks)
{
	ctx->threads[id].wake_tick = ctx->tick + ticks;
}

static void content_thread(harvttp_context_t *ctx, uint32_t id)
{
	if(ctx->params && ctx->params->preloaded_content_vaddr && ctx->params->preloaded_content_size) {
		const harvos_http_bundle_header_t *bundle =
			(const harvos_http_bundle_header_t *)(uintptr_t)ctx->params->preloaded_content_vaddr;
		if(bundle_validate(bundle, ctx->params->preloaded_content_size)) {
			ctx->bundle = bundle;
			ctx->entries = (const harvos_http_bundle_entry_t *)(((const uint8_t *)bundle) + sizeof(*bundle));
			{
				const harvos_http_bundle_entry_t *index = find_asset(ctx, "/index.html");
				if(index) {
					ctx->html = asset_data(ctx, index);
					ctx->html_len = index->size;
				}
			}
			{
				const harvos_http_bundle_entry_t *index_php = find_asset(ctx, "/index.php");
				uint32_t rendered = 0u;
				if(index_php && index_php->mime_type == HARVOS_HTTP_MIME_PHP &&
				   render_static_php_template(asset_data(ctx, index_php), index_php->size,
				   	ctx->php_index_cache, sizeof(ctx->php_index_cache), &rendered)) {
					ctx->php_index_cache_len = rendered;
					ctx->php_index_cache_valid = 1u;
				}
			}
		} else {
			ctx->html = (const uint8_t *)(uintptr_t)ctx->params->preloaded_content_vaddr;
			ctx->html_len = ctx->params->preloaded_content_size;
		}
	}
	thread_sleep(ctx, id, 100000u);
}

static void dhcp_thread(harvttp_context_t *ctx, uint32_t id)
{
	if(!net_link_up()) {
		ctx->net.bound = 0u;
		ctx->net.state = HARVTTP_DHCP_DISCOVER;
		thread_sleep(ctx, id, 100u);
		return;
	}
	if(ctx->net.bound) {
		thread_sleep(ctx, id, 2000u);
		return;
	}
	if(ctx->tick >= ctx->net.retry_tick) {
		if(ctx->net.state == HARVTTP_DHCP_REQUEST) send_dhcp_request(ctx);
		else {
			ctx->net.state = HARVTTP_DHCP_DISCOVER;
			send_dhcp_discover(ctx);
		}
		ctx->net.retry_tick = ctx->tick + 1000u;
	}
	thread_sleep(ctx, id, 25u);
}

static void rx_thread(harvttp_context_t *ctx, uint32_t id)
{
	uint32_t burst;
	uint32_t pending;
	uint32_t irq;
	uint32_t handled = 0u;
	if(!ctx->net.bound && ctx->net.retry_tick == 0u) {
		thread_sleep(ctx, id, 5u);
		return;
	}
	pending = nic_rx_pending_frames();
	irq = harvttp_take_irq_events();
	if(irq == 0u) irq = net_read(HARVOS_NET_REG_IRQ_STAT);
	if(pending == 0u) {
		uint32_t status = net_read(HARVOS_NET_REG_STATUS);
		if((status & HARVOS_NET_STATUS_RX_VALID) == 0u) {
			if(irq & (HARVOS_NET_IRQ_RX_READY | HARVOS_NET_IRQ_RX_DONE)) {
				net_write(HARVOS_NET_REG_IRQ_STAT,
					HARVOS_NET_IRQ_RX_READY | HARVOS_NET_IRQ_RX_DONE);
			}
			nic_flush_tx(HARVTTP_TX_BATCH_BUDGET);
			thread_sleep(ctx, id, ctx->txq.count ? 1u : 2u);
			return;
		}
		pending = 1u;
	}
	for(burst = 0; burst < HARVTTP_RX_BATCH_BUDGET; ++burst) {
		uint32_t actual = 0;
		uint32_t known_ready = pending != 0u;
		if(nic_recv_ready(ctx->rx, sizeof(ctx->rx), &actual, known_ready) != 0) break;
		if(pending != 0u) pending--;
		handled++;
		if(actual >= 14u) dispatch_frame(ctx, ctx->rx, actual);
		if(pending == 0u) {
			pending = nic_rx_pending_frames();
			if(pending == 0u) break;
		}
	}
	if(handled != 0u || (irq & (HARVOS_NET_IRQ_RX_READY | HARVOS_NET_IRQ_RX_DONE))) {
		net_write(HARVOS_NET_REG_IRQ_STAT, HARVOS_NET_IRQ_RX_READY | HARVOS_NET_IRQ_RX_DONE);
	}
	nic_flush_tx(HARVTTP_TX_BATCH_BUDGET);
	thread_sleep(ctx, id, (handled >= HARVTTP_RX_BATCH_BUDGET || ctx->txq.count) ? 1u : 2u);
}

static void tx_thread(harvttp_context_t *ctx, uint32_t id)
{
	uint32_t irq = harvttp_take_irq_events();
	nic_flush_tx((irq & HARVOS_NET_IRQ_TX_DONE) ? HARVTTP_TX_BATCH_BUDGET : 8u);
	thread_sleep(ctx, id, ctx->txq.count ? 1u : 2u);
}

static void watchdog_thread(harvttp_context_t *ctx, uint32_t id)
{
	harvttp_audit(0x48545744u, (ctx->rx_frames << 16) ^ ctx->tx_frames ^ ctx->tx_drops);
	thread_sleep(ctx, id, 4096u);
}

static void scheduler_init(harvttp_context_t *ctx)
{
	ctx->threads[0].active = 1u;
	ctx->threads[1].active = 1u;
	ctx->threads[2].active = 1u;
	ctx->threads[3].active = 1u;
	ctx->threads[4].active = 1u;
}

__attribute__((noreturn))
static void scheduler_run(harvttp_context_t *ctx)
{
	for(;;) {
		ctx->tick++;
		if(ctx->threads[0].active && ctx->tick >= ctx->threads[0].wake_tick) content_thread(ctx, 0u);
		if(ctx->threads[1].active && ctx->tick >= ctx->threads[1].wake_tick) dhcp_thread(ctx, 1u);
		if(ctx->threads[2].active && ctx->tick >= ctx->threads[2].wake_tick) tx_thread(ctx, 2u);
		if(ctx->threads[3].active && ctx->tick >= ctx->threads[3].wake_tick) rx_thread(ctx, 3u);
		if(ctx->threads[4].active && ctx->tick >= ctx->threads[4].wake_tick) watchdog_thread(ctx, 4u);
		harvttp_yield();
	}
}

static void harvttp_init(harvttp_context_t *ctx, const harvos_app_start_params_t *params)
{
	mem_zero((uint8_t *)ctx, sizeof(*ctx));
	ctx->params = params;
	ctx->net.mac[0] = 0x02u;
	ctx->net.mac[1] = 0x48u;
	ctx->net.mac[2] = 0x54u;
	ctx->net.mac[3] = 0x54u;
	ctx->net.mac[4] = 0x50u;
	ctx->net.mac[5] = (params && params->app_id) ? (uint8_t)params->app_id : 1u;
	ctx->net.xid = 0x48545450u ^ ((params && params->app_id) ? params->app_id : 1u);
	ctx->net.state = HARVTTP_DHCP_DISCOVER;
	ctx->html = (const uint8_t *)fallback_html;
	ctx->html_len = cstr_len(fallback_html);
	csr_write_stvec((uint32_t)(uintptr_t)&harvttp_trap_entry);

	net_write(HARVOS_NET_REG_CTRL,
		HARVOS_NET_CTRL_ENABLE | HARVOS_NET_CTRL_CLEAR |
		HARVOS_NET_CTRL_TX_CSUM_OFFLOAD | HARVOS_NET_CTRL_TX_DESC_RING);
	net_write(HARVOS_NET_REG_IRQ_STAT,
		HARVOS_NET_IRQ_RX_READY | HARVOS_NET_IRQ_RX_DONE |
		HARVOS_NET_IRQ_TX_DONE | HARVOS_NET_IRQ_FAULT | HARVOS_NET_IRQ_LINK);
	net_write(HARVOS_NET_REG_IRQ_EN,
		HARVOS_NET_IRQ_RX_READY | HARVOS_NET_IRQ_RX_DONE |
		HARVOS_NET_IRQ_FAULT | HARVOS_NET_IRQ_LINK);
	net_write(HARVOS_NET_REG_MAC_LO,
		((uint32_t)ctx->net.mac[2] << 24) | ((uint32_t)ctx->net.mac[3] << 16) |
		((uint32_t)ctx->net.mac[4] << 8) | ctx->net.mac[5]);
	net_write(HARVOS_NET_REG_MAC_HI, ((uint32_t)ctx->net.mac[0] << 8) | ctx->net.mac[1]);
	harvttp_irq_enable();
	scheduler_init(ctx);
}

__attribute__((noreturn))
void harvttp_main(const harvos_app_start_params_t *params)
{
	harvttp_init(&g_ctx, params);
	scheduler_run(&g_ctx);
}

__attribute__((section(".text.start"), naked, noreturn))
void _start(void)
{
	__asm__ volatile(
		".option push\n"
		".option norelax\n"
		"lui gp, %hi(__global_pointer$)\n"
		"addi gp, gp, %lo(__global_pointer$)\n"
		".option pop\n"
		"j harvttp_main\n");
}
