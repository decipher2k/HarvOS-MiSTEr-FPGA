// Copyright 2025 Dennis Michael Heine

#include "../../include/harvos_abi.h"

int main(void)
{
	uint32_t flags = HARVOS_PTE_V | HARVOS_PTE_R | HARVOS_PTE_W | HARVOS_PTE_U | HARVOS_PTE_A | HARVOS_PTE_D;
	harvos_mmap(flags);
	harvos_ipc_send(0, 0x4E455444u, 0x00000001u);
	return 0;
}
