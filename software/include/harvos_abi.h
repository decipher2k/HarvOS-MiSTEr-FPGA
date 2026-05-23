// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_ABI_H
#define HARVOS_ABI_H

#include <stdint.h>

#define HARVOS_XLEN 32u
#define HARVOS_PAGE_SIZE 4096u

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
