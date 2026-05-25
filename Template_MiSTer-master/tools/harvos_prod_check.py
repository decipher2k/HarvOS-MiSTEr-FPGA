#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Production-readiness gate for the HarvOS repository."""

from __future__ import annotations

import argparse
import json
import os
import shutil
import subprocess
import sys
from pathlib import Path
from typing import Any

ROOT = Path(__file__).resolve().parents[1]
PY = sys.executable


def run(args: list[str], cwd: Path = ROOT) -> dict[str, Any]:
    proc = subprocess.run(args, cwd=cwd, text=True, capture_output=True)
    return {
        "cmd": args,
        "cwd": str(cwd.relative_to(ROOT)) if cwd != ROOT else ".",
        "returncode": proc.returncode,
        "stdout": proc.stdout,
        "stderr": proc.stderr,
        "ok": proc.returncode == 0,
    }


def check_ascii(paths: list[Path]) -> dict[str, Any]:
    bad: list[str] = []
    for path in paths:
        try:
            text = path.read_text()
        except UnicodeDecodeError:
            continue
        if any(ord(ch) > 127 for ch in text):
            bad.append(str(path.relative_to(ROOT)))
    return {"ok": not bad, "bad_files": bad}


def hdl_balance(paths: list[Path]) -> dict[str, Any]:
    bad: list[str] = []
    for path in paths:
        text = path.read_text()
        stripped = "\n".join(line.split("//", 1)[0] for line in text.splitlines())
        paren = 0
        bracket = 0
        for ch in stripped:
            if ch == "(":
                paren += 1
            elif ch == ")":
                paren -= 1
            elif ch == "[":
                bracket += 1
            elif ch == "]":
                bracket -= 1
            if paren < 0 or bracket < 0:
                bad.append(str(path.relative_to(ROOT)))
                break
        if paren or bracket:
            bad.append(str(path.relative_to(ROOT)))
    return {"ok": not bad, "bad_files": sorted(set(bad))}


def collect_files() -> list[Path]:
    patterns = [
        "rtl/harvos*.sv",
        "rtl/mycore.v",
        "Template.sv",
        "sim/*.sv",
        "tools/*.py",
        "tests/*.py",
        "software/**/*",
        "docs/*.md",
        "*.md",
        "config/*.json",
    ]
    out: list[Path] = []
    for pattern in patterns:
        out.extend(p for p in ROOT.glob(pattern) if p.is_file())
    return sorted(set(out))


def check_quartus_artifacts() -> dict[str, Any]:
    out_dir = ROOT / "output_files"
    rbf = out_dir / "Template.rbf"
    done = out_dir / "Template.done"
    sta = out_dir / "Template.sta.summary"
    flow = out_dir / "Template.flow.rpt"
    required = [rbf, done, sta, flow]
    missing = [str(path.relative_to(ROOT)) for path in required if not path.exists()]
    slack_violations: list[str] = []
    flow_ok = False

    if sta.exists():
        for line in sta.read_text().splitlines():
            stripped = line.strip()
            if stripped.startswith("Slack : -") or stripped.startswith("TNS   : -"):
                slack_violations.append(stripped)

    if flow.exists():
        flow_text = flow.read_text()
        flow_ok = (
            "Full Compilation was successful" in flow_text
            or ("Flow Status" in flow_text and "Successful" in flow_text)
        )

    ok = not missing and rbf.exists() and rbf.stat().st_size > 0 and flow_ok and not slack_violations
    return {
        "ok": ok,
        "missing": missing,
        "rbf_bytes": rbf.stat().st_size if rbf.exists() else 0,
        "flow_success": flow_ok,
        "slack_violations": slack_violations,
    }


def production_report(config: dict[str, Any], key_file: Path | None) -> dict[str, Any]:
    report: dict[str, Any] = {"checks": {}, "blockers": []}
    if key_file:
        key_file = key_file.resolve()
    files = collect_files()
    hdl_files = [p for p in files if p.suffix in {".sv", ".v"}]

    report["checks"]["python_compile"] = run([
        PY,
        "-m",
        "py_compile",
        "tools/harvos_asm.py",
        "tools/harvos_iss.py",
        "tools/harvos_image.py",
        "tools/make_boot_image_rom.py",
        "tools/harvos_prod_check.py",
        "tests/run_all.py",
        "tests/kernel_model_smoke.py",
        "tests/service_model_smoke.py",
    ])
    report["checks"]["reference_tests"] = run([PY, "tests/run_all.py"])
    report["checks"]["riscv_services"] = run([
        "powershell",
        "-NoProfile",
        "-ExecutionPolicy",
        "Bypass",
        "-File",
        "scripts/build_services.ps1",
        "-ToolchainRoot",
        os.environ.get("HARVOS_RISCV_TOOLCHAIN", r"C:\SysGCC\risc-v"),
    ])
    report["checks"]["ascii"] = check_ascii(files)
    report["checks"]["hdl_balance"] = hdl_balance(hdl_files)

    services = Path("software/services/service_manifest.json")
    boot_hex = Path(config["artifacts"]["boot_hex"])
    boot_image = Path(config["artifacts"]["boot_image"])
    boot_image.parent.mkdir(parents=True, exist_ok=True)
    image_cmd = [
        PY,
        "tools/harvos_image.py",
        "--rom",
        str(boot_hex),
        "--services",
        str(services),
        "-o",
        str(boot_image),
        "--production",
    ]
    verify_cmd = [
        PY,
        "tools/harvos_image.py",
        "--rom",
        str(boot_hex),
        "--services",
        str(services),
        "--verify",
        str(boot_image),
        "--production",
    ]
    if key_file:
        image_cmd += ["--key-file", str(key_file)]
        verify_cmd += ["--key-file", str(key_file)]
    report["checks"]["production_image"] = run(image_cmd)
    report["checks"]["production_image_verify"] = run(verify_cmd)

    external = {}
    for tool in config.get("required_external_tools", []):
        external[tool] = shutil.which(tool) is not None
    report["checks"]["external_tools"] = {"ok": all(external.values()), "tools": external}

    gates = config.get("security_gates", {})
    if gates.get("formal_required"):
        if shutil.which("sby"):
            report["checks"]["formal"] = run(["sby", "-f", "harvos_core.sby"], ROOT / "formal")
        else:
            report["checks"]["formal"] = {"ok": False, "error": "sby not found"}
    if gates.get("fpga_timing_required"):
        report["checks"]["quartus_timing"] = check_quartus_artifacts()

    for name, check in report["checks"].items():
        if not check.get("ok", False):
            report["blockers"].append(name)
    report["production_ready"] = not report["blockers"]
    return report


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--config", type=Path, default=ROOT / "config/production.json")
    parser.add_argument("--key-file", type=Path)
    parser.add_argument("--report", type=Path)
    args = parser.parse_args()
    config = json.loads(args.config.read_text())
    report = production_report(config, args.key_file)
    out = args.report or ROOT / config["artifacts"]["production_report"]
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(report, indent=2, sort_keys=True) + "\n")
    print(f"production_ready={int(report['production_ready'])} blockers={','.join(report['blockers'])}")
    raise SystemExit(0 if report["production_ready"] else 1)


if __name__ == "__main__":
    main()
