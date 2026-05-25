#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Host smoke tests mirroring HarvOS user-space service policies."""

import json
from pathlib import Path

WINDOW = 2048
FRAME_MAX = 1518
QUEUE_LEN = 16


class NetFlow:
    def __init__(self) -> None:
        self.tokens = 1024
        self.refill = 256
        self.limit = 2048
        self.drops = 0

    def send(self, size: int) -> bool:
        if size > self.tokens:
            self.drops += 1
            return False
        self.tokens -= size
        return True

    def tick(self) -> None:
        self.tokens = min(self.limit, self.tokens + self.refill)


class OverlayFile:
    def __init__(self, data: bytes) -> None:
        self.base = bytearray(data)
        self.overlay = {}

    def read(self) -> bytes:
        out = bytearray(self.base)
        for idx, value in self.overlay.items():
            out[idx] = value
        return bytes(out)

    def write(self, off: int, data: bytes) -> None:
        if off + len(data) > len(self.base):
            raise ValueError("out of range")
        for idx, value in enumerate(data):
            self.overlay[off + idx] = value


class DmaWindow:
    def __init__(self, base: int) -> None:
        self.base = base
        self.window = bytearray(WINDOW)
        self.faults = 0

    def copy_in(self, addr: int, data: bytes) -> bool:
        if addr < self.base:
            self.faults += 1
            return False
        off = addr - self.base
        if not data or off >= WINDOW or len(data) > WINDOW - off:
            self.faults += 1
            return False
        self.window[off:off + len(data)] = data
        return True


class PacketQueue:
    def __init__(self) -> None:
        self.items: list[bytes] = []
        self.drops = 0

    def push(self, frame: bytes) -> bool:
        if not frame or len(frame) > FRAME_MAX:
            raise ValueError("bad frame")
        if len(self.items) >= QUEUE_LEN:
            self.drops += 1
            return False
        self.items.append(frame)
        return True

    def pop(self) -> bytes | None:
        if not self.items:
            return None
        return self.items.pop(0)


def main() -> None:
    root = Path(__file__).resolve().parents[1]
    image = json.loads((root / "tests" / "boot_image.json").read_text())
    assert image["format"] == "HarvOS-image-v2"
    assert len(image["signature"]) == 64
    assert image["services"]["policy"]["dma"] == "bounce-buffer-only"

    flow = NetFlow()
    assert flow.send(128)
    assert not flow.send(4096)
    flow.tick()
    assert flow.tokens <= flow.limit
    assert flow.drops == 1

    file = OverlayFile(b"immutable")
    file.write(0, b"overlay")
    assert file.read().startswith(b"overlay")

    dma = DmaWindow(0x100)
    assert dma.copy_in(0x100, b"abcd")
    assert not dma.copy_in(0x0, b"bad")
    assert not dma.copy_in(0x100 + WINDOW - 1, b"xx")
    assert not dma.copy_in(0x100 + WINDOW, b"x")
    assert dma.faults == 3

    q = PacketQueue()
    for idx in range(QUEUE_LEN):
        assert q.push(bytes([idx + 1]) * 64)
    assert not q.push(b"overflow")
    assert q.drops == 1
    assert q.pop() == bytes([1]) * 64
    assert q.push(b"recovered")
    assert len(q.items) == QUEUE_LEN
    print("service model smoke passed")


if __name__ == "__main__":
    main()
