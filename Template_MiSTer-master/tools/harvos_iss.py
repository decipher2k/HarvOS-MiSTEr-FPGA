#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Reference instruction-set simulator for HarvOS MiSTer programs."""

from __future__ import annotations

import argparse
from pathlib import Path

OP_LOAD = 0x03
OP_FENCE = 0x0F
OP_OP_IMM = 0x13
OP_AUIPC = 0x17
OP_STORE = 0x23
OP_OP = 0x33
OP_LUI = 0x37
OP_BRANCH = 0x63
OP_JALR = 0x67
OP_JAL = 0x6F
OP_SYSTEM = 0x73
OP_CUSTOM0 = 0x0B


def sx(value: int, bits: int) -> int:
    return value - (1 << bits) if value & (1 << (bits - 1)) else value


def u32(value: int) -> int:
    return value & 0xFFFFFFFF


class Machine:
    def __init__(self, rom: list[int], entropy: int = 0x1ACEB00C):
        self.rom = rom
        self.reg = [0] * 32
        self.pc = 0
        self.mem: dict[int, int] = {}
        self.csrs = {
            0x100: 0x300,
            0x101: 0x80,
            0x102: 0,
            0x103: 0,
            0x104: 0,
            0x105: 0x80000000,
            0x120: 0,
            0x130: 1,
            0x140: 0,
        }
        self.entropy = entropy
        self.trap = False

    def fetch(self) -> int:
        if self.pc & 3:
            self.raise_trap(0, self.pc)
            return 0x13
        idx = self.pc >> 2
        if idx >= len(self.rom):
            self.raise_trap(1, self.pc)
            return 0x13
        return self.rom[idx]

    def raise_trap(self, cause: int, value: int) -> None:
        self.csrs[0x102] = self.pc
        self.csrs[0x103] = cause
        self.csrs[0x104] = value & 0xFFFFFFFF
        self.pc = self.csrs[0x101]
        self.trap = True

    def load_byte(self, addr: int) -> int:
        word = self.mem.get(addr & ~3, 0)
        return (word >> ((addr & 3) * 8)) & 0xFF

    def load_half(self, addr: int) -> int:
        return self.load_byte(addr) | (self.load_byte(addr + 1) << 8)

    def load_word(self, addr: int) -> int:
        return self.mem.get(addr & ~3, 0)

    def store_byte(self, addr: int, value: int) -> None:
        base = addr & ~3
        shift = (addr & 3) * 8
        old = self.mem.get(base, 0)
        self.mem[base] = u32((old & ~(0xFF << shift)) | ((value & 0xFF) << shift))

    def store_half(self, addr: int, value: int) -> None:
        self.store_byte(addr, value)
        self.store_byte(addr + 1, value >> 8)

    def store_word(self, addr: int, value: int) -> None:
        self.mem[addr & ~3] = u32(value)

    def step(self) -> None:
        ins = self.fetch()
        if self.trap:
            return
        opc = ins & 0x7F
        rd = (ins >> 7) & 31
        f3 = (ins >> 12) & 7
        rs1 = (ins >> 15) & 31
        rs2 = (ins >> 20) & 31
        f7 = (ins >> 25) & 0x7F
        npc = (self.pc + 4) & 0xFFFFFFFF

        if opc == OP_OP_IMM:
            imm = sx(ins >> 20, 12)
            shamt = (ins >> 20) & 0x1F
            if f3 == 0:
                self.reg[rd] = self.reg[rs1] + imm
            elif f3 == 1 and f7 == 0:
                self.reg[rd] = self.reg[rs1] << shamt
            elif f3 == 2:
                self.reg[rd] = 1 if sx(self.reg[rs1] & 0xFFFFFFFF, 32) < imm else 0
            elif f3 == 3:
                self.reg[rd] = 1 if (self.reg[rs1] & 0xFFFFFFFF) < (imm & 0xFFFFFFFF) else 0
            elif f3 == 4:
                self.reg[rd] = self.reg[rs1] ^ imm
            elif f3 == 5 and f7 == 0:
                self.reg[rd] = (self.reg[rs1] & 0xFFFFFFFF) >> shamt
            elif f3 == 5 and f7 == 0x20:
                self.reg[rd] = sx(self.reg[rs1] & 0xFFFFFFFF, 32) >> shamt
            elif f3 == 6:
                self.reg[rd] = self.reg[rs1] | imm
            elif f3 == 7:
                self.reg[rd] = self.reg[rs1] & imm
            else:
                self.raise_trap(2, ins)
        elif opc == OP_OP:
            if f3 == 0 and f7 == 0x20:
                self.reg[rd] = self.reg[rs1] - self.reg[rs2]
            elif f3 == 0:
                self.reg[rd] = self.reg[rs1] + self.reg[rs2]
            elif f3 == 1 and f7 == 0:
                self.reg[rd] = self.reg[rs1] << (self.reg[rs2] & 0x1F)
            elif f3 == 2:
                self.reg[rd] = 1 if sx(self.reg[rs1] & 0xFFFFFFFF, 32) < sx(self.reg[rs2] & 0xFFFFFFFF, 32) else 0
            elif f3 == 3:
                self.reg[rd] = 1 if (self.reg[rs1] & 0xFFFFFFFF) < (self.reg[rs2] & 0xFFFFFFFF) else 0
            elif f3 == 4:
                self.reg[rd] = self.reg[rs1] ^ self.reg[rs2]
            elif f3 == 5 and f7 == 0:
                self.reg[rd] = (self.reg[rs1] & 0xFFFFFFFF) >> (self.reg[rs2] & 0x1F)
            elif f3 == 5 and f7 == 0x20:
                self.reg[rd] = sx(self.reg[rs1] & 0xFFFFFFFF, 32) >> (self.reg[rs2] & 0x1F)
            elif f3 == 6:
                self.reg[rd] = self.reg[rs1] | self.reg[rs2]
            elif f3 == 7:
                self.reg[rd] = self.reg[rs1] & self.reg[rs2]
            else:
                self.raise_trap(2, ins)
        elif opc == OP_LUI:
            self.reg[rd] = ins & 0xFFFFF000
        elif opc == OP_AUIPC:
            self.reg[rd] = self.pc + (ins & 0xFFFFF000)
        elif opc == OP_LOAD:
            addr = (self.reg[rs1] + sx(ins >> 20, 12)) & 0xFFFFFFFF
            if (f3 in {1, 5} and (addr & 1)) or (f3 == 2 and (addr & 3)):
                self.raise_trap(4, addr)
            elif f3 == 0:
                self.reg[rd] = sx(self.load_byte(addr), 8)
            elif f3 == 1:
                self.reg[rd] = sx(self.load_half(addr), 16)
            elif f3 == 2:
                self.reg[rd] = self.load_word(addr)
            elif f3 == 4:
                self.reg[rd] = self.load_byte(addr)
            elif f3 == 5:
                self.reg[rd] = self.load_half(addr)
            else:
                self.raise_trap(2, ins)
        elif opc == OP_STORE:
            imm = ((ins >> 7) & 0x1F) | (((ins >> 25) & 0x7F) << 5)
            addr = (self.reg[rs1] + sx(imm, 12)) & 0xFFFFFFFF
            if (f3 == 1 and (addr & 1)) or (f3 == 2 and (addr & 3)):
                self.raise_trap(6, addr)
            elif f3 == 0:
                self.store_byte(addr, self.reg[rs2])
            elif f3 == 1:
                self.store_half(addr, self.reg[rs2])
            elif f3 == 2:
                self.store_word(addr, self.reg[rs2])
            else:
                self.raise_trap(2, ins)
        elif opc == OP_BRANCH:
            imm = (((ins >> 31) & 1) << 12) | (((ins >> 7) & 1) << 11) | (((ins >> 25) & 0x3F) << 5) | (((ins >> 8) & 0xF) << 1)
            take = (
                (f3 == 0 and self.reg[rs1] == self.reg[rs2])
                or (f3 == 1 and self.reg[rs1] != self.reg[rs2])
                or (f3 == 4 and sx(self.reg[rs1] & 0xFFFFFFFF, 32) < sx(self.reg[rs2] & 0xFFFFFFFF, 32))
                or (f3 == 5 and sx(self.reg[rs1] & 0xFFFFFFFF, 32) >= sx(self.reg[rs2] & 0xFFFFFFFF, 32))
                or (f3 == 6 and (self.reg[rs1] & 0xFFFFFFFF) < (self.reg[rs2] & 0xFFFFFFFF))
                or (f3 == 7 and (self.reg[rs1] & 0xFFFFFFFF) >= (self.reg[rs2] & 0xFFFFFFFF))
            )
            if take:
                npc = (self.pc + sx(imm, 13)) & 0xFFFFFFFF
        elif opc == OP_JAL:
            imm = (((ins >> 31) & 1) << 20) | (((ins >> 12) & 0xFF) << 12) | (((ins >> 20) & 1) << 11) | (((ins >> 21) & 0x3FF) << 1)
            self.reg[rd] = self.pc + 4
            npc = (self.pc + sx(imm, 21)) & 0xFFFFFFFF
        elif opc == OP_JALR:
            self.reg[rd] = self.pc + 4
            npc = (self.reg[rs1] + sx(ins >> 20, 12)) & 0xFFFFFFFE
        elif opc == OP_FENCE:
            pass
        elif opc == OP_SYSTEM:
            if ins == 0x00000073:
                self.raise_trap(9, 0)
            elif ins == 0x00100073:
                self.raise_trap(3, 0)
            elif f3 in {1, 2, 3}:
                csr = ins >> 20
                old = self.csrs.get(csr, 0)
                if f3 == 1:
                    self.csrs[csr] = self.reg[rs1]
                elif f3 == 2 and rs1:
                    self.csrs[csr] = old | self.reg[rs1]
                elif f3 == 3 and rs1:
                    self.csrs[csr] = old & ~self.reg[rs1]
                self.reg[rd] = old
            else:
                self.raise_trap(2, ins)
        elif opc == OP_CUSTOM0:
            if f3 == 0:
                self.reg[rd] = 0
            elif f3 == 1:
                for i in range(self.reg[rs2]):
                    self.mem[(self.reg[rs1] + i * 4) & 0xFFFFFFFF] = 0
            elif f3 == 2:
                self.reg[rd] = self.entropy
            else:
                self.raise_trap(2, ins)
        else:
            self.raise_trap(2, ins)

        self.reg[0] = 0
        if not self.trap:
            self.pc = npc & 0xFFFFFFFF
        for idx in range(32):
            self.reg[idx] &= 0xFFFFFFFF


def read_hex(path: Path) -> list[int]:
    return [int(line.strip(), 16) for line in path.read_text().splitlines() if line.strip()]


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("program", type=Path)
    parser.add_argument("--steps", type=int, default=200)
    args = parser.parse_args()
    machine = Machine(read_hex(args.program))
    for _ in range(args.steps):
        machine.step()
        if machine.trap:
            break
    print(f"pc=0x{machine.pc:08x} trap={int(machine.trap)} scause=0x{machine.csrs[0x103]:08x}")
    print(f"x5=0x{machine.reg[5]:08x} x6=0x{machine.reg[6]:08x} x7=0x{machine.reg[7]:08x}")
    for addr in sorted(machine.mem)[:8]:
        print(f"mem[0x{addr:08x}]=0x{machine.mem[addr]:08x}")


if __name__ == "__main__":
    main()
