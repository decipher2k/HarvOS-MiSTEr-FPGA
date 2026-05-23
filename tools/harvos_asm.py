#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Small HarvOS assembler for the MiSTer prototype ISA."""

from __future__ import annotations

import argparse
import re
from pathlib import Path

OPC = {
    "LOAD": 0b0000011,
    "FENCE": 0b0001111,
    "OP_IMM": 0b0010011,
    "AUIPC": 0b0010111,
    "STORE": 0b0100011,
    "OP": 0b0110011,
    "LUI": 0b0110111,
    "BRANCH": 0b1100011,
    "JALR": 0b1100111,
    "JAL": 0b1101111,
    "SYSTEM": 0b1110011,
    "CUSTOM0": 0b0001011,
}

F3 = {
    "ADD": 0,
    "SUB": 0,
    "ADDI": 0,
    "SLL": 1,
    "SLLI": 1,
    "SLT": 2,
    "SLTI": 2,
    "SLTU": 3,
    "SLTIU": 3,
    "LB": 0,
    "LH": 1,
    "LW": 2,
    "LBU": 4,
    "LHU": 5,
    "SB": 0,
    "SH": 1,
    "SW": 2,
    "XOR": 4,
    "XORI": 4,
    "SRL": 5,
    "SRA": 5,
    "SRLI": 5,
    "SRAI": 5,
    "OR": 6,
    "ORI": 6,
    "AND": 7,
    "ANDI": 7,
    "BEQ": 0,
    "BNE": 1,
    "BLT": 4,
    "BGE": 5,
    "BLTU": 6,
    "BGEU": 7,
    "CSRRW": 1,
    "CSRRS": 2,
    "CSRRC": 3,
    "CLRREG": 0,
    "CLRMEM": 1,
    "ENTROPY": 2,
}

CSR = {
    "sstatus": 0x100,
    "stvec": 0x101,
    "sepc": 0x102,
    "scause": 0x103,
    "stval": 0x104,
    "satp": 0x105,
    "srandom": 0x120,
    "smpuctl": 0x130,
    "scaps": 0x140,
}


def reg(text: str) -> int:
    text = text.strip().lower()
    aliases = {
        "zero": 0,
        "ra": 1,
        "sp": 2,
        "gp": 3,
        "tp": 4,
        "a0": 10,
        "a1": 11,
        "a2": 12,
        "a3": 13,
        "a4": 14,
        "a5": 15,
        "a6": 16,
        "a7": 17,
    }
    if text in aliases:
        return aliases[text]
    if re.fullmatch(r"x([0-9]|[12][0-9]|3[01])", text):
        return int(text[1:])
    raise ValueError(f"bad register: {text}")


def imm(text: str, labels: dict[str, int] | None = None, pc: int | None = None) -> int:
    text = text.strip()
    if labels is not None and text in labels:
        return labels[text] - (pc or 0)
    return int(text, 0)


def split_ops(rest: str) -> list[str]:
    return [part.strip() for part in rest.split(",") if part.strip()]


