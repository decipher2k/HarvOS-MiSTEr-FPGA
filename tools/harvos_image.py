#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Build and verify HarvOS boot image manifests."""

from __future__ import annotations

import argparse
import hashlib
import hmac
import json
from pathlib import Path
from typing import Any

FORMAT = "HarvOS-image-v2"
DEV_KEY = "harvos-dev-key"
SCHEME = "HMAC-SHA256"


def read_hex_words(path: Path) -> list[int]:
    return [int(line.strip(), 16) for line in path.read_text().splitlines() if line.strip()]


def canonical_json(obj: Any) -> bytes:
    return json.dumps(obj, sort_keys=True, separators=(",", ":")).encode("utf-8")


def digest_words(words: list[int], manifest_bytes: bytes) -> str:
    h = hashlib.sha256()
    for word in words:
        h.update(word.to_bytes(4, "little"))
    h.update(manifest_bytes)
    return h.hexdigest()


def load_key(key: str | None, key_file: Path | None, production: bool) -> bytes:
    if key_file:
        value = key_file.read_text().strip()
    else:
        value = key or DEV_KEY
    if production and value == DEV_KEY:
        raise SystemExit("production mode requires --key-file or a non-default --key")
    return value.encode("utf-8")


def sign_hash(image_hash: str, key_bytes: bytes) -> str:
    return hmac.new(key_bytes, bytes.fromhex(image_hash), hashlib.sha256).hexdigest()


def load_services(path: Path) -> dict[str, Any]:
    services = json.loads(path.read_text())
    policy = services.get("policy", {})
    required = {
        "wx": "deny",
        "user_exec_writable": "deny",
        "mmio_user": "deny",
        "dma": "bounce-buffer-only",
    }
    for name, expected in required.items():
        if policy.get(name) != expected:
            raise SystemExit(f"service policy {name!r} must be {expected!r}")
    return services


def build_image(
    rom_hex: Path,
    services: Path,
    output: Path,
    key: str | None = None,
    key_file: Path | None = None,
    production: bool = False,
) -> dict[str, Any]:
    words = read_hex_words(rom_hex)
    services_obj = load_services(services)
    services_bytes = canonical_json(services_obj)
    image_hash = digest_words(words, services_bytes)
    key_bytes = load_key(key, key_file, production)
    image = {
        "format": FORMAT,
        "signature_scheme": SCHEME,
        "production": bool(production),
        "rom_words": len(words),
        "rom_sha256": digest_words(words, b""),
        "services_sha256": hashlib.sha256(services_bytes).hexdigest(),
        "image_sha256": image_hash,
        "signature": sign_hash(image_hash, key_bytes),
        "services": services_obj,
    }
    output.write_text(json.dumps(image, indent=2, sort_keys=True) + "\n")
    return image


def verify_image(
    image_path: Path,
    rom_hex: Path,
    services: Path,
    key: str | None = None,
    key_file: Path | None = None,
    production: bool = False,
) -> bool:
    image = json.loads(image_path.read_text())
    if image.get("format") not in {FORMAT, "HarvOS-prototype-image-v1"}:
        raise SystemExit(f"unsupported image format: {image.get('format')}")
    words = read_hex_words(rom_hex)
    services_obj = load_services(services)
    services_bytes = canonical_json(services_obj)
    expected_hash = digest_words(words, services_bytes)
    expected_rom = digest_words(words, b"")
    expected_services = hashlib.sha256(services_bytes).hexdigest()
    key_bytes = load_key(key, key_file, production)
    expected_sig = sign_hash(expected_hash, key_bytes)
    checks = [
        image.get("rom_words") == len(words),
        image.get("rom_sha256") == expected_rom,
        image.get("services_sha256") == expected_services,
        image.get("image_sha256") == expected_hash,
        hmac.compare_digest(str(image.get("signature")), expected_sig),
    ]
    if production:
        checks.append(image.get("production") is True)
        checks.append(image.get("signature_scheme") == SCHEME)
    return all(checks)


def parser() -> argparse.ArgumentParser:
    p = argparse.ArgumentParser()
    p.add_argument("--rom", required=True, type=Path)
    p.add_argument("--services", required=True, type=Path)
    p.add_argument("-o", "--output", type=Path)
    p.add_argument("--verify", type=Path)
    p.add_argument("--key", default=None)
    p.add_argument("--key-file", type=Path)
    p.add_argument("--production", action="store_true")
    return p


def main() -> None:
    args = parser().parse_args()
    if args.verify:
        ok = verify_image(args.verify, args.rom, args.services, args.key, args.key_file, args.production)
        print(f"verify={args.verify} ok={int(ok)}")
        raise SystemExit(0 if ok else 1)
    if not args.output:
        raise SystemExit("--output is required unless --verify is used")
    image = build_image(args.rom, args.services, args.output, args.key, args.key_file, args.production)
    print(f"image={args.output} words={image['rom_words']} sha256={image['image_sha256']}")


if __name__ == "__main__":
    main()
