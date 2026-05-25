#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Behavioral smoke test for the HarvOS ASID-slot MPU/MMU isolation contract."""

from __future__ import annotations

import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
PY = sys.executable

D_RAM_BASE = 0x0000_0400
D_RAM_BYTES = 0x0020_0000
PAGE_SIZE = 0x1000
SATP_PPN_MASK = 0x000F_FFFF
USER_TEXT_VBASE = 0x0010_0000
USER_TEXT_SLOT_BYTES = 0x0001_0000
USER_DATA_SLOT_BYTES = 0x0002_0000
USER_STACK_LOW = 0x6FFF_F000
USER_STACK_BYTES = 0x0000_1000
USER_PARAMS_BASE = 0x7000_1000
USER_PARAMS_BYTES = 0x0000_1000
USER_CONTENT_BASE = 0x7001_0000
USER_CONTENT_STRIDE = 0x0001_0000
USER_DATA_STACK_OFFSET = 0x0000_8000
USER_DATA_PARAMS_OFFSET = 0x0000_9000
USER_DATA_CONTENT_OFFSET = 0x0000_A000
CAP_NORMAL_MEMORY = 1 << 0
CAP_MMIO = 1 << 4
PTE_V = 0x01
PTE_R = 0x02
PTE_W = 0x04
PTE_X = 0x08
PTE_U = 0x10
PTE_A = 0x40
PTE_D = 0x80


def asid_from_satp(satp: int) -> int:
    return (satp >> 22) & 0xFF


def satp_for(asid: int, root_phys: int = 0) -> int:
    return 0x8000_0000 | ((asid & 0xFF) << 22) | ((root_phys >> 12) & SATP_PPN_MASK)


def make_pte(phys: int, flags: int) -> int:
    return (phys & 0xFFFF_F000) | (flags & 0xFF)


def translate(vaddr: int, satp: int, access: str) -> tuple[bool, int]:
    asid = asid_from_satp(satp)
    if asid == 0:
        return True, vaddr

    slot = asid - 1
    if access == "fetch":
        if USER_TEXT_VBASE <= vaddr < USER_TEXT_VBASE + USER_TEXT_SLOT_BYTES:
            off = vaddr - USER_TEXT_VBASE
            return True, USER_TEXT_VBASE + slot * USER_TEXT_SLOT_BYTES + off
        return False, 0

    if USER_TEXT_VBASE <= vaddr < USER_TEXT_VBASE + USER_TEXT_SLOT_BYTES:
        off = vaddr - USER_TEXT_VBASE
    elif USER_STACK_LOW <= vaddr < USER_STACK_LOW + USER_STACK_BYTES:
        off = USER_DATA_STACK_OFFSET + (vaddr - USER_STACK_LOW)
    elif USER_PARAMS_BASE + slot * USER_PARAMS_BYTES <= vaddr < USER_PARAMS_BASE + (slot + 1) * USER_PARAMS_BYTES:
        off = USER_DATA_PARAMS_OFFSET + (vaddr - (USER_PARAMS_BASE + slot * USER_PARAMS_BYTES))
    elif USER_CONTENT_BASE + slot * USER_CONTENT_STRIDE <= vaddr < USER_CONTENT_BASE + (slot + 1) * USER_CONTENT_STRIDE:
        off = USER_DATA_CONTENT_OFFSET + (vaddr - (USER_CONTENT_BASE + slot * USER_CONTENT_STRIDE))
    else:
        return False, 0

    if off >= USER_DATA_SLOT_BYTES:
        return False, 0
    paddr = D_RAM_BASE + slot * USER_DATA_SLOT_BYTES + off
    return paddr + 4 <= D_RAM_BASE + D_RAM_BYTES, paddr


def translate_ram(vaddr: int, satp: int, memory: dict[int, int]) -> tuple[bool, int, int]:
    root = (satp & SATP_PPN_MASK) << 12
    if root == 0:
        ok, paddr = translate(vaddr, satp, "load")
        return ok, paddr, 0

    l1_addr = root + ((vaddr >> 22) & 0x3FF) * 4
    l1_pte = memory.get(l1_addr, 0)
    l1_flags = l1_pte & 0xFF
    if not (l1_flags & PTE_V) or (l1_flags & (PTE_R | PTE_W | PTE_X)):
        return False, 0, 0

    l0_base = l1_pte & 0xFFFF_F000
    l0_addr = l0_base + ((vaddr >> 12) & 0x3FF) * 4
    l0_pte = memory.get(l0_addr, 0)
    l0_flags = l0_pte & 0xFF
    if not (l0_flags & PTE_V) or not (l0_flags & (PTE_R | PTE_W | PTE_X)):
        return False, 0, l0_flags

    return True, (l0_pte & 0xFFFF_F000) | (vaddr & 0xFFF), l0_flags