def enc_r(f7: int, rs2: int, rs1: int, f3: int, rd: int) -> int:
    return (f7 << 25) | (rs2 << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | OPC["OP"]


def enc_i(value: int, rs1: int, f3: int, rd: int, opc: int) -> int:
    return ((value & 0xFFF) << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | opc


def enc_s(value: int, rs2: int, rs1: int, f3: int) -> int:
    value &= 0xFFF
    return ((value >> 5) << 25) | (rs2 << 20) | (rs1 << 15) | (f3 << 12) | ((value & 0x1F) << 7) | OPC["STORE"]


def enc_b(value: int, rs1: int, rs2: int, f3: int) -> int:
    value &= 0x1FFF
    return (
        (((value >> 12) & 1) << 31)
        | (((value >> 5) & 0x3F) << 25)
        | (rs2 << 20)
        | (rs1 << 15)
        | (f3 << 12)
        | (((value >> 1) & 0xF) << 8)
        | (((value >> 11) & 1) << 7)
        | OPC["BRANCH"]
    )


def enc_j(value: int, rd: int) -> int:
    value &= 0x1FFFFF
    return (
        (((value >> 20) & 1) << 31)
        | (((value >> 1) & 0x3FF) << 21)
        | (((value >> 11) & 1) << 20)
        | (((value >> 12) & 0xFF) << 12)
        | (rd << 7)
        | OPC["JAL"]
    )


def enc_custom(f3: int, rd: int, rs1: int, rs2: int) -> int:
    return (rs2 << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | OPC["CUSTOM0"]


def clean_lines(source: str) -> list[tuple[int, str]]:
    out = []
    for lineno, raw in enumerate(source.splitlines(), 1):
        line = raw.split("#", 1)[0].split(";", 1)[0].strip()
        if line:
            out.append((lineno, line))
    return out


def assemble(source: str) -> list[int]:
    lines = clean_lines(source)
    labels: dict[str, int] = {}
    pc = 0
    body: list[tuple[int, int, str]] = []
    for lineno, line in lines:
        while ":" in line:
            name, line = line.split(":", 1)
            labels[name.strip()] = pc
            line = line.strip()
            if not line:
                break
        if line:
            body.append((lineno, pc, line))
            pc += 4

    words: list[int] = []
    for lineno, pc, line in body:
        mnemonic, _, rest = line.partition(" ")
        op = mnemonic.upper()
        args = split_ops(rest)
        try:
            if op in {"ADD", "SUB", "AND", "OR", "XOR", "SLT", "SLTU", "SLL", "SRL", "SRA"}:
                rd, rs1, rs2 = map(reg, args)
                f7 = 0x20 if op in {"SUB", "SRA"} else 0x00
                words.append(enc_r(f7, rs2, rs1, F3[op], rd))
            elif op in {"ADDI", "ANDI", "ORI", "XORI", "SLTI", "SLTIU"}:
                rd, rs1 = reg(args[0]), reg(args[1])
                words.append(enc_i(imm(args[2]), rs1, F3[op], rd, OPC["OP_IMM"]))
            elif op in {"SLLI", "SRLI", "SRAI"}:
                rd, rs1 = reg(args[0]), reg(args[1])
                shamt = imm(args[2]) & 0x1F
                f7 = 0x20 if op == "SRAI" else 0x00
                words.append(enc_i((f7 << 5) | shamt, rs1, F3[op], rd, OPC["OP_IMM"]))
            elif op in {"LB", "LH", "LW", "LBU", "LHU"}:
                rd = reg(args[0])
                m = re.fullmatch(r"(.+)\((.+)\)", args[1].replace(" ", ""))
                if not m:
                    raise ValueError("expected imm(rs1)")
                words.append(enc_i(imm(m.group(1)), reg(m.group(2)), F3[op], rd, OPC["LOAD"]))
            elif op in {"SB", "SH", "SW"}:
                rs2 = reg(args[0])
                m = re.fullmatch(r"(.+)\((.+)\)", args[1].replace(" ", ""))
                if not m:
                    raise ValueError("expected imm(rs1)")
                words.append(enc_s(imm(m.group(1)), rs2, reg(m.group(2)), F3[op]))
            elif op in {"BEQ", "BNE", "BLT", "BGE", "BLTU", "BGEU"}:
                words.append(enc_b(imm(args[2], labels, pc), reg(args[0]), reg(args[1]), F3[op]))
            elif op == "JAL":
                words.append(enc_j(imm(args[1], labels, pc), reg(args[0])))
            elif op == "JALR":
                words.append(enc_i(imm(args[2]), reg(args[1]), 0, reg(args[0]), OPC["JALR"]))
            elif op == "LUI":
                words.append(((imm(args[1]) & 0xFFFFF000) | (reg(args[0]) << 7) | OPC["LUI"]))
            elif op == "AUIPC":
                words.append(((imm(args[1]) & 0xFFFFF000) | (reg(args[0]) << 7) | OPC["AUIPC"]))
            elif op in {"CSRRW", "CSRRS", "CSRRC"}:
                rd, csr_name, rs1 = reg(args[0]), args[1], reg(args[2])
                csr_value = CSR.get(csr_name.lower(), imm(csr_name))
                words.append(enc_i(csr_value, rs1, F3[op], rd, OPC["SYSTEM"]))
            elif op == "ECALL":
                words.append(0x00000073)
            elif op == "EBREAK":
                words.append(0x00100073)
            elif op == "FENCE":
                words.append(0x0000000F)
            elif op == "FENCE.I":
                words.append(0x0000100F)
            elif op == "CLRREG":
                words.append(enc_custom(F3["CLRREG"], reg(args[0]), 0, 0))
            elif op == "CLRMEM":
                words.append(enc_custom(F3["CLRMEM"], 0, reg(args[0]), reg(args[1])))
            elif op == "ENTROPY":
                words.append(enc_custom(F3["ENTROPY"], reg(args[0]), 0, 0))
            elif op == "WORD":
                words.append(imm(args[0]) & 0xFFFFFFFF)
            else:
                raise ValueError(f"unknown mnemonic {op}")
        except Exception as exc:
            raise SystemExit(f"{lineno}: {line}: {exc}") from exc
    return words


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("input", type=Path)
    parser.add_argument("-o", "--output", type=Path)
    parser.add_argument("--format", choices=["hex", "mif"], default="hex")
    args = parser.parse_args()
    words = assemble(args.input.read_text())
    if args.format == "hex":
        text = "\n".join(f"{word:08x}" for word in words) + "\n"
    else:
        text = "\n".join(f"{idx}: {word:08x}" for idx, word in enumerate(words)) + "\n"
    if args.output:
        args.output.write_text(text)
    else:
        print(text, end="")


if __name__ == "__main__":
    main()
