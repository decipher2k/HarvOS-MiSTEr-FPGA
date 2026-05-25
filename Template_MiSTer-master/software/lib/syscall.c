// Copyright 2025 Dennis Michael Heine

#include "../include/harvos_abi.h"

long harvos_syscall3(uint32_t number, uint32_t a0, uint32_t a1, uint32_t a2)
{
	(void)number;
	(void)a0;
	(void)a1;
	(void)a2;
	/*
	 * The reference C library is hosted-buildable. The real HarvOS target
	 * ABI places syscall number in a7, args in a0-a2, and uses ECALL.
	 * Until a C compiler backend exists, tests call the kernel model directly.
	 */
	return -38;
}

long harvos_audit(void)
{
	return harvos_syscall3(HARVOS_SYS_AUDIT, 0, 0, 0);
}

long harvos_ipc_send(uint32_t endpoint, uint32_t word0, uint32_t word1)
{
	return harvos_syscall3(HARVOS_SYS_IPC_SEND, endpoint, word0, word1);
}

long harvos_mmap(uint32_t pte_flags)
{
	return harvos_syscall3(HARVOS_SYS_MMAP, pte_flags, 0, 0);
}

long harvos_yield(void)
{
	return harvos_syscall3(HARVOS_SYS_YIELD, 0, 0, 0);
}
