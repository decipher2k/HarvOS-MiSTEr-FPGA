// Copyright 2025 Dennis Michael Heine

#pragma once

#include <cstddef>
#include <cstdint>
#include <iosfwd>
#include <string>
#include <vector>

class HarvOSNpcapBridge {
public:
    HarvOSNpcapBridge();
    ~HarvOSNpcapBridge();

    HarvOSNpcapBridge(const HarvOSNpcapBridge&) = delete;
    HarvOSNpcapBridge& operator=(const HarvOSNpcapBridge&) = delete;

    bool open(const std::string& selector, std::ostream& log, std::string& error);
    bool send_packet(const uint8_t* data, size_t len, std::string& error);
    bool poll_packet(std::vector<uint8_t>& packet, std::string& error);
    void close();

    bool is_open() const;
    const std::string& device_name() const;
    const std::string& device_description() const;

    static bool list_devices(std::ostream& out, std::string& error);

private:
    struct Impl;
    Impl* impl_;
};
