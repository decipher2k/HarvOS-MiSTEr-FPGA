// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_ABI_H
#define HARVOS_ABI_H

#include <stdint.h>

#define HARVOS_XLEN 32u
#define HARVOS_PAGE_SIZE 4096u
#define HARVOS_APP_MAX_PATH 128u
#define HARVOS_APP_CONTENT_BASE 0x70010000u
#define HARVOS_APP_CONTENT_STRIDE 65536u
#define HARVOS_HTTP_BUNDLE_MAGIC 0x48545450u
#define HARVOS_HTTP_BUNDLE_VERSION 1u
#define HARVOS_HTTP_BUNDLE_MAX_FILES 16u
#define HARVOS_HTTP_BUNDLE_PATH_BYTES 92u
#define HARVOS_HTTP_MIME_HTML 1u
#define HARVOS_HTTP_MIME_CSS  2u
#define HARVOS_HTTP_MIME_JS   3u
#define HARVOS_HTTP_MIME_PNG  4u
#define HARVOS_HTTP_MIME_JPEG 5u
#define HARVOS_HTTP_MIME_GIF  6u
#define HARVOS_HTTP_MIME_SVG  7u
#define HARVOS_HTTP_MIME_TEXT 8u
#define HARVOS_HTTP_MIME_BIN  9u
#define HARVOS_HTTP_MIME_PHP  10u

#define HARVOS_SYS_AUDIT 0u
#define HARVOS_SYS_IPC_SEND 1u
#define HARVOS_SYS_MMAP 2u
#define HARVOS_SYS_YIELD 3u

#define HARVOS_CAP_MEM_MAP  (1u << 0)
#define HARVOS_CAP_IPC_SEND (1u << 1)
#define HARVOS_CAP_IPC_RECV (1u << 2)
#define HARVOS_CAP_DMA      (1u << 3)
#define HARVOS_CAP_MMIO     (1u << 4)

#define HARVOS_CSR_SSTATUS 0x100u
#define HARVOS_CSR_STVEC   0x101u
#define HARVOS_CSR_SEPC    0x102u
#define HARVOS_CSR_SCAUSE  0x103u
#define HARVOS_CSR_STVAL   0x104u
#define HARVOS_CSR_SATP    0x105u
#define HARVOS_CSR_SRANDOM 0x120u
#define HARVOS_CSR_SMPUCTL 0x130u
#define HARVOS_CSR_SCAPS   0x140u

#define HARVOS_SATP_MODE      0x80000000u
#define HARVOS_SATP_ASID_SHIFT 22u
#define HARVOS_SATP_ASID_MASK 0x3FC00000u
#define HARVOS_SATP_PPN_MASK  0x000FFFFFu

#define HARVOS_SCAUSE_EXTERNAL_INTERRUPT 0x8000000Bu

#define HARVOS_MMIO_BASE        0xFFFF0000u
#define HARVOS_DMA_WINDOW_BASE  0x00000500u
#define HARVOS_DMA_WINDOW_BYTES 2048u
#define HARVOS_NET_MMIO_BASE    0xFFFF0040u
#define HARVOS_USB_MMIO_BASE    0xFFFF0080u
#define HARVOS_HPS_BLOCK_MMIO_BASE 0xFFFF00C0u
#define HARVOS_IMEM_LOADER_MMIO_BASE 0xFFFF0030u

#define HARVOS_IMEM_LOADER_REG_ID     0x00u
#define HARVOS_IMEM_LOADER_REG_CTRL   0x04u
#define HARVOS_IMEM_LOADER_REG_ADDR   0x08u
#define HARVOS_IMEM_LOADER_REG_DATA   0x0Cu
#define HARVOS_IMEM_LOADER_CMD_WRITE  (1u << 0)
#define HARVOS_IMEM_LOADER_CMD_LOCK   (1u << 1)
#define HARVOS_IMEM_LOADER_CMD_CLEAR  (1u << 2)
#define HARVOS_IMEM_LOADER_STATUS_DONE   (1u << 16)
#define HARVOS_IMEM_LOADER_STATUS_FAULT  (1u << 17)
#define HARVOS_IMEM_LOADER_STATUS_LOCKED (1u << 18)

