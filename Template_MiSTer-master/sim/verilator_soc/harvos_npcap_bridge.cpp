// Copyright 2025 Dennis Michael Heine

#include "harvos_npcap_bridge.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <cstring>
#include <climits>
#include <iostream>
#include <memory>
#include <sstream>

namespace {
constexpr size_t kErrbufSize = 256;

struct pcap;

struct pcap_addr {
    pcap_addr* next;
    void* addr;
    void* netmask;
    void* broadaddr;
    void* dstaddr;
};

struct pcap_if {
    pcap_if* next;
    char* name;
    char* description;
    pcap_addr* addresses;
    unsigned int flags;
};

struct pcap_timeval {
    long tv_sec;
    long tv_usec;
};

struct pcap_pkthdr {
    pcap_timeval ts;
    unsigned int caplen;
    unsigned int len;
};

using pcap_findalldevs_fn = int(__cdecl*)(pcap_if**, char*);
using pcap_freealldevs_fn = void(__cdecl*)(pcap_if*);
using pcap_open_live_fn = pcap*(__cdecl*)(const char*, int, int, int, char*);
using pcap_setnonblock_fn = int(__cdecl*)(pcap*, int, char*);
using pcap_next_ex_fn = int(__cdecl*)(pcap*, pcap_pkthdr**, const unsigned char**);
using pcap_sendpacket_fn = int(__cdecl*)(pcap*, const unsigned char*, int);
using pcap_geterr_fn = char*(__cdecl*)(pcap*);
using pcap_close_fn = void(__cdecl*)(pcap*);

std::string lower(std::string s) {
    for (char& c : s) {
        if (c >= 'A' && c <= 'Z') {
            c = static_cast<char>(c - 'A' + 'a');
        }
    }
    return s;
}

std::string safe_str(const char* s) {
    return s ? std::string(s) : std::string();
}

bool contains_case_insensitive(const std::string& text, const std::string& needle) {
    if (needle.empty()) {
        return true;
    }
    return lower(text).find(lower(needle)) != std::string::npos;
}

}  // namespace

struct HarvOSNpcapBridge::Impl {
    HMODULE dll = nullptr;
    pcap* handle = nullptr;
    std::string opened_name;
    std::string opened_description;

    pcap_findalldevs_fn pcap_findalldevs = nullptr;
    pcap_freealldevs_fn pcap_freealldevs = nullptr;
    pcap_open_live_fn pcap_open_live = nullptr;
    pcap_setnonblock_fn pcap_setnonblock = nullptr;
    pcap_next_ex_fn pcap_next_ex = nullptr;
    pcap_sendpacket_fn pcap_sendpacket = nullptr;
    pcap_geterr_fn pcap_geterr = nullptr;
    pcap_close_fn pcap_close = nullptr;

    ~Impl() {
        close();
        if (dll) {
            FreeLibrary(dll);
        }
    }

    void close() {
        if (handle && pcap_close) {
            pcap_close(handle);
        }
        handle = nullptr;
        opened_name.clear();
        opened_description.clear();
    }

    template <typename Fn>
    bool load_symbol(Fn& fn, const char* name, std::string& error) {
        fn = reinterpret_cast<Fn>(GetProcAddress(dll, name));
        if (!fn) {
            error = std::string("Npcap wpcap.dll is missing symbol ") + name;
            return false;
        }
        return true;
    }

    bool load(std::string& error) {
        if (dll) {
            return true;
        }

        SetDllDirectoryA("C:\\Windows\\System32\\Npcap");
        dll = LoadLibraryA("wpcap.dll");
        if (!dll) {
            dll = LoadLibraryA("C:\\Windows\\System32\\Npcap\\wpcap.dll");
        }
        if (!dll) {
            std::ostringstream oss;
            oss << "could not load Npcap wpcap.dll, GetLastError=" << GetLastError();
            error = oss.str();
            return false;
        }

        return load_symbol(pcap_findalldevs, "pcap_findalldevs", error) &&
               load_symbol(pcap_freealldevs, "pcap_freealldevs", error) &&
               load_symbol(pcap_open_live, "pcap_open_live", error) &&
               load_symbol(pcap_setnonblock, "pcap_setnonblock", error) &&
               load_symbol(pcap_next_ex, "pcap_next_ex", error) &&
               load_symbol(pcap_sendpacket, "pcap_sendpacket", error) &&
               load_symbol(pcap_geterr, "pcap_geterr", error) &&
               load_symbol(pcap_close, "pcap_close", error);
    }

