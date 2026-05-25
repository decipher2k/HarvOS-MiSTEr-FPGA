#!/usr/bin/env python3
# Copyright 2025 Dennis Michael Heine

"""Host-only HarvTTP static-content development shim for the USB image.

This is not the real HarvOS processor, supervisor, or HarvTTP ELF runtime.
It only serves bytes from the FAT32 program USB image through a localhost
listener for quick asset inspection. The real RTL HNET endpoint is tested by
scripts/run_processor_boot_test.ps1.
"""

from __future__ import annotations

import argparse
import json
import mimetypes
import os
import posixpath
import re
import sys
import time
from http import HTTPStatus
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from urllib.parse import unquote, urlsplit

TOOLS = Path(__file__).resolve().parent
if str(TOOLS) not in sys.path:
    sys.path.insert(0, str(TOOLS))

from harvos_usb_image import Fat32Reader  # noqa: E402

HARVOS_SERVER_IP = "10.0.2.15"
HARVOS_NETMASK = "255.255.255.0"
HARVOS_GATEWAY = "10.0.2.2"
HARVOS_DNS = "10.0.2.3"
WEBROOT = "/confg/harvttp/httproot"


def _split_php_concat(expr: str) -> list[str]:
    parts: list[str] = []
    quote = ""
    start = 0
    i = 0
    while i < len(expr):
        c = expr[i]
        if quote:
            if c == "\\":
                i += 2
                continue
            if c == quote:
                quote = ""
        elif c in ("'", '"'):
            quote = c
        elif c == ".":
            parts.append(expr[start:i].strip())
            start = i + 1
        i += 1
    parts.append(expr[start:].strip())
    return parts


def _php_string(token: str) -> str | None:
    if len(token) < 2 or token[0] not in ("'", '"') or token[-1] != token[0]:
        return None
    body = token[1:-1]
    return (
        body.replace("\\n", "\n")
        .replace("\\r", "\r")
        .replace("\\t", "\t")
        .replace("\\'", "'")
        .replace('\\"', '"')
        .replace("\\\\", "\\")
    )


def _php_server_value(key: str, script: str) -> str:
    values = {
        "REQUEST_URI": script,
        "SCRIPT_NAME": script,
        "PHP_SELF": script,
        "SERVER_SOFTWARE": "HarvTTP/0.1",
        "SERVER_PROTOCOL": "HTTP/1.0",
        "DOCUMENT_ROOT": WEBROOT,
        "SERVER_ADDR": HARVOS_SERVER_IP,
        "REMOTE_ADDR": "127.0.0.1",
    }
    if key not in values:
        raise ValueError(f"unsupported PHP server key: {key}")
    return values[key]


def eval_php_expr(expr: str, script: str) -> str:
    out: list[str] = []
    for token in _split_php_concat(expr.strip().rstrip(";")):
        s = _php_string(token)
        if s is not None:
            out.append(s)
            continue
        server = re.fullmatch(r"\$_SERVER\[['\"]([A-Za-z0-9_]+)['\"]\]", token)
        if server:
            out.append(_php_server_value(server.group(1), script))
        elif token == "phpversion()":
            out.append("HarvTTP-PHP/0.1")
        elif token in ("harvttp_ip()", "server_ip()"):
            out.append(HARVOS_SERVER_IP)
        elif token == "remote_addr()":
            out.append("127.0.0.1")
        elif token in ("time()", "harvttp_uptime()"):
            out.append(str(int(time.monotonic())))
        elif token == "__FILE__":
            out.append(script)
        elif token.isdecimal():
            out.append(token)
        else:
            raise ValueError(f"unsupported PHP expression: {token}")
    return "".join(out)


def render_php_template(source: bytes, script: str) -> bytes:
    text = source.decode("utf-8")

    def repl(match: re.Match[str]) -> str:
        short_expr = match.group(1)
        code = match.group(2)
        if short_expr is not None:
            return eval_php_expr(short_expr, script)
        code = code.strip()
        if code.startswith("echo "):
            return eval_php_expr(code[5:].strip(), script)
        if code in ("phpinfo();", "phpinfo()", "harvttp_info();", "harvttp_info()"):
            return (
                "<section><h2>HarvTTP PHP</h2><ul>"
                "<li>version: HarvTTP-PHP/0.1</li>"
                f"<li>script: {script}</li>"
                f"<li>server: {HARVOS_SERVER_IP}</li>"
                "<li>remote: 127.0.0.1</li>"
                "</ul></section>"
            )
        raise ValueError(f"unsupported PHP block: {code}")

    rendered = re.sub(r"<\?=\s*(.*?)(?:\?>|$)|<\?php\s*(.*?)(?:\?>|$)", repl, text, flags=re.S)
    return rendered.encode("utf-8")