#define HARVOS_NET_REG_ID       0x00u
#define HARVOS_NET_REG_CTRL     0x04u
#define HARVOS_NET_REG_STATUS   0x08u
#define HARVOS_NET_REG_IRQ_EN   0x0Cu
#define HARVOS_NET_REG_IRQ_STAT 0x10u
#define HARVOS_NET_REG_RX_ADDR  0x14u
#define HARVOS_NET_REG_RX_LEN   0x18u
#define HARVOS_NET_REG_COMMAND  0x1Cu
#define HARVOS_NET_REG_TX_ADDR  0x20u
#define HARVOS_NET_REG_TX_LEN   0x24u
#define HARVOS_NET_REG_MAC_LO   0x28u
#define HARVOS_NET_REG_MAC_HI   0x2Cu
#define HARVOS_NET_REG_FRAME_LEN 0x30u
#define HARVOS_NET_REG_RX_COUNT 0x34u
#define HARVOS_NET_REG_TX_COUNT 0x38u
#define HARVOS_NET_REG_DEBUG    0x3Cu
#define HARVOS_NET_REG_RX_PENDING HARVOS_NET_REG_DEBUG
#define HARVOS_NET_REG_RX_WORDS   HARVOS_NET_REG_DEBUG

#define HARVOS_NET_CTRL_ENABLE   (1u << 0)
#define HARVOS_NET_CTRL_LOOPBACK (1u << 1)
#define HARVOS_NET_CTRL_CLEAR    (1u << 2)
#define HARVOS_NET_CTRL_PROMISC  (1u << 3)
#define HARVOS_NET_CTRL_SIM_LINK (1u << 4)
#define HARVOS_NET_CTRL_TX_CSUM_OFFLOAD (1u << 5)
#define HARVOS_NET_CTRL_TX_DESC_RING    (1u << 6)
#define HARVOS_NET_CMD_TX_START  (1u << 0)
#define HARVOS_NET_CMD_RX_START  (1u << 1)
#define HARVOS_NET_CMD_CLEAR     (1u << 2)
#define HARVOS_NET_IRQ_RX_DONE   (1u << 0)
#define HARVOS_NET_IRQ_TX_DONE   (1u << 1)
#define HARVOS_NET_IRQ_FAULT     (1u << 2)
#define HARVOS_NET_IRQ_LINK      (1u << 3)
#define HARVOS_NET_IRQ_RX_READY  (1u << 4)
#define HARVOS_NET_STATUS_LINK   (1u << 7)
#define HARVOS_NET_STATUS_BUSY   (1u << 8)
#define HARVOS_NET_STATUS_DONE   (1u << 9)
#define HARVOS_NET_STATUS_FAULT  (1u << 10)
#define HARVOS_NET_STATUS_IRQ    (1u << 11)
#define HARVOS_NET_STATUS_RX_OP  (1u << 12)
#define HARVOS_NET_STATUS_TX_READY (1u << 13)
#define HARVOS_NET_STATUS_RX_VALID (1u << 14)
#define HARVOS_NET_STATUS_RX_ERROR (1u << 15)

typedef struct {
	uint32_t app_id;
	uint32_t service_mask;
	uint32_t mem_base;
	uint32_t mem_size;
	uint32_t debug_flags;
	uint32_t preloaded_content_vaddr;
	uint32_t preloaded_content_size;
	char config_path[HARVOS_APP_MAX_PATH];
	char data_path[HARVOS_APP_MAX_PATH];
	char content_root_path[HARVOS_APP_MAX_PATH];
} harvos_app_start_params_t;

typedef struct {
	uint32_t magic;
	uint32_t version;
	uint32_t file_count;
	uint32_t entry_size;
	uint32_t data_offset;
	uint32_t total_size;
} harvos_http_bundle_header_t;

typedef struct {
	char path[HARVOS_HTTP_BUNDLE_PATH_BYTES];
	uint32_t offset;
	uint32_t size;
	uint32_t mime_type;
	uint32_t flags;
	uint32_t reserved[5];
} harvos_http_bundle_entry_t;

#define HARVOS_USB_REG_ID       0x00u
#define HARVOS_USB_REG_CTRL     0x04u
#define HARVOS_USB_REG_STATUS   0x08u
#define HARVOS_USB_REG_IRQ_EN   0x0Cu
#define HARVOS_USB_REG_IRQ_STAT 0x10u
#define HARVOS_USB_REG_DMA_ADDR 0x14u
#define HARVOS_USB_REG_DMA_LEN  0x18u
#define HARVOS_USB_REG_COMMAND  0x1Cu
#define HARVOS_USB_REG_PORT     0x20u
#define HARVOS_USB_REG_FRAME    0x24u
#define HARVOS_USB_REG_ACTUAL   0x28u
#define HARVOS_USB_REG_TOKEN    0x2Cu
#define HARVOS_USB_REG_PHY      0x30u
#define HARVOS_USB_REG_PACKET   0x34u
#define HARVOS_USB_REG_RETRY    0x38u
#define HARVOS_USB_REG_ENGINE   0x3Cu

