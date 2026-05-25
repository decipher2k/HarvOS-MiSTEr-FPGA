#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Build an external HarvOS RGB565 boot payload from a PNG."""

from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path

from PIL import Image


def rgb565(r: int, g: int, b: int) -> int:
    return ((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3)


def converted_pixels(path: Path, width: int, height: int) -> list[int]:
    image = Image.open(path).convert("RGB")
    image = image.resize((width, height), Image.Resampling.LANCZOS)
    data = image.get_flattened_data() if hasattr(image, "get_flattened_data") else image.getdata()
    return [rgb565(r, g, b) for r, g, b in data]


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("input", type=Path)
    parser.add_argument("-o", "--output", type=Path, required=True)
    parser.add_argument("--width", type=int, default=432)
    parser.add_argument("--height", type=int, default=240)
    parser.add_argument("--format", choices=["hbr", "mem"], default="hbr")
    parser.add_argument("--metadata", type=Path)
    args = parser.parse_args()

    pixels = converted_pixels(args.input, args.width, args.height)
    payload = b"".join(pixel.to_bytes(2, "little") for pixel in pixels)

    args.output.parent.mkdir(parents=True, exist_ok=True)
    if args.format == "mem":
        with args.output.open("w", encoding="ascii", newline="\n") as rom:
            for pixel in pixels:
                rom.write(f"{pixel:04x}\n")
    else:
        args.output.write_bytes(payload)

    digest = hashlib.sha256(payload).hexdigest()
    if args.metadata:
        args.metadata.parent.mkdir(parents=True, exist_ok=True)
        args.metadata.write_text(
            json.dumps(
                {
                    "format": "HarvOS-demo-bootrom-v1",
                    "pixel_format": "rgb565-le",
                    "width": args.width,
                    "height": args.height,
                    "pixels": len(pixels),
                    "payload_bytes": len(payload),
                    "payload_sha256": digest,
                    "source": str(args.input),
                },
                indent=2,
                sort_keys=True,
            )
            + "\n",
            encoding="ascii",
        )

    print(f"wrote {args.output} format={args.format} pixels={len(pixels)} sha256={digest}")


if __name__ == "__main__":
    main()