def safe_http_path(raw: str) -> str:
    path = unquote(urlsplit(raw).path)
    path = path.replace("\\", "/")
    norm = posixpath.normpath(path)
    if not norm.startswith("/"):
        norm = "/" + norm
    if norm == "/.":
        norm = "/"
    parts = [part for part in norm.split("/") if part]
    if any(part == ".." for part in parts):
        raise ValueError("unsafe path")
    if norm.endswith("/"):
        norm = norm.rstrip("/") + "/"
    if norm == "/":
        return "/index.php"
    if norm.endswith("/"):
        return norm + "index.php"
    return norm


def mime_for(path: str) -> str:
    if path.endswith(".svg"):
        return "image/svg+xml"
    if path.endswith(".js"):
        return "application/javascript; charset=utf-8"
    guessed = mimetypes.guess_type(path)[0]
    if guessed == "text/html":
        return "text/html; charset=utf-8"
    if guessed == "text/css":
        return "text/css; charset=utf-8"
    return guessed or "application/octet-stream"


class HarvOSBridge:
    def __init__(self, image: Path) -> None:
        self.image = image
        self.reader = Fat32Reader(image)

    def read_web_file(self, http_path: str) -> tuple[bytes, str, str]:
        rel = safe_http_path(http_path)
        fs_path = WEBROOT + rel
        data = self.reader.read_file(fs_path)
        if rel.endswith(".php"):
            return render_php_template(data, rel), "text/html; charset=utf-8", fs_path
        return data, mime_for(rel), fs_path

    def status(self, bind: str, port: int) -> dict[str, object]:
        return {
            "app": "harvttp",
            "server_ip": HARVOS_SERVER_IP,
            "netmask": HARVOS_NETMASK,
            "gateway": HARVOS_GATEWAY,
            "dns": HARVOS_DNS,
            "host_bridge": f"http://{bind}:{port}/",
            "program_image": str(self.image),
            "content_root": WEBROOT,
            "transport": "harvos-hnet-test-bridge",
            "pid": os.getpid(),
        }


class Handler(BaseHTTPRequestHandler):
    server_version = "HarvOS-HNET-Bridge/0.1"

    def do_GET(self) -> None:  # noqa: N802
        bridge: HarvOSBridge = self.server.harvos_bridge  # type: ignore[attr-defined]
        bind: str = self.server.harvos_bind  # type: ignore[attr-defined]
        port: int = self.server.server_port

        if urlsplit(self.path).path == "/__harvos/ip":
            body = (json.dumps(bridge.status(bind, port), sort_keys=True) + "\n").encode("utf-8")
            self.send_response(HTTPStatus.OK)
            self.send_header("Content-Type", "application/json; charset=utf-8")
            self.send_header("Content-Length", str(len(body)))
            self.send_header("X-HarvOS-Server-IP", HARVOS_SERVER_IP)
            self.end_headers()
            self.wfile.write(body)
            return

        try:
            body, content_type, fs_path = bridge.read_web_file(self.path)
            self.send_response(HTTPStatus.OK)
            self.send_header("Content-Type", content_type)
            self.send_header("Content-Length", str(len(body)))
            self.send_header("Connection", "close")
            self.send_header("Server", "HarvTTP/0.1 via HNET bridge")
            self.send_header("X-HarvOS-Server-IP", HARVOS_SERVER_IP)
            self.send_header("X-HarvOS-FS-Path", fs_path)
            self.end_headers()
            self.wfile.write(body)
        except (FileNotFoundError, IsADirectoryError, ValueError):
            body = b"HarvTTP: 404\n"
            self.send_response(HTTPStatus.NOT_FOUND)
            self.send_header("Content-Type", "text/plain; charset=utf-8")
            self.send_header("Content-Length", str(len(body)))
            self.send_header("X-HarvOS-Server-IP", HARVOS_SERVER_IP)
            self.end_headers()
            self.wfile.write(body)

    def log_message(self, fmt: str, *args: object) -> None:
        stamp = time.strftime("%Y-%m-%dT%H:%M:%S")
        sys.stderr.write(f"{stamp} {self.address_string()} {fmt % args}\n")


def write_status(path: Path, bridge: HarvOSBridge, bind: str, port: int) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(bridge.status(bind, port), indent=2, sort_keys=True), encoding="utf-8")


def main(argv: list[str]) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--image", type=Path, default=Path("release/program_usb.img"))
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=80)
    parser.add_argument("--status", type=Path)
    args = parser.parse_args(argv)

    bridge = HarvOSBridge(args.image)
    server = ThreadingHTTPServer((args.host, args.port), Handler)
    server.harvos_bridge = bridge  # type: ignore[attr-defined]
    server.harvos_bind = args.host  # type: ignore[attr-defined]
    if args.status:
        write_status(args.status, bridge, args.host, server.server_port)
    print(
        f"HarvOS HarvTTP bridge listening on http://{args.host}:{server.server_port}/ "
        f"server_ip={HARVOS_SERVER_IP}",
        flush=True,
    )
    server.serve_forever()
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
