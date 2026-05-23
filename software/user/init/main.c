// Copyright 2025 Dennis Michael Heine

#include "../../include/harvos_abi.h"

int main(void)
{
	harvos_ipc_send(0, 0x494E4954u, 0x00000001u);
	harvos_yield();
	return 0;
}
