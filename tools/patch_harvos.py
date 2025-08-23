#!/usr/bin/env python3
import sys, os, re, shutil, io

LOG_PREFIX = "[HarvOS Patchset]"

def safe_read(path):
    try:
        with open(path, "r", encoding="utf-8", errors="ignore") as f:
            return f.read()
    except FileNotFoundError:
        print(f"{LOG_PREFIX} Skip (missing): {path}")
        return None

def safe_write(path, content):
    d = os.path.dirname(path)
    os.makedirs(d, exist_ok=True)
    with open(path, "w", encoding="utf-8", errors="ignore") as f:
        f.write(content)

def backup(path):
    if not os.path.exists(path):
        return
    bak = path + ".bak"
    if not os.path.exists(bak):
        shutil.copy2(path, bak)
        print(f"{LOG_PREFIX} Backup: {bak}")

def force_guard_harvos_pkg_flat(proj_root):
    target = os.path.join(proj_root, "rtl", "harvos", "harvos_pkg_flat.svh")
    txt = safe_read(target)
    if txt is None:
        return
    if "HARVOS_PKG_FLAT_SVH" in txt and "`ifndef" in txt and "`endif" in txt:
        print(f"{LOG_PREFIX} Guard already present in harvos_pkg_flat.svh")
        return
    backup(target)
    guarded = "`ifndef HARVOS_PKG_FLAT_SVH\n`define HARVOS_PKG_FLAT_SVH\n" + txt + "\n`endif // HARVOS_PKG_FLAT_SVH\n"
    safe_write(target, guarded)
    print(f"{LOG_PREFIX} Added force-guard to harvos_pkg_flat.svh")

def dedup_includes(proj_root, header_basename="harvos_pkg_flat.svh"):
    # Deduplicate duplicate includes within the same file
    # Applies to .sv, .svh, .v under rtl/harvos and rtl (shallow + recursive)
    roots = [os.path.join(proj_root, "rtl")]
    pattern = re.compile(r'^\s*`include\s+"([^"]+)"', re.M)
    for base in roots:
        for dirpath, _, filenames in os.walk(base):
            for fn in filenames:
                if not any(fn.endswith(ext) for ext in (".sv", ".svh", ".v")):
                    continue
                path = os.path.join(dirpath, fn)
                txt = safe_read(path)
                if txt is None:
                    continue
                includes = pattern.findall(txt)
                # Normalize basenames for comparison
                idxs = []
                lines = txt.splitlines()
                seen = False
                changed = False
                for i,line in enumerate(lines):
                    m = re.match(r'(\s*)`include\s+"([^"]+)"', line)
                    if not m: 
                        continue
                    inc = m.group(2)
                    base_inc = os.path.basename(inc)
                    if base_inc.lower() == header_basename.lower():
                        if not seen:
                            seen = True
                        else:
                            # Comment out duplicates
                            indent = m.group(1)
                            lines[i] = indent + "// " + line + "   // " + LOG_PREFIX + " duplicate include removed"
                            changed = True
                if changed:
                    backup(path)
                    safe_write(path, "\n".join(lines))
                    print(f"{LOG_PREFIX} Deduped includes in: {os.path.relpath(path, proj_root)}")

def comment_stray_dcache_params_includes(proj_root):
    # Comment out lines that include dcache_params_pkg.sv directly (prevents double compilation)
    roots = [os.path.join(proj_root, "rtl")]
    pattern = re.compile(r'^(\s*)`include\s+"[^"]*dcache_params_pkg\.sv"', re.M|re.I)
    for base in roots:
        for dirpath, _, filenames in os.walk(base):
            for fn in filenames:
                if not any(fn.endswith(ext) for ext in (".sv", ".svh", ".v")):
                    continue
                path = os.path.join(dirpath, fn)
                txt = safe_read(path)
                if txt is None:
                    continue
                new_txt, n = pattern.subn(r'\1// `include "dcache_params_pkg.sv"   // ' + LOG_PREFIX + r' disabled (compiled once)', txt)
                if n > 0:
                    backup(path)
                    safe_write(path, new_txt)
                    print(f"{LOG_PREFIX} Disabled dcache_params_pkg include in: {os.path.relpath(path, proj_root)}")

def fix_dcache_inv_all(proj_root):
    # Ensure 'inv_all' is not declared twice in module port list
    path = os.path.join(proj_root, "rtl", "harvos", "dcache.sv")
    txt = safe_read(path)
    if txt is None:
        return
    # Simple heuristic: within the first module header, keep first 'inv_all' port and comment subsequent duplicates
    lines = txt.splitlines()
    in_ports = False
    seen_inv = 0
    changed = False
    for i, line in enumerate(lines):
        if re.search(r'^\s*module\s+dcache\s*\(', line):
            in_ports = True
        if in_ports and re.search(r'\);\s*$', line):
            in_ports = False
        if in_ports and re.search(r'\b(inv_all)\b', line):
            if seen_inv >= 1 and re.search(r'input|output|inout', line):
                lines[i] = "// " + line + "   // " + LOG_PREFIX + " duplicate port removed"
                changed = True
            seen_inv += 1
    if changed:
        backup(path)
        safe_write(path, "\n".join(lines))
        print(f"{LOG_PREFIX} Deduped inv_all port in dcache.sv")

def fix_mmu_sv32_asserts_and_labels(proj_root):
    # Convert bare 'assert (...)' to 'assert property (...)' and uniquify duplicate : gi labels in generate blocks
    path = os.path.join(proj_root, "rtl", "harvos", "mmu_sv32.sv")
    txt = safe_read(path)
    if txt is None:
        return
    orig = txt
    # Replace "assert (<expr>);" with "assert property (<expr>);"
    # Avoid touching "assert property" or "assert final"
    txt = re.sub(r'(?m)^(?P<i>\s*)assert\s*\((?P<e>[^;]+)\)\s*;', r'\g<i>assert property (\g<e>);', txt)
    # Uniquify duplicate "begin : gi" labels by suffixing incremental numbers (gi_2, gi_3, ...)
    lines = txt.splitlines()
    label_counts = {}
    for i, line in enumerate(lines):
        m = re.search(r'begin\s*:\s*(\w+)', line)
        if not m: 
            continue
        name = m.group(1)
        if name not in label_counts:
            label_counts[name] = 1
        else:
            label_counts[name] += 1
            new = f"{name}_{label_counts[name]}"
            lines[i] = re.sub(r'begin\s*:\s*\w+', f'begin : {new}', line)
    txt = "\n".join(lines)
    if txt != orig:
        backup(path)
        safe_write(path, txt)
        print(f"{LOG_PREFIX} Normalized asserts and generate labels in mmu_sv32.sv")

def main():
    if len(sys.argv) < 2:
        print("Usage: patch_harvos.py <PROJECT_ROOT>")
        sys.exit(1)
    proj_root = os.path.abspath(sys.argv[1])
    print(f"{LOG_PREFIX} Project root: {proj_root}")
    # Core fixes
    force_guard_harvos_pkg_flat(proj_root)
    dedup_includes(proj_root, header_basename="harvos_pkg_flat.svh")
    # Idempotent extras
    comment_stray_dcache_params_includes(proj_root)
    fix_dcache_inv_all(proj_root)
    fix_mmu_sv32_asserts_and_labels(proj_root)
    print(f"{LOG_PREFIX} All patches applied.")

if __name__ == "__main__":
    main()