def main() -> None:
    assert CAP_NORMAL_MEMORY == 0x0000_0001
    assert CAP_MMIO == 0x0000_0010

    ok1, code1 = translate(USER_TEXT_VBASE, satp_for(1), "fetch")
    ok2, code2 = translate(USER_TEXT_VBASE, satp_for(2), "fetch")
    assert ok1 and ok2
    assert code1 == USER_TEXT_VBASE
    assert code2 == USER_TEXT_VBASE + USER_TEXT_SLOT_BYTES
    assert code1 != code2

    ok1, data1 = translate(USER_TEXT_VBASE, satp_for(1), "load")
    ok2, data2 = translate(USER_TEXT_VBASE, satp_for(2), "load")
    assert ok1 and ok2
    assert data1 == D_RAM_BASE
    assert data2 == D_RAM_BASE + USER_DATA_SLOT_BYTES
    assert data1 != data2

    ok, stack = translate(USER_STACK_LOW, satp_for(2), "store")
    assert ok
    assert stack == D_RAM_BASE + USER_DATA_SLOT_BYTES + USER_DATA_STACK_OFFSET

    ok, params = translate(USER_PARAMS_BASE + USER_PARAMS_BYTES, satp_for(2), "load")
    assert ok
    assert params == D_RAM_BASE + USER_DATA_SLOT_BYTES + USER_DATA_PARAMS_OFFSET

    own_content = USER_CONTENT_BASE + USER_CONTENT_STRIDE
    ok, content = translate(own_content, satp_for(2), "load")
    assert ok
    assert content == D_RAM_BASE + USER_DATA_SLOT_BYTES + USER_DATA_CONTENT_OFFSET

    foreign_content = USER_CONTENT_BASE + USER_CONTENT_STRIDE
    ok, _ = translate(foreign_content, satp_for(1), "load")
    assert not ok

    ok, _ = translate(USER_TEXT_VBASE, satp_for(0), "fetch")
    assert ok

    root = 0x0000_2000
    l0_text = 0x0000_3000
    l0_stack = 0x0000_4000
    phys_text = 0x0010_0000
    phys_stack = 0x0000_9000
    mem: dict[int, int] = {}
    mem[root + ((USER_TEXT_VBASE >> 22) & 0x3FF) * 4] = make_pte(l0_text, PTE_V)
    mem[l0_text + ((USER_TEXT_VBASE >> 12) & 0x3FF) * 4] = make_pte(
        phys_text, PTE_V | PTE_R | PTE_X | PTE_U | PTE_A
    )
    mem[root + ((USER_STACK_LOW >> 22) & 0x3FF) * 4] = make_pte(l0_stack, PTE_V)
    mem[l0_stack + ((USER_STACK_LOW >> 12) & 0x3FF) * 4] = make_pte(
        phys_stack, PTE_V | PTE_R | PTE_W | PTE_U | PTE_A | PTE_D
    )
    ok, paddr, flags = translate_ram(USER_TEXT_VBASE, satp_for(1, root), mem)
    assert ok and paddr == phys_text and flags & PTE_X
    ok, paddr, flags = translate_ram(USER_STACK_LOW, satp_for(1, root), mem)
    assert ok and paddr == phys_stack and flags & PTE_W
    guard_vaddr = USER_STACK_LOW - PAGE_SIZE
    ok, _, _ = translate_ram(guard_vaddr, satp_for(1, root), mem)
    assert not ok
    ok, _, _ = translate_ram(USER_STACK_LOW + PAGE_SIZE, satp_for(1, root), mem)
    assert not ok

    asm = ROOT / "build" / "mpu_mmu_isolation_smoke.hvasm"
    hex_out = ROOT / "build" / "mpu_mmu_isolation_smoke.hex"
    asm.parent.mkdir(parents=True, exist_ok=True)
    asm.write_text("SRET\n", encoding="ascii")
    subprocess.run([PY, str(ROOT / "tools" / "harvos_asm.py"), str(asm), "-o", str(hex_out)], cwd=ROOT, check=True)
    assert hex_out.read_text(encoding="ascii").strip() == "10200073"

    print("mpu/mmu isolation smoke passed")


if __name__ == "__main__":
    main()
