#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Build and inspect small FAT32 USB-stick images for HarvOS."""

from __future__ import annotations

import argparse
import hashlib
import json
import math
import struct
import sys
from dataclasses import dataclass, field
from pathlib import Path

SECTOR_BYTES = 512
FAT32_END = 0x0FFFFFFF
FAT32_BAD = 0x0FFFFFF7
FAT_ATTR_ARCHIVE = 0x20
FAT_ATTR_DIRECTORY = 0x10
FAT_ATTR_LFN = 0x0F


@dataclass
class FsNode:
    name: str
    source: Path | None
    is_dir: bool
    data: bytes = b""
    children: list["FsNode"] = field(default_factory=list)
    short_name: bytes = b""
    clusters: list[int] = field(default_factory=list)

    @property
    def size(self) -> int:
        return 0 if self.is_dir else len(self.data)


def le16(value: int) -> bytes:
    return struct.pack("<H", value)


def le32(value: int) -> bytes:
    return struct.pack("<I", value)


def set_le16(buf: bytearray, off: int, value: int) -> None:
    buf[off : off + 2] = le16(value)


def set_le32(buf: bytearray, off: int, value: int) -> None:
    buf[off : off + 4] = le32(value)


def clean_label(label: str) -> bytes:
    allowed = []
    for ch in label.upper():
        if "A" <= ch <= "Z" or "0" <= ch <= "9" or ch in "_- ":
            allowed.append(ch)
    return "".join(allowed)[:11].ljust(11).encode("ascii")


def short_component(text: str) -> str:
    out = []
    for ch in text.upper():
        if "A" <= ch <= "Z" or "0" <= ch <= "9" or ch in "$%'-_@~`!(){}^#&":
            out.append(ch)
        else:
            out.append("_")
    return "".join(out) or "HARVOS"


def split_name(name: str) -> tuple[str, str]:
    if name.startswith(".") and name.count(".") == 1:
        return name[1:], ""
    if "." in name:
        base, ext = name.rsplit(".", 1)
        return base or "HARVOS", ext
    return name, ""


def make_short_name(name: str, used: set[bytes]) -> bytes:
    base, ext = split_name(name)
    clean_base = short_component(base)
    clean_ext = short_component(ext)[:3]
    for index in range(1, 100000):
        suffix = f"~{index}"
        alias_base = (clean_base[: 8 - len(suffix)] + suffix).ljust(8)
        alias = (alias_base + clean_ext.ljust(3)).encode("ascii")
        if alias not in used:
            used.add(alias)
            return alias
    raise ValueError(f"could not allocate FAT short name for {name!r}")


def lfn_checksum(short_name: bytes) -> int:
    total = 0
    for ch in short_name:
        total = (((total & 1) << 7) + (total >> 1) + ch) & 0xFF
    return total


def utf16_units(name: str) -> list[int]:
    raw = name.encode("utf-16le")
    return [raw[i] | (raw[i + 1] << 8) for i in range(0, len(raw), 2)]


def put_lfn_chars(entry: bytearray, chars: list[int]) -> None:
    positions = [1, 3, 5, 7, 9, 14, 16, 18, 20, 22, 24, 28, 30]
    for pos, ch in zip(positions, chars):
        entry[pos : pos + 2] = le16(ch)


def lfn_entries(name: str, short_name: bytes) -> list[bytes]:
    units = utf16_units(name)
    chunks = max(1, math.ceil((len(units) + 1) / 13))
    checksum = lfn_checksum(short_name)
    entries: list[bytes] = []
    for chunk_index in reversed(range(chunks)):
        entry = bytearray(32)
        order = chunk_index + 1
        if chunk_index == chunks - 1:
            order |= 0x40
        entry[0] = order
        entry[11] = FAT_ATTR_LFN
        entry[13] = checksum
        chars = []
        for i in range(13):
            global_index = chunk_index * 13 + i
            if global_index < len(units):
                chars.append(units[global_index])
            elif global_index == len(units):
                chars.append(0x0000)
            else:
                chars.append(0xFFFF)
        put_lfn_chars(entry, chars)
        entries.append(bytes(entry))
    return entries


