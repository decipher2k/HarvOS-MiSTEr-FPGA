
#!/usr/bin/env python3
"""
HarvOS patch: compile harvos_pkg_flat.svh exactly once as a SystemVerilog package
and switch all includes to an import. Safe to run multiple times.
"""

from pathlib import Path
import re
import sys

PROJECT_ROOT = Path(__file__).resolve().parents[1]
RTL_HARVOS = PROJECT_ROOT / "rtl" / "harvos"
PKG_SVH = RTL_HARVOS / "harvos_pkg_flat.svh"
PKG_WRAPPER = RTL_HARVOS / "harvos_pkg_flat_pkg.sv"

IMPORT_GUARD = (
    "`ifndef HARVOS_PKG_IMPORTED\n"
    "`define HARVOS_PKG_IMPORTED\n"
    "import harvos_pkg_flat_pkg::*;\n"
    "`endif // HARVOS_PKG_IMPORTED\n"
)

def die(msg: str, code: int = 1):
    print(f"[harvos_patch] ERROR: {msg}")
    sys.exit(code)

def ensure_paths():
    if not RTL_HARVOS.exists():
        die(f"Expected path not found: {RTL_HARVOS}")
    if not PKG_SVH.exists():
        die(f"Missing header: {PKG_SVH}")

def write_pkg_wrapper():
    body = (
        "package harvos_pkg_flat_pkg;\n"
        "  `include \"harvos_pkg_flat.svh\"\n"
        "endpackage : harvos_pkg_flat_pkg\n"
    )
    if PKG_WRAPPER.exists():
        # Only rewrite if content differs
        existing = PKG_WRAPPER.read_text()
        if existing == body:
            print(f"OK: Package wrapper already present -> {PKG_WRAPPER.relative_to(PROJECT_ROOT)}")
            return False
    PKG_WRAPPER.write_text(body)
    print(f"OK: Wrote package wrapper -> {PKG_WRAPPER.relative_to(PROJECT_ROOT)}")
    return True

include_pattern = re.compile(r'^\s*`include\s+[<"](.*/)?harvos_pkg_flat\.svh[>"]\s*$', re.MULTILINE)

def patch_source(path: Path) -> bool:
    """Replace `include "…harvos_pkg_flat.svh"` with guarded import in SystemVerilog sources."""
    try:
        text = path.read_text()
    except Exception as e:
        print(f"SKIP: {path} (read error: {e})")
        return False

    if not include_pattern.search(text):
        return False

    # Avoid double-patching if we've already inserted the guard
    if "HARVOS_PKG_IMPORTED" in text or "import harvos_pkg_flat_pkg::*" in text:
        return False

    new_text = include_pattern.sub(IMPORT_GUARD, text)
    # backup
    bak = path.with_suffix(path.suffix + ".bak")
    try:
        if not bak.exists():
            bak.write_text(text)
        path.write_text(new_text)
        print(f"OK: Patched include -> import in {path.relative_to(PROJECT_ROOT)}")
        return True
    except Exception as e:
        print(f"FAIL: Could not patch {path} ({e})")
        return False

def find_qsf_files():
    return list(PROJECT_ROOT.glob("*.qsf"))

def ensure_qsf_entry(qsf_path: Path) -> bool:
    rel = PKG_WRAPPER.relative_to(PROJECT_ROOT)
    line = f"set_global_assignment -name SYSTEMVERILOG_FILE {rel.as_posix()}\n"
    try:
        content = qsf_path.read_text()
    except Exception as e:
        print(f"SKIP: {qsf_path.name} (read error: {e})")
        return False

    if rel.as_posix() in content:
        print(f"QSF: already contained package entry -> {qsf_path.name}")
        return False

    # Append at end
    with qsf_path.open("a") as f:
        f.write(line)
    print(f"QSF: updated package entry -> {qsf_path.name}")
    return True

def main():
    print("[HarvOS Patch] Starting…")
    ensure_paths()
    write_pkg_wrapper()

    # Patch sources: only .sv and .svh, not plain Verilog .v
    exts = {".sv", ".svh"}
    patched_count = 0
    for p in PROJECT_ROOT.rglob("*"):
        if not p.is_file(): 
            continue
        if p.suffix.lower() in exts:
            # Don't patch the generated wrapper itself
            if p.resolve() == PKG_WRAPPER.resolve():
                continue
            if patch_source(p):
                patched_count += 1
    print(f"[HarvOS Patch] Files patched: {patched_count}")

    # Ensure QSF has the package file
    qsf_files = find_qsf_files()
    if not qsf_files:
        print("WARN: No .qsf files found at project root; add the package file to your file list manually.")
    else:
        for qsf in qsf_files:
            ensure_qsf_entry(qsf)

    print("[HarvOS Patch] Done. Rebuild your project.")

if __name__ == "__main__":
    main()
