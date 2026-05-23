// Copyright 2025 Dennis Michael Heine

#ifndef HARVOS_KERNEL_H
#define HARVOS_KERNEL_H

#include <stdint.h>
#include <stddef.h>

#define HARVOS_MAX_TASKS 8u
#define HARVOS_MAX_ENDPOINTS 8u
#define HARVOS_QUEUE_DEPTH 4u
#define HARVOS_PAGE_SIZE 4096u

#define HARVOS_CAP_MEM_MAP  (1u << 0)
#define HARVOS_CAP_IPC_SEND (1u << 1)
#define HARVOS_CAP_IPC_RECV (1u << 2)
#define HARVOS_CAP_DMA      (1u << 3)
#define HARVOS_CAP_MMIO     (1u << 4)

typedef enum {
	HARVOS_TASK_EMPTY = 0,
	HARVOS_TASK_READY = 1,
	HARVOS_TASK_BLOCKED = 2,
	HARVOS_TASK_FAULTED = 3
} harvos_task_state_t;

typedef struct {
	uint32_t pc;
	uint32_t sp;
	uint32_t satp;
	uint32_t caps;
	uint32_t budget;
	harvos_task_state_t state;
} harvos_task_t;

typedef struct {
	uint32_t words[4];
	uint32_t caps;
	uint8_t from;
} harvos_msg_t;

typedef struct {
	harvos_msg_t queue[HARVOS_QUEUE_DEPTH];
	uint8_t head;
	uint8_t tail;
	uint8_t count;
	uint8_t owner;
} harvos_endpoint_t;

typedef struct {
	harvos_task_t tasks[HARVOS_MAX_TASKS];
	harvos_endpoint_t endpoints[HARVOS_MAX_ENDPOINTS];
	uint8_t current;
	uint32_t ticks;
	uint32_t audit_digest;
} harvos_kernel_t;

void harvos_kernel_init(harvos_kernel_t *kernel);
int harvos_task_create(harvos_kernel_t *kernel, uint32_t pc, uint32_t sp, uint32_t satp, uint32_t caps);
void harvos_schedule_tick(harvos_kernel_t *kernel);
int harvos_ipc_send(harvos_kernel_t *kernel, uint8_t endpoint, const harvos_msg_t *msg);
int harvos_ipc_recv(harvos_kernel_t *kernel, uint8_t endpoint, harvos_msg_t *msg);
int harvos_mmap_allowed(uint32_t caps, uint32_t pte_flags);
int harvos_syscall(harvos_kernel_t *kernel, uint32_t number, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t harvos_audit(const harvos_kernel_t *kernel);

#endif