def short_dirent(node: FsNode) -> bytes:
    entry = bytearray(32)
    entry[0:11] = node.short_name
    entry[11] = FAT_ATTR_DIRECTORY if node.is_dir else FAT_ATTR_ARCHIVE
    first_cluster = node.clusters[0] if node.clusters else 0
    set_le16(entry, 20, (first_cluster >> 16) & 0xFFFF)
    set_le16(entry, 26, first_cluster & 0xFFFF)
    set_le32(entry, 28, node.size)
    return bytes(entry)


def sorted_children(path: Path) -> list[Path]:
    return sorted(path.iterdir(), key=lambda p: (not p.is_dir(), p.name.lower()))


def load_tree(path: Path, name: str = "") -> FsNode:
    if path.is_dir():
        node = FsNode(name=name, source=path, is_dir=True)
        node.children = [load_tree(child, child.name) for child in sorted_children(path)]
        return node
    return FsNode(name=name, source=path, is_dir=False, data=path.read_bytes())


def assign_short_names(node: FsNode) -> None:
    if not node.is_dir:
        return
    used: set[bytes] = set()
    for child in node.children:
        child.short_name = make_short_name(child.name, used)
    for child in node.children:
        assign_short_names(child)


def directory_entry_count(node: FsNode) -> int:
    return sum(1 + len(lfn_entries(child.name, child.short_name)) for child in node.children)


def stable_fat_layout(total_sectors: int, sectors_per_cluster: int, reserved: int, fats: int) -> tuple[int, int, int]:
    fat_sectors = 1
    while True:
        data_sectors = total_sectors - reserved - fats * fat_sectors
        if data_sectors <= 0:
            raise ValueError("image too small for FAT32 layout")
        cluster_count = data_sectors // sectors_per_cluster
        needed_fat = math.ceil((cluster_count + 2) * 4 / SECTOR_BYTES)
        if needed_fat == fat_sectors:
            return fat_sectors, data_sectors, cluster_count
        fat_sectors = needed_fat


def walk_nodes(root: FsNode) -> list[FsNode]:
    nodes = [root]
    for child in root.children:
        nodes.extend(walk_nodes(child))
    return nodes


def allocate_clusters(root: FsNode, cluster_count: int, sectors_per_cluster: int) -> list[int]:
    cluster_bytes = sectors_per_cluster * SECTOR_BYTES
    next_cluster = 3

    def take(count: int) -> list[int]:
        nonlocal next_cluster
        if count == 0:
            return []
        end = next_cluster + count
        if end > cluster_count + 2:
            raise ValueError("image too small for payload")
        result = list(range(next_cluster, end))
        next_cluster = end
        return result

    for node in walk_nodes(root):
        if node is root:
            entries = directory_entry_count(node)
            needed = max(1, math.ceil(entries * 32 / cluster_bytes))
            node.clusters = [2] + take(needed - 1)
        elif node.is_dir:
            entries = directory_entry_count(node)
            needed = max(1, math.ceil(entries * 32 / cluster_bytes))
            node.clusters = take(needed)
        elif node.size:
            node.clusters = take(math.ceil(node.size / cluster_bytes))
        else:
            node.clusters = []

    fat = [0] * (cluster_count + 2)
    fat[0] = 0x0FFFFFF8
    fat[1] = 0x0FFFFFFF
    for node in walk_nodes(root):
        for i, cluster in enumerate(node.clusters):
            fat[cluster] = node.clusters[i + 1] if i + 1 < len(node.clusters) else FAT32_END
    return fat


def render_directory(node: FsNode, sectors_per_cluster: int) -> bytes:
    cluster_bytes = sectors_per_cluster * SECTOR_BYTES
    data = bytearray(len(node.clusters) * cluster_bytes)
    cursor = 0
    for child in node.children:
        for entry in lfn_entries(child.name, child.short_name):
            data[cursor : cursor + 32] = entry
            cursor += 32
        data[cursor : cursor + 32] = short_dirent(child)
        cursor += 32
    return bytes(data)


