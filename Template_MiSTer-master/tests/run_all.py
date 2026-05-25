#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Run local HarvOS prototype reference checks."""

from __future__ import annotations

import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
PY = sys.executable


def run(args: list[str]) -> str:
    proc = subprocess.run(args, cwd=ROOT, check=True, text=True, capture_output=True)
    if proc.stdout:
        print(proc.stdout, end="")
    if proc.stderr:
        print(proc.stderr, end="", file=sys.stderr)
    return proc.stdout


def run_processor_boot() -> None:
    script = ROOT / "scripts" / "run_processor_boot_test.ps1"
    run(["powershell", "-NoProfile", "-ExecutionPolicy", "Bypass", "-File", str(script)])


def main() -> None:
    asm = ROOT / "tools" / "harvos_asm.py"
    iss = ROOT / "tools" / "harvos_iss.py"
    image = ROOT / "tools" / "harvos_image.py"
    program = ROOT / "tests" / "boot_demo.hvasm"
    hex_path = ROOT / "tests" / "boot_demo.hex"
    image_path = ROOT / "tests" / "boot_image.json"
    services = ROOT / "software" / "services" / "service_manifest.json"

    run([PY, str(asm), str(program), "-o", str(hex_path)])
    iss_out = run([PY, str(iss), str(hex_path), "--steps", "80"])
    if "trap=0" not in iss_out:
        raise SystemExit("ISS reported a trap")
    run([PY, str(image), "--rom", str(hex_path), "--services", str(services), "-o", str(image_path)])
    obj = json.loads(image_path.read_text())
    assert obj["format"] == "HarvOS-image-v2"
    assert obj["rom_words"] > 0
    assert obj["services"]["policy"]["wx"] == "deny"
    verify_out = run([PY, str(image), "--rom", str(hex_path), "--services", str(services), "--verify", str(image_path)])
    if "ok=1" not in verify_out:
        raise SystemExit("image verification failed")
    run([PY, str(ROOT / "tests" / "usb_image_smoke.py")])
    run([PY, str(ROOT / "tests" / "mpu_mmu_isolation_smoke.py")])
    run_processor_boot()
    run([PY, str(ROOT / "tests" / "kernel_model_smoke.py")])
    run([PY, str(ROOT / "tests" / "service_model_smoke.py")])
    print("HarvOS reference checks passed")


if __name__ == "__main__":
    main()
