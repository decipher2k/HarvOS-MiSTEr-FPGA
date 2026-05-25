#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Convert a 32-bit little-endian ELF into separate HarvOS IMEM/DMEM hex files."""

from __future__ import annotations

import argparse
import struct
from pathlib import Path

PT_LOAD = 1
PF_X = 1


def parse_u32(value: str) -> int:
    return int(value, 0)


def put_bytes(memory: dict[int, int], base: int, data: bytes) -> None:
    for off, byte in enumerate(data):
        memory[base + off] = byte


def write_memhex(path: Path, memory: dict[int, int]) -> None:
    words: dict[int, int] = {}
    for byte_addr, byte in memory.items():
        word_index = byte_addr >> 2
        shift = (byte_addr & 3) * 8
        words[word_index] = words.get(word_index, 0) & ~(0xFF << shift)
        words[word_index] |= (byte & 0xFF) << shift

    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="ascii", newline="\n") as out:
        last_index: int | None = None
        for index in sorted(words):
            if last_index is None or index != last_index + 1:
                out.write(f"@{index:08x}\n")
            out.write(f"{words[index] & 0xFFFFFFFF:08x}\n")
            last_index = index


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("elf", type=Path)
    parser.add_argument("--imem", type=Path, required=True)
    parser.add_argument("--dmem", type=Path, required=True)
    parser.add_argument("--dram-base", type=parse_u32, default=0x400)
    args = parser.parse_args()

    elf = args.elf.read_bytes()
    if len(elf) < 52 or elf[:4] != b"\x7fELF":
        raise SystemExit(f"not an ELF file: {args.elf}")
    if elf[4] != 1 or elf[5] != 1:
        raise SystemExit("only ELF32 little-endian is supported")

    (
        _etype,
        machine,
        _version,
        _entry,
        phoff,
        _shoff,
        _flags,
        _ehsize,
        phentsize,
        phnum,
        _shentsize,
        _shnum,
        _shstrndx,
    ) = struct.unpack_from("<HHIIIIIHHHHHH", elf, 16)
    if machine != 243:
        raise SystemExit(f"unsupported ELF machine {machine}, expected RISC-V")
    if phentsize != 32:
        raise SystemExit(f"unsupported program header size {phentsize}")

    imem: dict[int, int] = {}
    dmem: dict[int, int] = {}
    for i in range(phnum):
        ph = struct.unpack_from("<IIIIIIII", elf, phoff + i * phentsize)
        p_type, p_offset, p_vaddr, p_paddr, p_filesz, _p_memsz, p_flags, _p_align = ph
        if p_type != PT_LOAD or p_filesz == 0:
            continue
        if p_offset + p_filesz > len(elf):
            raise SystemExit(f"program header {i} exceeds ELF file")
        data = elf[p_offset : p_offset + p_filesz]
        load_addr = p_paddr or p_vaddr
        if p_flags & PF_X:
            if load_addr & 3:
                raise SystemExit(f"executable segment {i} is not word-aligned")
            put_bytes(imem, load_addr, data)
        else:
            if load_addr < args.dram_base:
                raise SystemExit(f"data segment {i} below DRAM base 0x{args.dram_base:08x}")
            put_bytes(dmem, load_addr - args.dram_base, data)

    write_memhex(args.imem, imem)
    write_memhex(args.dmem, dmem)
    print(f"imem_hex={args.imem}")
    print(f"dmem_hex={args.dmem}")


if __name__ == "__main__":
    main()