def write_cluster_payload(
    image: bytearray,
    node: FsNode,
    data_lba: int,
    sectors_per_cluster: int,
    payload: bytes,
) -> None:
    cluster_bytes = sectors_per_cluster * SECTOR_BYTES
    for i, cluster in enumerate(node.clusters):
        offset = (data_lba + (cluster - 2) * sectors_per_cluster) * SECTOR_BYTES
        chunk = payload[i * cluster_bytes : (i + 1) * cluster_bytes]
        image[offset : offset + len(chunk)] = chunk


def render_boot_sector(total_sectors: int, fat_sectors: int, label: str, sectors_per_cluster: int, reserved: int) -> bytes:
    sec = bytearray(SECTOR_BYTES)
    sec[0:3] = b"\xEB\x58\x90"
    sec[3:11] = b"HARVOS  "
    set_le16(sec, 11, SECTOR_BYTES)
    sec[13] = sectors_per_cluster
    set_le16(sec, 14, reserved)
    sec[16] = 2
    set_le16(sec, 17, 0)
    set_le16(sec, 19, 0)
    sec[21] = 0xF8
    set_le16(sec, 22, 0)
    set_le16(sec, 24, 63)
    set_le16(sec, 26, 255)
    set_le32(sec, 28, 0)
    set_le32(sec, 32, total_sectors)
    set_le32(sec, 36, fat_sectors)
    set_le16(sec, 40, 0)
    set_le16(sec, 42, 0)
    set_le32(sec, 44, 2)
    set_le16(sec, 48, 1)
    set_le16(sec, 50, 6)
    sec[64] = 0x80
    sec[66] = 0x29
    set_le32(sec, 67, 0x48525653)
    sec[71:82] = clean_label(label)
    sec[82:90] = b"FAT32   "
    sec[510:512] = b"\x55\xAA"
    return bytes(sec)


def render_fsinfo(free_clusters: int, next_free: int) -> bytes:
    sec = bytearray(SECTOR_BYTES)
    set_le32(sec, 0, 0x41615252)
    set_le32(sec, 484, 0x61417272)
    set_le32(sec, 488, free_clusters)
    set_le32(sec, 492, next_free)
    set_le32(sec, 508, 0xAA550000)
    return bytes(sec)


def build_image(source: Path, output: Path, label: str, size_mib: int) -> dict[str, object]:
    if not source.is_dir():
        raise SystemExit(f"source directory not found: {source}")
    if size_mib < 8:
        raise SystemExit("FAT32 image size must be at least 8 MiB")

    total_sectors = (size_mib * 1024 * 1024) // SECTOR_BYTES
    sectors_per_cluster = 1
    reserved = 32
    fats = 2
    fat_sectors, _data_sectors, cluster_count = stable_fat_layout(total_sectors, sectors_per_cluster, reserved, fats)
    data_lba = reserved + fats * fat_sectors

    root = load_tree(source)
    assign_short_names(root)
    fat = allocate_clusters(root, cluster_count, sectors_per_cluster)

    image = bytearray(total_sectors * SECTOR_BYTES)
    boot = render_boot_sector(total_sectors, fat_sectors, label, sectors_per_cluster, reserved)
    fsinfo = render_fsinfo(cluster_count - sum(1 for v in fat if v != 0), 3)
    image[0:SECTOR_BYTES] = boot
    image[SECTOR_BYTES : 2 * SECTOR_BYTES] = fsinfo
    image[6 * SECTOR_BYTES : 7 * SECTOR_BYTES] = boot
    image[7 * SECTOR_BYTES : 8 * SECTOR_BYTES] = fsinfo

    fat_bytes = bytearray(fat_sectors * SECTOR_BYTES)
    for index, value in enumerate(fat):
        fat_bytes[index * 4 : index * 4 + 4] = le32(value)
    for fat_index in range(fats):
        start = (reserved + fat_index * fat_sectors) * SECTOR_BYTES
        image[start : start + len(fat_bytes)] = fat_bytes

    for node in walk_nodes(root):
        if node.is_dir:
            payload = render_directory(node, sectors_per_cluster)
        else:
            payload = node.data
        if node.clusters:
            write_cluster_payload(image, node, data_lba, sectors_per_cluster, payload)

    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_bytes(image)
    digest = hashlib.sha256(image).hexdigest()
    files = [n for n in walk_nodes(root) if not n.is_dir]
    dirs = [n for n in walk_nodes(root) if n.is_dir]
    return {
        "image": str(output),
        "source": str(source),
        "bytes": len(image),
        "sha256": digest,
        "fat32": {
            "total_sectors": total_sectors,
            "fat_sectors": fat_sectors,
            "data_lba": data_lba,
            "cluster_count": cluster_count,
        },
        "files": len(files),
        "directories": len(dirs),
    }


