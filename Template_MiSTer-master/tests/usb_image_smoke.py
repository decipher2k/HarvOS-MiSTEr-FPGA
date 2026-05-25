#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Build and validate the HarvOS USB-stick images used by the boot path."""

from __future__ import annotations

import hashlib
import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
PY = sys.executable

PROGRAM_REQUIRED = [
    "/harvttp.elf",
    "/config/harvttp.yaml",
    "/confg/harvttp/httproot/index.html",
    "/confg/harvttp/httproot/about.html",
    "/confg/harvttp/httproot/assets/style.css",
    "/confg/harvttp/httproot/assets/app.js",
    "/confg/harvttp/httproot/assets/harvttp.svg",
]

DATA_REQUIRED = [
    "/data",
    "/data/harvttp",
]


def run(args: list[str]) -> str:
    proc = subprocess.run(args, cwd=ROOT, check=True, text=True, capture_output=True)
    if proc.stderr:
        print(proc.stderr, end="", file=sys.stderr)
    return proc.stdout


def sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def inspect(image: Path, required: list[str]) -> dict[str, object]:
    tool = ROOT / "tools" / "harvos_usb_image.py"
    args = [PY, str(tool), "inspect", str(image), "--json"]
    for path in required:
        args += ["--require", path]
    return json.loads(run(args))


def build(source: Path, image: Path, label: str) -> dict[str, object]:
    tool = ROOT / "tools" / "harvos_usb_image.py"
    return json.loads(
        run(
            [
                PY,
                str(tool),
                "build",
                str(source),
                "-o",
                str(image),
                "--label",
                label,
                "--size-mib",
                "33",
                "--json",
            ]
        )
    )


def main() -> None:
    program_dir = ROOT / "release" / "program_usb"
    data_dir = ROOT / "release" / "data_usb"
    program_image = ROOT / "release" / "program_usb.img"
    data_image = ROOT / "release" / "data_usb.img"
    harvttp_elf = program_dir / "harvttp.elf"

    if not harvttp_elf.exists():
        raise SystemExit("HarvTTP ELF missing; run scripts/build_harvttp.ps1 first")

    build(program_dir, program_image, "HARVPROG")
    build(data_dir, data_image, "HARVDATA")

    program = inspect(program_image, PROGRAM_REQUIRED)
    data = inspect(data_image, DATA_REQUIRED)

    required = {item["path"]: item for item in program["required"]}
    assert required["/harvttp.elf"]["sha256"] == sha256(harvttp_elf)
    assert required["/config/harvttp.yaml"]["size"] > 0
    assert required["/confg/harvttp/httproot/index.html"]["size"] > 0

    data_required = {item["path"]: item for item in data["required"]}
    assert data_required["/data"]["is_dir"]
    assert data_required["/data/harvttp"]["is_dir"]

    print(
        "usb image smoke passed "
        f"program_image={program_image} data_image={data_image}"
    )


if __name__ == "__main__":
    main()