    bool choose_device(const std::string& selector, std::string& name, std::string& description, std::string& error) {
        char errbuf[kErrbufSize] = {};
        pcap_if* alldevs = nullptr;
        if (pcap_findalldevs(&alldevs, errbuf) != 0) {
            error = std::string("pcap_findalldevs failed: ") + errbuf;
            return false;
        }

        std::unique_ptr<pcap_if, pcap_freealldevs_fn> guard(alldevs, pcap_freealldevs);
        pcap_if* fallback = nullptr;
        for (pcap_if* dev = alldevs; dev; dev = dev->next) {
            const std::string dev_name = safe_str(dev->name);
            const std::string dev_desc = safe_str(dev->description);
            const std::string combined = dev_name + " " + dev_desc;
            const bool loopback = contains_case_insensitive(combined, "loopback");
            const bool wan_miniport = contains_case_insensitive(combined, "wan miniport");

            if (!fallback && !loopback && !wan_miniport) {
                fallback = dev;
            }
            if (!selector.empty() && contains_case_insensitive(combined, selector)) {
                name = dev_name;
                description = dev_desc;
                return true;
            }
        }

        if (selector.empty() && fallback) {
            name = safe_str(fallback->name);
            description = safe_str(fallback->description);
            return true;
        }

        error = selector.empty()
            ? "Npcap found no non-loopback capture devices"
            : "Npcap found no device matching selector: " + selector;
        return false;
    }
};

HarvOSNpcapBridge::HarvOSNpcapBridge() : impl_(new Impl()) {}

HarvOSNpcapBridge::~HarvOSNpcapBridge() {
    delete impl_;
}

bool HarvOSNpcapBridge::open(const std::string& selector, std::ostream& log, std::string& error) {
    std::string dev_name;
    std::string dev_desc;
    if (!impl_->load(error)) {
        return false;
    }
    if (!impl_->choose_device(selector, dev_name, dev_desc, error)) {
        return false;
    }

    char errbuf[kErrbufSize] = {};
    impl_->handle = impl_->pcap_open_live(dev_name.c_str(), 65536, 1, 1, errbuf);
    if (!impl_->handle) {
        error = std::string("pcap_open_live failed for ") + dev_name + ": " + errbuf;
        return false;
    }

    if (impl_->pcap_setnonblock(impl_->handle, 1, errbuf) != 0) {
        error = std::string("pcap_setnonblock failed: ") + errbuf;
        close();
        return false;
    }

    impl_->opened_name = dev_name;
    impl_->opened_description = dev_desc;
    log << "HarvOS Npcap bridge opened device=" << dev_name;
    if (!dev_desc.empty()) {
        log << " description=\"" << dev_desc << "\"";
    }
    log << "\n";
    return true;
}

bool HarvOSNpcapBridge::send_packet(const uint8_t* data, size_t len, std::string& error) {
    if (!impl_->handle) {
        error = "Npcap bridge is not open";
        return false;
    }
    if (len > static_cast<size_t>(INT_MAX)) {
        error = "Npcap packet is too large";
        return false;
    }
    if (impl_->pcap_sendpacket(impl_->handle, data, static_cast<int>(len)) != 0) {
        error = std::string("pcap_sendpacket failed: ") + safe_str(impl_->pcap_geterr(impl_->handle));
        return false;
    }
    return true;
}

bool HarvOSNpcapBridge::poll_packet(std::vector<uint8_t>& packet, std::string& error) {
    packet.clear();
    if (!impl_->handle) {
        return false;
    }

    pcap_pkthdr* header = nullptr;
    const unsigned char* data = nullptr;
    const int rc = impl_->pcap_next_ex(impl_->handle, &header, &data);
    if (rc == 0) {
        return false;
    }
    if (rc < 0) {
        error = std::string("pcap_next_ex failed: ") + safe_str(impl_->pcap_geterr(impl_->handle));
        return false;
    }
    if (!header || !data || header->caplen < 14) {
        return false;
    }

    packet.assign(data, data + header->caplen);
    return true;
}

void HarvOSNpcapBridge::close() {
    impl_->close();
}

bool HarvOSNpcapBridge::is_open() const {
    return impl_->handle != nullptr;
}

const std::string& HarvOSNpcapBridge::device_name() const {
    return impl_->opened_name;
}

const std::string& HarvOSNpcapBridge::device_description() const {
    return impl_->opened_description;
}

bool HarvOSNpcapBridge::list_devices(std::ostream& out, std::string& error) {
    Impl impl;
    if (!impl.load(error)) {
        return false;
    }

    char errbuf[kErrbufSize] = {};
    pcap_if* alldevs = nullptr;
    if (impl.pcap_findalldevs(&alldevs, errbuf) != 0) {
        error = std::string("pcap_findalldevs failed: ") + errbuf;
        return false;
    }

    std::unique_ptr<pcap_if, pcap_freealldevs_fn> guard(alldevs, impl.pcap_freealldevs);
    unsigned index = 0;
    for (pcap_if* dev = alldevs; dev; dev = dev->next, ++index) {
        out << "[" << index << "] " << safe_str(dev->name);
        const std::string desc = safe_str(dev->description);
        if (!desc.empty()) {
            out << " | " << desc;
        }
        out << " flags=0x" << std::hex << dev->flags << std::dec << "\n";
    }
    return true;
}
