// Copyright 2025 Dennis Michael Heine

#include "harvos_kernel.h"

enum {
	PTE_V = 0x01,
	PTE_R = 0x02,
	PTE_W = 0x04,
	PTE_X = 0x08,
	PTE_U = 0x10
};

static uint32_t rotate_left(uint32_t value, unsigned count)
{
	return (value << count) | (value >> (32u - count));
}

static void audit_event(harvos_kernel_t *kernel, uint32_t code, uint32_t data)
{
	kernel->audit_digest = rotate_left(kernel->audit_digest, 5) ^ code ^ data;
}

void harvos_kernel_init(harvos_kernel_t *kernel)
{
	size_t i;
	for(i = 0; i < HARVOS_MAX_TASKS; ++i) {
		kernel->tasks[i].pc = 0;
		kernel->tasks[i].sp = 0;
		kernel->tasks[i].satp = 0x80000000u;
		kernel->tasks[i].caps = 0;
		kernel->tasks[i].budget = 0;
		kernel->tasks[i].state = HARVOS_TASK_EMPTY;
	}
	for(i = 0; i < HARVOS_MAX_ENDPOINTS; ++i) {
		kernel->endpoints[i].head = 0;
		kernel->endpoints[i].tail = 0;
		kernel->endpoints[i].count = 0;
		kernel->endpoints[i].owner = 0;
	}
	kernel->current = 0;
	kernel->ticks = 0;
	kernel->audit_digest = 0x48415256u;
}

int harvos_task_create(harvos_kernel_t *kernel, uint32_t pc, uint32_t sp, uint32_t satp, uint32_t caps)
{
	size_t i;
	for(i = 0; i < HARVOS_MAX_TASKS; ++i) {
		if(kernel->tasks[i].state == HARVOS_TASK_EMPTY) {
			kernel->tasks[i].pc = pc;
			kernel->tasks[i].sp = sp;
			kernel->tasks[i].satp = satp | 0x80000000u;
			kernel->tasks[i].caps = caps;
			kernel->tasks[i].budget = 1000;
			kernel->tasks[i].state = HARVOS_TASK_READY;
			audit_event(kernel, 0xC001u, (uint32_t)i);
			return (int)i;
		}
	}
	return -1;
}

void harvos_schedule_tick(harvos_kernel_t *kernel)
{
	unsigned n;
	kernel->ticks++;
	for(n = 0; n < HARVOS_MAX_TASKS; ++n) {
		uint8_t candidate = (uint8_t)((kernel->current + 1u + n) % HARVOS_MAX_TASKS);
		if(kernel->tasks[candidate].state == HARVOS_TASK_READY) {
			kernel->current = candidate;
			audit_event(kernel, 0x5100u, candidate);
			return;
		}
	}
}

int harvos_ipc_send(harvos_kernel_t *kernel, uint8_t endpoint, const harvos_msg_t *msg)
{
	harvos_endpoint_t *ep;
	harvos_msg_t copy;
	if(endpoint >= HARVOS_MAX_ENDPOINTS) return -1;
	if((kernel->tasks[kernel->current].caps & HARVOS_CAP_IPC_SEND) == 0) return -2;
	ep = &kernel->endpoints[endpoint];
	if(ep->count >= HARVOS_QUEUE_DEPTH) return -3;
	copy = *msg;
	copy.from = kernel->current;
	ep->queue[ep->tail] = copy;
	ep->tail = (uint8_t)((ep->tail + 1u) % HARVOS_QUEUE_DEPTH);
	ep->count++;
	audit_event(kernel, 0x1500u, endpoint);
	return 0;
}

int harvos_ipc_recv(harvos_kernel_t *kernel, uint8_t endpoint, harvos_msg_t *msg)
{
	harvos_endpoint_t *ep;
	if(endpoint >= HARVOS_MAX_ENDPOINTS) return -1;
	if((kernel->tasks[kernel->current].caps & HARVOS_CAP_IPC_RECV) == 0) return -2;
	ep = &kernel->endpoints[endpoint];
	if(ep->count == 0) return -3;
	*msg = ep->queue[ep->head];
	ep->head = (uint8_t)((ep->head + 1u) % HARVOS_QUEUE_DEPTH);
	ep->count--;
	audit_event(kernel, 0x2500u, endpoint);
	return 0;
}

int harvos_mmap_allowed(uint32_t caps, uint32_t pte_flags)
{
	if((pte_flags & PTE_V) == 0) return 0;
	if((pte_flags & PTE_W) && (pte_flags & PTE_X)) return 0;
	if((pte_flags & PTE_X) && (pte_flags & PTE_U)) return 0;
	if((pte_flags & PTE_W) && ((caps & HARVOS_CAP_MEM_MAP) == 0)) return 0;
	return 1;
}

int harvos_syscall(harvos_kernel_t *kernel, uint32_t number, uint32_t a0, uint32_t a1, uint32_t a2)
{
	harvos_msg_t msg;
	switch(number) {
	case 0:
		return (int)harvos_audit(kernel);
	case 1:
		msg.words[0] = a1;
		msg.words[1] = a2;
		msg.words[2] = 0;
		msg.words[3] = 0;
		msg.caps = 0;
		return harvos_ipc_send(kernel, (uint8_t)a0, &msg);
	case 2:
		return harvos_mmap_allowed(kernel->tasks[kernel->current].caps, a0) ? 0 : -1;
	default:
		audit_event(kernel, 0xBAD0u, number);
		return -38;
	}
}

uint32_t harvos_audit(const harvos_kernel_t *kernel)
{
	return kernel->audit_digest ^ kernel->ticks ^ kernel->current;
}
