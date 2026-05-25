#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""A small behavioral mirror of the C kernel policy for host CI."""

HARVOS_CAP_MEM_MAP = 1 << 0
HARVOS_CAP_IPC_SEND = 1 << 1
HARVOS_CAP_IPC_RECV = 1 << 2
PTE_V = 0x01
PTE_R = 0x02
PTE_W = 0x04
PTE_X = 0x08
PTE_U = 0x10


def mmap_allowed(caps: int, flags: int) -> bool:
    if not flags & PTE_V:
        return False
    if flags & PTE_W and flags & PTE_X:
        return False
    if flags & PTE_X and flags & PTE_U:
        return False
    if flags & PTE_W and not caps & HARVOS_CAP_MEM_MAP:
        return False
    return True


def main() -> None:
    assert mmap_allowed(HARVOS_CAP_MEM_MAP, PTE_V | PTE_R | PTE_W | PTE_U)
    assert not mmap_allowed(HARVOS_CAP_MEM_MAP, PTE_V | PTE_R | PTE_W | PTE_X)
    assert not mmap_allowed(0, PTE_V | PTE_R | PTE_W)
    assert not mmap_allowed(HARVOS_CAP_MEM_MAP, PTE_V | PTE_X | PTE_U)
    print("kernel policy smoke passed")


if __name__ == "__main__":
    main()
