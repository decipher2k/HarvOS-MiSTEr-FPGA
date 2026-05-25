#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Run the host-only HarvTTP asset shim and verify USB-image HTTP assets."""

from __future__ import annotations

import json
import socket
import subprocess
import sys
import time
import urllib.error
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
PY = sys.executable


def free_port() -> int:
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
        sock.bind(("127.0.0.1", 0))
        return int(sock.getsockname()[1])


def fetch(url: str) -> tuple[int, bytes, dict[str, str]]:
    req = urllib.request.Request(url, headers={"Connection": "close"})
    try:
        with urllib.request.urlopen(req, timeout=3) as resp:
            return resp.status, resp.read(), dict(resp.headers)
    except urllib.error.HTTPError as exc:
        return exc.code, exc.read(), dict(exc.headers)


def main() -> None:
    image = ROOT / "release" / "program_usb.img"
    if not image.exists():
        subprocess.run(
            ["powershell", "-NoProfile", "-ExecutionPolicy", "Bypass", "-File", str(ROOT / "scripts" / "build_usb_images.ps1")],
            cwd=ROOT,
            check=True,
        )

    port = free_port()
    status_path = ROOT / "build" / "harvttp_server_smoke" / "status.json"
    status_path.parent.mkdir(parents=True, exist_ok=True)
    proc = subprocess.Popen(
        [
            PY,
            str(ROOT / "tools" / "harvos_server_bridge.py"),
            "--image",
            str(image),
            "--host",
            "127.0.0.1",
            "--port",
            str(port),
            "--status",
            str(status_path),
        ],
        cwd=ROOT,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
    )
    try:
        base = f"http://127.0.0.1:{port}"
        for _ in range(40):
            if proc.poll() is not None:
                out, err = proc.communicate(timeout=1)
                raise SystemExit(f"HarvTTP bridge exited early\nstdout={out}\nstderr={err}")
            try:
                status, body, headers = fetch(base + "/__harvos/ip")
                if status == 200:
                    info = json.loads(body.decode("utf-8"))
                    assert info["server_ip"] == "10.0.2.15"
                    assert headers["X-HarvOS-Server-IP"] == "10.0.2.15"
                    break
            except Exception:
                time.sleep(0.1)
        else:
            raise SystemExit("HarvTTP bridge did not start")

        checks = {
            "/": b"Hello World",
            "/index.php": b"Hello World",
            "/about.html": b"About HarvTTP",
            "/assets/style.css": b"body",
            "/assets/app.js": b"CSS, JavaScript, images",
            "/assets/harvttp.svg": b"<svg",
            "/info.php": b"Rendered by HarvTTP-PHP/0.1 inside harvttp.elf.",
        }
        for path, needle in checks.items():
            status, body, headers = fetch(base + path)
            assert status == 200
            assert needle in body
            assert b"<?php" not in body
            assert headers["X-HarvOS-Server-IP"] == "10.0.2.15"

        status, body, headers = fetch(base + "/assets/../about.html")
        assert status == 200
        assert b"About HarvTTP" in body
        assert headers["X-HarvOS-Server-IP"] == "10.0.2.15"

        status, body, headers = fetch(base + "/../../config/harvttp.yaml")
        assert status == 404
        assert headers["X-HarvOS-Server-IP"] == "10.0.2.15"

        status, body, headers = fetch(base + "/assets/../info.php")
        assert status == 200
        assert b"$_SERVER" not in body
        assert b"<?php" not in body
        assert headers["X-HarvOS-Server-IP"] == "10.0.2.15"

        print(f"harvttp server smoke passed ip=10.0.2.15 url={base}/")
    finally:
        proc.terminate()
        try:
            proc.wait(timeout=5)
        except subprocess.TimeoutExpired:
            proc.kill()


if __name__ == "__main__":
    main()