class Fat32Reader:
    def __init__(self, path: Path) -> None:
        self.path = path
        self.data = path.read_bytes()
        self.part_lba = 0
        self._mount()

    def sector(self, lba: int) -> bytes:
        off = lba * SECTOR_BYTES
        return self.data[off : off + SECTOR_BYTES]

    @staticmethod
    def _has_sig(sec: bytes) -> bool:
        return len(sec) == SECTOR_BYTES and sec[510] == 0x55 and sec[511] == 0xAA

    @staticmethod
    def _is_fat32(sec: bytes) -> bool:
        return Fat32Reader._has_sig(sec) and sec[82:87] == b"FAT32"

    def _mount_at(self, lba: int, sec: bytes) -> bool:
        if not self._is_fat32(sec):
            return False
        self.part_lba = lba
        self.sectors_per_cluster = sec[13]
        self.fat_lba = struct.unpack_from("<H", sec, 14)[0]
        self.fat_sectors = struct.unpack_from("<I", sec, 36)[0]
        self.root_cluster = struct.unpack_from("<I", sec, 44)[0]
        fats = sec[16]
        self.data_lba = self.fat_lba + fats * self.fat_sectors
        return True

    def _mount(self) -> None:
        sec0 = self.sector(0)
        if self._mount_at(0, sec0):
            return
        if self._has_sig(sec0):
            for index in range(4):
                off = 446 + index * 16
                part_type = sec0[off + 4]
                lba = struct.unpack_from("<I", sec0, off + 8)[0]
                if part_type and lba and self._mount_at(lba, self.sector(lba)):
                    return
        raise SystemExit(f"not a supported FAT32 image: {self.path}")

    def cluster_lba(self, cluster: int) -> int:
        return self.part_lba + self.data_lba + (cluster - 2) * self.sectors_per_cluster

    def next_cluster(self, cluster: int) -> int:
        fat_byte = cluster * 4
        sec = self.sector(self.part_lba + self.fat_lba + fat_byte // SECTOR_BYTES)
        value = struct.unpack_from("<I", sec, fat_byte % SECTOR_BYTES)[0] & 0x0FFFFFFF
        if value >= 0x0FFFFFF8 or value == FAT32_BAD:
            return 0
        return value

    def cluster_chain(self, start: int) -> list[int]:
        chain = []
        cluster = start
        seen = set()
        while cluster and cluster not in seen:
            seen.add(cluster)
            chain.append(cluster)
            cluster = self.next_cluster(cluster)
        return chain

    @staticmethod
    def _lfn_piece(entry: bytes, lfn: list[str]) -> None:
        positions = [1, 3, 5, 7, 9, 14, 16, 18, 20, 22, 24, 28, 30]
        order = entry[0] & 0x1F
        base = (order - 1) * 13
        while len(lfn) < base + 13:
            lfn.append("")
        for i, pos in enumerate(positions):
            ch = struct.unpack_from("<H", entry, pos)[0]
            if ch in (0x0000, 0xFFFF):
                continue
            lfn[base + i] = chr(ch) if ch < 128 else "?"

    @staticmethod
    def _short_name(entry: bytes) -> str:
        base = entry[0:8].decode("ascii", errors="ignore").rstrip()
        ext = entry[8:11].decode("ascii", errors="ignore").rstrip()
        return f"{base}.{ext}" if ext else base

    def read_dir(self, cluster: int) -> list[dict[str, object]]:
        entries: list[dict[str, object]] = []
        lfn: list[str] = []
        for cl in self.cluster_chain(cluster):
            for sec_index in range(self.sectors_per_cluster):
                sec = self.sector(self.cluster_lba(cl) + sec_index)
                for off in range(0, SECTOR_BYTES, 32):
                    entry = sec[off : off + 32]
                    if entry[0] == 0x00:
                        return entries
                    if entry[0] == 0xE5:
                        lfn = []
                        continue
                    attr = entry[11]
                    if attr == FAT_ATTR_LFN:
                        self._lfn_piece(entry, lfn)
                        continue
                    if attr & 0x08:
                        lfn = []
                        continue
                    name = "".join(lfn).rstrip("\x00") if lfn else self._short_name(entry)
                    first = (struct.unpack_from("<H", entry, 20)[0] << 16) | struct.unpack_from("<H", entry, 26)[0]
                    entries.append(
                        {
                            "name": name,
                            "is_dir": bool(attr & FAT_ATTR_DIRECTORY),
                            "cluster": first,
                            "size": struct.unpack_from("<I", entry, 28)[0],
                        }
                    )
                    lfn = []
        return entries

    def stat(self, path: str) -> dict[str, object]:
        path = "/" + path.strip("/")
        if path == "/":
            return {"name": "/", "is_dir": True, "cluster": self.root_cluster, "size": 0}
        cluster = self.root_cluster
        current: dict[str, object] | None = None
        parts = path.strip("/").split("/")
        for index, comp in enumerate(parts):
            found = None
            for entry in self.read_dir(cluster):
                if str(entry["name"]).lower() == comp.lower():
                    found = entry
                    break
            if found is None:
                raise FileNotFoundError(path)
            current = found
            if index + 1 < len(parts):
                if not found["is_dir"]:
                    raise FileNotFoundError(path)
                cluster = int(found["cluster"])
        assert current is not None
        return current

    def read_file(self, path: str) -> bytes:
        st = self.stat(path)
        if st["is_dir"]:
            raise IsADirectoryError(path)
        size = int(st["size"])
        out = bytearray()
        for cluster in self.cluster_chain(int(st["cluster"])):
            for sec_index in range(self.sectors_per_cluster):
                out.extend(self.sector(self.cluster_lba(cluster) + sec_index))
                if len(out) >= size:
                    return bytes(out[:size])
        return bytes(out[:size])


def inspect_image(image: Path, required: list[str]) -> dict[str, object]:
    reader = Fat32Reader(image)
    found = []
    for path in required:
        try:
            st = reader.stat(path)
        except FileNotFoundError as exc:
            raise SystemExit(f"required path missing from {image}: {path}") from exc
        item = {"path": path, "is_dir": st["is_dir"], "size": st["size"]}
        if not st["is_dir"]:
            item["sha256"] = hashlib.sha256(reader.read_file(path)).hexdigest()
        found.append(item)
    return {
        "image": str(image),
        "bytes": len(reader.data),
        "sha256": hashlib.sha256(reader.data).hexdigest(),
        "required": found,
    }


def main(argv: list[str]) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="cmd", required=True)

    build = sub.add_parser("build", help="build a FAT32 image from a directory")
    build.add_argument("source", type=Path)
    build.add_argument("-o", "--output", type=Path, required=True)
    build.add_argument("--label", default="HARVOS")
    build.add_argument("--size-mib", type=int, default=33)
    build.add_argument("--json", action="store_true")

    inspect = sub.add_parser("inspect", help="inspect and validate a FAT32 image")
    inspect.add_argument("image", type=Path)
    inspect.add_argument("--require", action="append", default=[])
    inspect.add_argument("--json", action="store_true")

    args = parser.parse_args(argv)
    if args.cmd == "build":
        result = build_image(args.source, args.output, args.label, args.size_mib)
    else:
        result = inspect_image(args.image, args.require)

    if args.json:
        print(json.dumps(result, indent=2, sort_keys=True))
    elif args.cmd == "build":
        print(f"image={result['image']} bytes={result['bytes']} sha256={result['sha256']}")
    else:
        print(f"image={result['image']} ok=1 sha256={result['sha256']}")
        for item in result["required"]:
            kind = "dir" if item["is_dir"] else "file"
            print(f"  {kind} {item['path']} size={item['size']}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