#define HARVOS_USB_CTRL_ENABLE       (1u << 0)
#define HARVOS_USB_CTRL_SIM_CONNECT  (1u << 1)
#define HARVOS_USB_CTRL_CLEAR        (1u << 2)
#define HARVOS_USB_CTRL_PORT_POWER   (1u << 3)
#define HARVOS_USB_CTRL_USE_UTMI     (1u << 4)
#define HARVOS_USB_CTRL_PORT_RESET   (1u << 5)
#define HARVOS_USB_IRQ_DONE          (1u << 0)
#define HARVOS_USB_IRQ_FAULT         (1u << 1)
#define HARVOS_USB_IRQ_STALL         (1u << 2)
#define HARVOS_USB_IRQ_NAK_LIMIT     (1u << 3)
#define HARVOS_USB_IRQ_OVERCURRENT   (1u << 4)
#define HARVOS_USB_STATUS_CONNECTED  (1u << 7)
#define HARVOS_USB_STATUS_BUSY       (1u << 8)
#define HARVOS_USB_STATUS_DONE       (1u << 9)
#define HARVOS_USB_STATUS_FAULT      (1u << 10)
#define HARVOS_USB_STATUS_IRQ        (1u << 11)
#define HARVOS_USB_PID_OUT           0xE1u
#define HARVOS_USB_PID_IN            0x69u
#define HARVOS_USB_PID_SETUP         0x2Du
#define HARVOS_USB_PID_DATA0         0xC3u
#define HARVOS_USB_PID_DATA1         0x4Bu
#define HARVOS_USB_PID_ACK           0xD2u

#define HARVOS_HPS_BLOCK_REG_ID       0x00u
#define HARVOS_HPS_BLOCK_REG_CTRL     0x04u
#define HARVOS_HPS_BLOCK_REG_STATUS   0x08u
#define HARVOS_HPS_BLOCK_REG_DRIVE    0x0Cu
#define HARVOS_HPS_BLOCK_REG_LBA_LO   0x10u
#define HARVOS_HPS_BLOCK_REG_LBA_HI   0x14u
#define HARVOS_HPS_BLOCK_REG_COUNT    0x18u
#define HARVOS_HPS_BLOCK_REG_BUF_IDX  0x1Cu
#define HARVOS_HPS_BLOCK_REG_BUF_DATA 0x20u
#define HARVOS_HPS_BLOCK_REG_SIZE_LO  0x24u
#define HARVOS_HPS_BLOCK_REG_SIZE_HI  0x28u
#define HARVOS_HPS_BLOCK_REG_MEDIA    0x2Cu
#define HARVOS_HPS_BLOCK_REG_DEBUG    0x30u

#define HARVOS_HPS_BLOCK_CTRL_START   (1u << 0)
#define HARVOS_HPS_BLOCK_CTRL_WRITE   (1u << 1)
#define HARVOS_HPS_BLOCK_CTRL_CLEAR   (1u << 2)
#define HARVOS_HPS_BLOCK_STATUS_BUSY  (1u << 8)
#define HARVOS_HPS_BLOCK_STATUS_DONE  (1u << 9)
#define HARVOS_HPS_BLOCK_STATUS_FAULT (1u << 10)

#define HARVOS_PTE_V 0x01u
#define HARVOS_PTE_R 0x02u
#define HARVOS_PTE_W 0x04u
#define HARVOS_PTE_X 0x08u
#define HARVOS_PTE_U 0x10u
#define HARVOS_PTE_G 0x20u
#define HARVOS_PTE_A 0x40u
#define HARVOS_PTE_D 0x80u

typedef struct {
	uint32_t words[4];
	uint32_t caps;
	uint32_t from;
} harvos_ipc_msg_t;

long harvos_syscall3(uint32_t number, uint32_t a0, uint32_t a1, uint32_t a2);
long harvos_audit(void);
long harvos_ipc_send(uint32_t endpoint, uint32_t word0, uint32_t word1);
long harvos_mmap(uint32_t pte_flags);
long harvos_yield(void);

#endif
