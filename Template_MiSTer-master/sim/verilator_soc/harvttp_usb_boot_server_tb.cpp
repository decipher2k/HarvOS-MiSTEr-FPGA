// Copyright 2025 Dennis Michael Heine

#include "Vharvos_soc.h"
#include "Vharvos_soc___024root.h"
#include "harvos_npcap_bridge.h"
#include "verilated.h"

#include <array>
#include <chrono>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <initializer_list>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <thread>
#include <vector>

namespace {
vluint64_t g_time = 0;
constexpr uint32_t kDramBase = 0x00000400U;
constexpr uint32_t kEcall = 0x00000073U;
constexpr uint32_t kAuditDhcpCode = 0x48545450U;
constexpr uint32_t kNpcapPollIntervalMask = 0xFFU;
constexpr uint32_t kNpcapPollAcceptedBudget = 4U;
constexpr uint32_t kNpcapPollAttempts = 8U;
constexpr std::array<uint8_t, 6> kHarvttpMac = {0x02, 0x48, 0x54, 0x54, 0x50, 0x01};
constexpr std::array<uint8_t, 6> kDhcpMac = {0x02, 0x48, 0x44, 0x43, 0x50, 0x01};
constexpr std::array<uint8_t, 4> kDhcpServerIp = {192, 168, 8, 1};
constexpr std::array<uint8_t, 4> kDhcpDnsIp = {192, 168, 8, 1};
constexpr std::array<uint8_t, 4> kDhcpLeaseIp = {192, 168, 8, 231};
constexpr std::array<uint8_t, 4> kDhcpMask = {255, 255, 255, 0};

struct HpsImages {
    std::array<std::vector<uint8_t>, 2> drive;

    uint8_t mounted_mask() const {
        uint8_t mask = 0;
        if (!drive[0].empty()) mask |= 1U;
        if (!drive[1].empty()) mask |= 2U;
        return mask;
    }

    uint64_t visible_size() const {
        if (!drive[0].empty()) return drive[0].size();
        if (!drive[1].empty()) return drive[1].size();
        return 0;
    }
};

struct Status {
    uint32_t lease_ip = 0;
    uint64_t tx_frames = 0;
    uint64_t rx_frames = 0;
    uint64_t cycles = 0;
    uint32_t audit_code = 0;
    uint32_t audit_value = 0;
    uint64_t audit_count = 0;
    uint32_t last_dhcp_tx_type = 0;
    uint64_t virtual_offers = 0;
    uint64_t virtual_acks = 0;
    uint32_t last_tx_len = 0;
    uint32_t last_tx_w0 = 0;
    uint32_t last_tx_w1 = 0;
    uint32_t last_tx_w2 = 0;
    uint32_t last_tx_w3 = 0;
    uint32_t last_tx_ethertype = 0;
    uint32_t last_tx_ip_proto = 0;
    uint32_t last_tx_udp_src = 0;
    uint32_t last_tx_udp_dst = 0;
    uint64_t harness_rx_words = 0;
    uint32_t last_rx_len = 0;
    uint32_t last_rx_tcp_src = 0;
    uint32_t last_rx_tcp_flags = 0;
    uint32_t last_rx_tcp_seq = 0;
    uint32_t last_rx_tcp_ack = 0;
    uint32_t last_rx_tcp_payload_len = 0;
    uint32_t last_tx_tcp_dst = 0;
    uint32_t last_tx_tcp_flags = 0;
    uint32_t last_tx_tcp_seq = 0;
    uint32_t last_tx_tcp_ack = 0;
    uint32_t last_tx_tcp_payload_len = 0;
};

std::string ip_string(uint32_t be_ip) {
    std::ostringstream out;
    out << ((be_ip >> 24) & 0xFF) << "."
        << ((be_ip >> 16) & 0xFF) << "."
        << ((be_ip >> 8) & 0xFF) << "."
        << (be_ip & 0xFF);
    return out.str();
}

std::string hex32(uint32_t value) {
    std::ostringstream out;
    out << "0x" << std::hex << std::setw(8) << std::setfill('0') << value;
    return out.str();
}

uint32_t dram_word(const Vharvos_soc& top, uint32_t addr) {
    if (addr < kDramBase) return 0;
    const uint32_t index = (addr - kDramBase) >> 2;
    if (index >= 420000U) return 0;
    return top.rootp->harvos_soc__DOT__dmem[index];
}

std::vector<uint8_t> read_file(const std::filesystem::path& path) {
    std::ifstream in(path, std::ios::binary);
    if (!in) throw std::runtime_error("could not open " + path.string());
    in.seekg(0, std::ios::end);
    const auto size = in.tellg();
    in.seekg(0, std::ios::beg);
    std::vector<uint8_t> bytes(static_cast<size_t>(size));
    if (!bytes.empty()) in.read(reinterpret_cast<char*>(bytes.data()), size);
    return bytes;
}

uint16_t image_word(const std::vector<uint8_t>& image, uint64_t byte_offset) {
    if (byte_offset + 1 >= image.size()) return 0;
    return static_cast<uint16_t>(image[byte_offset]) |
           static_cast<uint16_t>(image[byte_offset + 1]) << 8;
}

void tick(Vharvos_soc& top) {
    top.clk = 0;
    top.eval();
    ++g_time;
    top.clk = 1;
    top.eval();
    ++g_time;
}

void drive_idle_platform(Vharvos_soc& top, const HpsImages& hps) {
    top.usb_dp_i = 0;
    top.usb_dm_i = 0;
    top.usb_port_overcurrent_n = 1;
    top.utmi_data_i = 0;
    top.utmi_tx_ready = 1;
    top.utmi_rx_valid = 0;
    top.utmi_rx_active = 0;
    top.utmi_rx_error = 0;
    top.utmi_line_state = 0;
    top.hps_img_mounted = hps.mounted_mask();
    top.hps_img_readonly = 0;
    top.hps_img_size = hps.visible_size();
    top.hps_sd_ack = 0;
    top.hps_sd_buff_addr = 0;
    top.hps_sd_buff_dout = 0;
    top.hps_sd_buff_wr = 0;
}

uint64_t service_hps_read_if_requested(Vharvos_soc& top, const HpsImages& hps) {
    const uint8_t req = static_cast<uint8_t>(top.hps_sd_rd & hps.mounted_mask());
    if (req == 0) return 0;
    const int drive = (req & 1U) ? 0 : 1;
    const uint32_t lba = top.hps_sd_lba[drive];
    const uint32_t blocks = static_cast<uint32_t>(top.hps_sd_blk_cnt[drive]) + 1U;
    const uint32_t words = blocks * 256U;
    uint64_t service_cycles = 0;
    for (uint32_t i = 0; i < words; ++i) {
        const uint64_t byte_offset = (static_cast<uint64_t>(lba) * 512U) + (static_cast<uint64_t>(i) * 2U);
        top.hps_sd_buff_addr = i & 0x1FFFU;
        top.hps_sd_buff_dout = image_word(hps.drive[drive], byte_offset);
        top.hps_sd_buff_wr = 1;
        tick(top);
        ++service_cycles;
    }
    top.hps_sd_buff_wr = 0;
    top.hps_sd_ack = static_cast<uint8_t>(1U << drive);
    tick(top);
    ++service_cycles;
    top.hps_sd_ack = 0;
    tick(top);
    ++service_cycles;
    return service_cycles;
}

bool packet_for_harvttp(const std::vector<uint8_t>& packet) {
    if (packet.size() < 14) return false;
    auto u16 = [&packet](size_t off) -> uint16_t {
        return static_cast<uint16_t>((static_cast<uint16_t>(packet[off]) << 8U) | packet[off + 1U]);
    };
    const bool broadcast = std::memcmp(packet.data(), "\xff\xff\xff\xff\xff\xff", 6) == 0;
    const bool mine = std::memcmp(packet.data(), kHarvttpMac.data(), 6) == 0;
    const bool from_me = std::memcmp(packet.data() + 6, kHarvttpMac.data(), 6) == 0;
    const uint16_t ethertype = u16(12U);
    if (from_me) return false;
    if (broadcast && packet.size() >= 42U && ethertype == 0x0806U) {
        const uint16_t arp_op = u16(20U);
        return arp_op == 1U &&
               std::memcmp(packet.data() + 38U, kDhcpLeaseIp.data(), kDhcpLeaseIp.size()) == 0;
    }
    if (!mine || ethertype != 0x0800U || packet.size() < 54U) return false;
    const size_t ihl = static_cast<size_t>(packet[14] & 0x0FU) * 4U;
    if (ihl < 20U || packet.size() < 14U + ihl + 20U || packet[23] != 6U) return false;
    if (std::memcmp(packet.data() + 30U, kDhcpLeaseIp.data(), kDhcpLeaseIp.size()) != 0) return false;
    const size_t tcp = 14U + ihl;
    if (u16(tcp + 2U) != 80U) return false;
    const size_t tcp_hlen = static_cast<size_t>(packet[tcp + 12U] >> 4U) * 4U;
    if (tcp_hlen < 20U) return false;
    const uint16_t total = u16(16U);
    if (total < ihl + tcp_hlen) return false;
    const size_t payload_len = static_cast<size_t>(total) - ihl - tcp_hlen;
    const uint8_t flags = packet[tcp + 13U];
    return (flags & 0x02U) != 0U || payload_len != 0U;
}

uint16_t get16be(const std::vector<uint8_t>& bytes, size_t off) {
    return static_cast<uint16_t>((static_cast<uint16_t>(bytes[off]) << 8U) | bytes[off + 1U]);
}

uint32_t get32be(const std::vector<uint8_t>& bytes, size_t off) {
    return (static_cast<uint32_t>(bytes[off]) << 24U) |
           (static_cast<uint32_t>(bytes[off + 1U]) << 16U) |
           (static_cast<uint32_t>(bytes[off + 2U]) << 8U) |
           static_cast<uint32_t>(bytes[off + 3U]);
}

void put16be(std::vector<uint8_t>& bytes, uint16_t value) {
    bytes.push_back(static_cast<uint8_t>(value >> 8U));
    bytes.push_back(static_cast<uint8_t>(value));
}

void put32be(std::vector<uint8_t>& bytes, uint32_t value) {
    bytes.push_back(static_cast<uint8_t>(value >> 24U));
    bytes.push_back(static_cast<uint8_t>(value >> 16U));
    bytes.push_back(static_cast<uint8_t>(value >> 8U));
    bytes.push_back(static_cast<uint8_t>(value));
}

void set16be(std::vector<uint8_t>& bytes, size_t off, uint16_t value) {
    bytes[off] = static_cast<uint8_t>(value >> 8U);
    bytes[off + 1U] = static_cast<uint8_t>(value);
}

void append_bytes(std::vector<uint8_t>& out, const uint8_t* data, size_t len) {
    out.insert(out.end(), data, data + len);
}

void append_ip(std::vector<uint8_t>& out, const std::array<uint8_t, 4>& ip) {
    append_bytes(out, ip.data(), ip.size());
}

uint16_t ip_checksum(const std::vector<uint8_t>& bytes, size_t off, size_t len) {
    uint32_t sum = 0;
    for (size_t i = 0; i + 1 < len; i += 2) {
        sum += get16be(bytes, off + i);
    }
    if (len & 1U) sum += static_cast<uint32_t>(bytes[off + len - 1U]) << 8U;
    while (sum >> 16U) sum = (sum & 0xFFFFU) + (sum >> 16U);
    return static_cast<uint16_t>(~sum);
}

uint16_t tcp_ipv4_checksum(const std::vector<uint8_t>& bytes, size_t ip_off, size_t tcp_off, size_t tcp_len) {
    uint32_t sum = 0;
    for (size_t i = 12U; i < 20U; i += 2U) {
        sum += get16be(bytes, ip_off + i);
    }
    sum += 6U;
    sum += static_cast<uint32_t>(tcp_len);
    for (size_t i = 0; i + 1U < tcp_len; i += 2U) {
        sum += get16be(bytes, tcp_off + i);
    }
    if (tcp_len & 1U) sum += static_cast<uint32_t>(bytes[tcp_off + tcp_len - 1U]) << 8U;
    while (sum >> 16U) sum = (sum & 0xFFFFU) + (sum >> 16U);
    return static_cast<uint16_t>(~sum);
}

void normalize_ipv4_tcp_checksums(std::vector<uint8_t>& packet) {
    if (packet.size() < 54U || get16be(packet, 12U) != 0x0800U || packet[23] != 6U) return;
    const size_t ip = 14U;
    const size_t ihl = static_cast<size_t>(packet[ip] & 0x0FU) * 4U;
    if (ihl < 20U || packet.size() < ip + ihl + 20U) return;
    const uint16_t total = get16be(packet, ip + 2U);
    if (total < ihl + 20U || packet.size() < ip + total) return;
    const size_t tcp = ip + ihl;
    const size_t tcp_len = static_cast<size_t>(total) - ihl;
    set16be(packet, ip + 10U, 0U);
    set16be(packet, ip + 10U, ip_checksum(packet, ip, ihl));
    set16be(packet, tcp + 16U, 0U);
    set16be(packet, tcp + 16U, tcp_ipv4_checksum(packet, ip, tcp, tcp_len));
}

uint8_t dhcp_message_type(const std::vector<uint8_t>& frame) {
    if (frame.size() < 14U + 20U + 8U + 240U) return 0;
    if (get16be(frame, 12U) != 0x0800U || frame[23] != 17U) return 0;
    const size_t ihl = static_cast<size_t>(frame[14] & 0x0FU) * 4U;
    if (ihl < 20U || frame.size() < 14U + ihl + 8U + 240U) return 0;
    const size_t udp = 14U + ihl;
    if (get16be(frame, udp) != 68U || get16be(frame, udp + 2U) != 67U) return 0;
    const size_t bootp = udp + 8U;
    if (frame[bootp + 236U] != 99U || frame[bootp + 237U] != 130U ||
        frame[bootp + 238U] != 83U || frame[bootp + 239U] != 99U) {
        return 0;
    }
    size_t opt = bootp + 240U;
    while (opt + 1U < frame.size()) {
        const uint8_t code = frame[opt++];
        if (code == 0U) continue;
        if (code == 255U) break;
        if (opt >= frame.size()) break;
        const uint8_t opt_len = frame[opt++];
        if (opt + opt_len > frame.size()) break;
        if (code == 53U && opt_len == 1U) return frame[opt];
        opt += opt_len;
    }
    return 0;
}

std::vector<uint8_t> build_dhcp_response(const std::vector<uint8_t>& request, uint8_t msg_type) {
    const size_t req_ihl = static_cast<size_t>(request[14] & 0x0FU) * 4U;
    const size_t req_bootp = 14U + req_ihl + 8U;
    const uint32_t xid = get32be(request, req_bootp + 4U);
    const uint16_t flags = get16be(request, req_bootp + 10U);

    std::vector<uint8_t> bootp(240U, 0U);
    bootp[0] = 2U;
    bootp[1] = 1U;
    bootp[2] = 6U;
    bootp[3] = 0U;
    bootp[4] = static_cast<uint8_t>(xid >> 24U);
    bootp[5] = static_cast<uint8_t>(xid >> 16U);
    bootp[6] = static_cast<uint8_t>(xid >> 8U);
    bootp[7] = static_cast<uint8_t>(xid);
    bootp[10] = static_cast<uint8_t>(flags >> 8U);
    bootp[11] = static_cast<uint8_t>(flags);
    std::memcpy(bootp.data() + 16U, kDhcpLeaseIp.data(), 4U);
    std::memcpy(bootp.data() + 20U, kDhcpServerIp.data(), 4U);
    std::memcpy(bootp.data() + 28U, kHarvttpMac.data(), 6U);
    bootp[236] = 99U;
    bootp[237] = 130U;
    bootp[238] = 83U;
    bootp[239] = 99U;

    auto opt = [&bootp](uint8_t code, const std::initializer_list<uint8_t>& data) {
        bootp.push_back(code);
        bootp.push_back(static_cast<uint8_t>(data.size()));
        bootp.insert(bootp.end(), data.begin(), data.end());
    };
    opt(53U, {msg_type});
    opt(54U, {kDhcpServerIp[0], kDhcpServerIp[1], kDhcpServerIp[2], kDhcpServerIp[3]});
    opt(1U, {kDhcpMask[0], kDhcpMask[1], kDhcpMask[2], kDhcpMask[3]});
    opt(3U, {kDhcpServerIp[0], kDhcpServerIp[1], kDhcpServerIp[2], kDhcpServerIp[3]});
    opt(6U, {kDhcpDnsIp[0], kDhcpDnsIp[1], kDhcpDnsIp[2], kDhcpDnsIp[3]});
    opt(51U, {0U, 0U, 14U, 16U});
    bootp.push_back(255U);

    const uint16_t udp_len = static_cast<uint16_t>(8U + bootp.size());
    const uint16_t ip_len = static_cast<uint16_t>(20U + udp_len);
    std::vector<uint8_t> frame;
    append_bytes(frame, kHarvttpMac.data(), kHarvttpMac.size());
    append_bytes(frame, kDhcpMac.data(), kDhcpMac.size());
    put16be(frame, 0x0800U);
    frame.push_back(0x45U);
    frame.push_back(0x00U);
    put16be(frame, ip_len);
    put16be(frame, 0x1234U);
    put16be(frame, 0x4000U);
    frame.push_back(64U);
    frame.push_back(17U);
    put16be(frame, 0U);
    append_ip(frame, kDhcpServerIp);
    frame.push_back(255U);
    frame.push_back(255U);
    frame.push_back(255U);
    frame.push_back(255U);
    const uint16_t csum = ip_checksum(frame, 14U, 20U);
    frame[24] = static_cast<uint8_t>(csum >> 8U);
    frame[25] = static_cast<uint8_t>(csum);
    put16be(frame, 67U);
    put16be(frame, 68U);
    put16be(frame, udp_len);
    put16be(frame, 0U);
    append_bytes(frame, bootp.data(), bootp.size());
    return frame;
}

struct HnetEndpoint {
    struct RxBeat {
        uint32_t word = 0;
        bool last = false;
    };

    HarvOSNpcapBridge pcap;
    std::deque<RxBeat> rx_words;
    std::vector<uint32_t> tx_words;
    Status status;
    uint32_t poll_divider = 0;
    bool error_reported = false;

    void open(const std::string& selector) {
        std::string error;
        if (!pcap.open(selector, std::cout, error)) throw std::runtime_error(error);
    }

    void enqueue_packet(const std::vector<uint8_t>& packet) {
        status.last_rx_len = static_cast<uint32_t>(packet.size());
        status.last_rx_tcp_src = 0;
        status.last_rx_tcp_flags = 0;
        status.last_rx_tcp_seq = 0;
        status.last_rx_tcp_ack = 0;
        status.last_rx_tcp_payload_len = 0;
        if (packet.size() >= 54U && get16be(packet, 12U) == 0x0800U && packet[23] == 6U) {
            const size_t ihl = static_cast<size_t>(packet[14] & 0x0FU) * 4U;
            const uint16_t total = get16be(packet, 16U);
            if (ihl >= 20U && packet.size() >= 14U + ihl + 20U && total >= ihl + 20U) {
                const size_t tcp = 14U + ihl;
                const size_t tcp_hlen = static_cast<size_t>(packet[tcp + 12U] >> 4U) * 4U;
                if (tcp_hlen >= 20U && total >= ihl + tcp_hlen) {
                    status.last_rx_tcp_src = get16be(packet, tcp);
                    status.last_rx_tcp_flags = packet[tcp + 13U];
                    status.last_rx_tcp_seq = get32be(packet, tcp + 4U);
                    status.last_rx_tcp_ack = get32be(packet, tcp + 8U);
                    status.last_rx_tcp_payload_len = static_cast<uint32_t>(total - ihl - tcp_hlen);
                }
            }
        }
        for (size_t off = 0; off < packet.size(); off += 4) {
            uint32_t word = 0;
            for (size_t b = 0; b < 4 && off + b < packet.size(); ++b) {
                word |= static_cast<uint32_t>(packet[off + b]) << (8U * b);
            }
            rx_words.push_back({word, off + 4 >= packet.size()});
        }
        status.rx_frames++;
    }

    void handle_virtual_dhcp(const std::vector<uint8_t>& frame) {
        const uint8_t type = dhcp_message_type(frame);
        status.last_dhcp_tx_type = type;
        if (type == 1U) {
            enqueue_packet(build_dhcp_response(frame, 2U));
            status.virtual_offers++;
        } else if (type == 3U) {
            enqueue_packet(build_dhcp_response(frame, 5U));
            status.virtual_acks++;
        }
    }

    void poll_rx(uint32_t accepted_budget) {
        uint32_t accepted = 0;
        uint32_t attempts = kNpcapPollAttempts;
        if (!rx_words.empty()) return;
        std::string error;
        std::vector<uint8_t> packet;
        if (attempts == 0U) attempts = 8U;
        for (uint32_t i = 0; i < attempts && accepted < accepted_budget; ++i) {
            if (pcap.poll_packet(packet, error) && packet_for_harvttp(packet)) {
                normalize_ipv4_tcp_checksums(packet);
                enqueue_packet(packet);
                accepted++;
                continue;
            }
            if (!error.empty() && !error_reported) {
                std::cerr << "Npcap RX warning: " << error << "\n";
                error_reported = true;
                return;
            }
        }
    }

    void drive(Vharvos_soc& top) {
        const auto* r = top.rootp;
        const bool hw_rx_backlog =
            r->harvos_soc__DOT__net_card__DOT__rx_frame_count >= 8U ||
            r->harvos_soc__DOT__net_card__DOT__rx_ring_count >= 1024U;
        if (!hw_rx_backlog && ((poll_divider++ & kNpcapPollIntervalMask) == 0U)) {
            poll_rx(kNpcapPollAcceptedBudget);
        }
        top.net_link_up = 1;
        top.net_tx_ready = 1;
        top.net_rx_valid = 0;
        top.net_rx_word = 0;
        top.net_rx_last = 0;
        top.net_rx_error = 0;
        if (!rx_words.empty()) {
            top.net_rx_valid = 1;
            top.net_rx_word = rx_words.front().word;
            top.net_rx_last = rx_words.front().last;
        }
    }

    void sample(const Vharvos_soc& top) {
        if (top.net_tx_valid && top.net_tx_ready) {
            tx_words.push_back(top.net_tx_word);
            if (top.net_tx_last) {
                std::vector<uint8_t> frame;
                frame.reserve(tx_words.size() * 4U);
                for (uint32_t word : tx_words) {
                    frame.push_back(static_cast<uint8_t>(word));
                    frame.push_back(static_cast<uint8_t>(word >> 8));
                    frame.push_back(static_cast<uint8_t>(word >> 16));
                    frame.push_back(static_cast<uint8_t>(word >> 24));
                }
                status.last_tx_len = static_cast<uint32_t>(frame.size());
                status.last_tx_w0 = tx_words.size() > 0 ? tx_words[0] : 0;
                status.last_tx_w1 = tx_words.size() > 1 ? tx_words[1] : 0;
                status.last_tx_w2 = tx_words.size() > 2 ? tx_words[2] : 0;
                status.last_tx_w3 = tx_words.size() > 3 ? tx_words[3] : 0;
                status.last_tx_ethertype = frame.size() >= 14U ? get16be(frame, 12U) : 0;
                status.last_tx_ip_proto = frame.size() >= 24U ? frame[23] : 0;
                status.last_tx_udp_src = 0;
                status.last_tx_udp_dst = 0;
                status.last_tx_tcp_dst = 0;
                status.last_tx_tcp_flags = 0;
                status.last_tx_tcp_seq = 0;
                status.last_tx_tcp_ack = 0;
                status.last_tx_tcp_payload_len = 0;
                if (frame.size() >= 42U && status.last_tx_ethertype == 0x0800U) {
                    const size_t ihl = static_cast<size_t>(frame[14] & 0x0FU) * 4U;
                    if (ihl >= 20U && frame.size() >= 14U + ihl + 4U) {
                        const size_t l4 = 14U + ihl;
                        if (status.last_tx_ip_proto == 17U) {
                            status.last_tx_udp_src = get16be(frame, l4);
                            status.last_tx_udp_dst = get16be(frame, l4 + 2U);
                        } else if (status.last_tx_ip_proto == 6U && frame.size() >= l4 + 20U) {
                            const size_t tcp_hlen = static_cast<size_t>(frame[l4 + 12U] >> 4U) * 4U;
                            const uint16_t total = get16be(frame, 16U);
                            status.last_tx_tcp_dst = get16be(frame, l4 + 2U);
                            status.last_tx_tcp_flags = frame[l4 + 13U];
                            status.last_tx_tcp_seq = get32be(frame, l4 + 4U);
                            status.last_tx_tcp_ack = get32be(frame, l4 + 8U);
                            if (tcp_hlen >= 20U && total >= ihl + tcp_hlen) {
                                status.last_tx_tcp_payload_len = static_cast<uint32_t>(total - ihl - tcp_hlen);
                            }
                        }
                    }
                }
                handle_virtual_dhcp(frame);
                if (status.last_dhcp_tx_type == 0U) {
                    std::string error;
                    if (!pcap.send_packet(frame.data(), frame.size(), error) && !error_reported) {
                        std::cerr << "Npcap TX warning: " << error << "\n";
                        error_reported = true;
                    }
                }
                status.tx_frames++;
                tx_words.clear();
            }
        }
        if (top.net_rx_valid && top.net_rx_ready && !rx_words.empty()) {
            rx_words.pop_front();
            status.harness_rx_words = rx_words.size();
        }
    }
};

void tick_hnet(Vharvos_soc& top, HnetEndpoint& hnet) {
    top.clk = 0;
    top.eval();
    hnet.sample(top);
    ++g_time;
    top.clk = 1;
    top.eval();
    ++g_time;
}

void observe_syscall(Vharvos_soc& top, Status& status) {
    auto* r = top.rootp;
    if (r->harvos_soc__DOT__cpu0__DOT__state == 2 &&
        r->harvos_soc__DOT__cpu0__DOT__instr == kEcall) {
        const uint32_t a7 = r->harvos_soc__DOT__cpu0__DOT__regs[17];
        const uint32_t a1 = r->harvos_soc__DOT__cpu0__DOT__regs[11];
        const uint32_t a2 = r->harvos_soc__DOT__cpu0__DOT__regs[12];
        if (a7 == 1U) {
            status.audit_code = a1;
            status.audit_value = a2;
            status.audit_count++;
            if (a1 == kAuditDhcpCode && a2 != 0) status.lease_ip = a2;
        }
    }
}

void write_status(const std::filesystem::path& path, const Status& status, const Vharvos_soc& top) {
    if (path.empty()) return;
    const auto* r = top.rootp;
    std::ofstream out(path, std::ios::trunc);
    out << "{\n";
    out << "  \"app\": \"harvttp\",\n";
    out << "  \"runtime\": \"verilator-rtl-cpu-usb-bootloader\",\n";
    out << "  \"server_ip\": \"" << (status.lease_ip ? ip_string(status.lease_ip) : "") << "\",\n";
    out << "  \"tx_frames\": " << status.tx_frames << ",\n";
    out << "  \"rx_frames\": " << status.rx_frames << ",\n";
    out << "  \"cycles\": " << status.cycles << ",\n";
    out << "  \"audit_count\": " << status.audit_count << ",\n";
    out << "  \"last_audit_code\": \"" << hex32(status.audit_code) << "\",\n";
    out << "  \"last_audit_value\": \"" << hex32(status.audit_value) << "\",\n";
    out << "  \"last_dhcp_tx_type\": " << status.last_dhcp_tx_type << ",\n";
    out << "  \"virtual_offers\": " << status.virtual_offers << ",\n";
    out << "  \"virtual_acks\": " << status.virtual_acks << ",\n";
    out << "  \"last_tx_len\": " << status.last_tx_len << ",\n";
    out << "  \"last_tx_w0\": \"" << hex32(status.last_tx_w0) << "\",\n";
    out << "  \"last_tx_w1\": \"" << hex32(status.last_tx_w1) << "\",\n";
    out << "  \"last_tx_w2\": \"" << hex32(status.last_tx_w2) << "\",\n";
    out << "  \"last_tx_w3\": \"" << hex32(status.last_tx_w3) << "\",\n";
    out << "  \"last_tx_ethertype\": \"" << hex32(status.last_tx_ethertype) << "\",\n";
    out << "  \"last_tx_ip_proto\": " << status.last_tx_ip_proto << ",\n";
    out << "  \"last_tx_udp_src\": " << status.last_tx_udp_src << ",\n";
    out << "  \"last_tx_udp_dst\": " << status.last_tx_udp_dst << ",\n";
    out << "  \"harness_rx_words\": " << status.harness_rx_words << ",\n";
    out << "  \"last_rx_len\": " << status.last_rx_len << ",\n";
    out << "  \"last_rx_tcp_src\": " << status.last_rx_tcp_src << ",\n";
    out << "  \"last_rx_tcp_flags\": " << status.last_rx_tcp_flags << ",\n";
    out << "  \"last_rx_tcp_seq\": \"" << hex32(status.last_rx_tcp_seq) << "\",\n";
    out << "  \"last_rx_tcp_ack\": \"" << hex32(status.last_rx_tcp_ack) << "\",\n";
    out << "  \"last_rx_tcp_payload_len\": " << status.last_rx_tcp_payload_len << ",\n";
    out << "  \"last_tx_tcp_dst\": " << status.last_tx_tcp_dst << ",\n";
    out << "  \"last_tx_tcp_flags\": " << status.last_tx_tcp_flags << ",\n";
    out << "  \"last_tx_tcp_seq\": \"" << hex32(status.last_tx_tcp_seq) << "\",\n";
    out << "  \"last_tx_tcp_ack\": \"" << hex32(status.last_tx_tcp_ack) << "\",\n";
    out << "  \"last_tx_tcp_payload_len\": " << status.last_tx_tcp_payload_len << ",\n";
    out << "  \"cpu0_pc\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__pc) << "\",\n";
    out << "  \"cpu0_instr\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__instr) << "\",\n";
    out << "  \"cpu0_state\": " << static_cast<uint32_t>(r->harvos_soc__DOT__cpu0__DOT__state) << ",\n";
    out << "  \"cpu0_sepc\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__csr_sepc) << "\",\n";
    out << "  \"cpu0_gp\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__regs[3]) << "\",\n";
    out << "  \"cpu0_sp\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__regs[2]) << "\",\n";
    out << "  \"cpu0_a0\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__regs[10]) << "\",\n";
    out << "  \"cpu0_a1\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__regs[11]) << "\",\n";
    out << "  \"cpu0_a2\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__regs[12]) << "\",\n";
    out << "  \"cpu0_a3\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__regs[13]) << "\",\n";
    out << "  \"cpu0_a4\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__regs[14]) << "\",\n";
    out << "  \"cpu0_a5\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__regs[15]) << "\",\n";
    out << "  \"cpu0_ra\": \"" << hex32(r->harvos_soc__DOT__cpu0__DOT__regs[1]) << "\",\n";
    out << "  \"cpu1_pc\": \"" << hex32(r->harvos_soc__DOT__cpu1__DOT__pc) << "\",\n";
    out << "  \"cpu1_instr\": \"" << hex32(r->harvos_soc__DOT__cpu1__DOT__instr) << "\",\n";
    out << "  \"cpu1_state\": " << static_cast<uint32_t>(r->harvos_soc__DOT__cpu1__DOT__state) << ",\n";
    out << "  \"debug_pc\": \"" << hex32(top.debug_pc) << "\",\n";
    out << "  \"debug_scause\": \"" << hex32(top.debug_scause) << "\",\n";
    out << "  \"debug_stval\": \"" << hex32(top.debug_stval) << "\",\n";
    out << "  \"debug_state\": \"" << hex32(top.debug_state) << "\",\n";
    out << "  \"bootrom_status\": \"" << hex32(dram_word(top, 0x00000420U)) << "\",\n";
    out << "  \"hps_block_status\": \"" << hex32(top.debug_hps_boot_word) << "\",\n";
    out << "  \"imem_loader_status\": \"" << hex32(r->harvos_soc__DOT__imem_loader_status) << "\",\n";
    out << "  \"imem_loader_target_addr\": \"" << hex32(r->harvos_soc__DOT__imem_loader__DOT__target_addr) << "\",\n";
    out << "  \"imem_loader_write_count\": " << r->harvos_soc__DOT__imem_loader__DOT__write_count << ",\n";
    out << "  \"net_status\": \"" << hex32(r->harvos_soc__DOT__net_status) << "\",\n";
    out << "  \"net_ctrl\": \"" << hex32(r->harvos_soc__DOT__net_card__DOT__ctrl) << "\",\n";
    out << "  \"net_busy\": " << static_cast<uint32_t>(r->harvos_soc__DOT__net_card__DOT__busy) << ",\n";
    out << "  \"net_done\": " << static_cast<uint32_t>(r->harvos_soc__DOT__net_card__DOT__done) << ",\n";
    out << "  \"net_fault\": " << static_cast<uint32_t>(r->harvos_soc__DOT__net_card__DOT__fault) << ",\n";
    out << "  \"net_rx_op\": " << static_cast<uint32_t>(r->harvos_soc__DOT__net_card__DOT__rx_op) << ",\n";
    out << "  \"net_progress\": " << r->harvos_soc__DOT__net_card__DOT__progress << ",\n";
    out << "  \"net_frame_len\": " << r->harvos_soc__DOT__net_card__DOT__frame_len << ",\n";
    out << "  \"net_rx_count\": " << r->harvos_soc__DOT__net_card__DOT__rx_count << ",\n";
    out << "  \"net_tx_count\": " << r->harvos_soc__DOT__net_card__DOT__tx_count << ",\n";
    out << "  \"net_rx_ring_count\": " << r->harvos_soc__DOT__net_card__DOT__rx_ring_count << ",\n";
    out << "  \"net_rx_frame_count\": " << r->harvos_soc__DOT__net_card__DOT__rx_frame_count << ",\n";
    out << "  \"net_rx_start_count\": " << r->harvos_soc__DOT__net_card__DOT__rx_start_count << ",\n";
    out << "  \"net_rx_start_fault_count\": " << r->harvos_soc__DOT__net_card__DOT__rx_start_fault_count << ",\n";
    out << "  \"net_irq_status\": \"" << hex32(r->harvos_soc__DOT__net_card__DOT__irq_status) << "\",\n";
    out << "  \"net_rx_ready_latched\": " << static_cast<uint32_t>(r->harvos_soc__DOT__net_card__DOT__rx_ready_latched) << ",\n";
    out << "  \"net_tx_desc_count\": " << static_cast<uint32_t>(r->harvos_soc__DOT__net_card__DOT__tx_desc_count) << ",\n";
    out << "  \"dma_w0\": \"" << hex32(dram_word(top, 0x00000500U)) << "\",\n";
    out << "  \"dma_w1\": \"" << hex32(dram_word(top, 0x00000504U)) << "\",\n";
    out << "  \"dma_w2\": \"" << hex32(dram_word(top, 0x00000508U)) << "\",\n";
    out << "  \"dma_w3\": \"" << hex32(dram_word(top, 0x0000050CU)) << "\",\n";
    out << "  \"dma_w4\": \"" << hex32(dram_word(top, 0x00000510U)) << "\",\n";
    out << "  \"dma_w5\": \"" << hex32(dram_word(top, 0x00000514U)) << "\",\n";
    out << "  \"dma_w6\": \"" << hex32(dram_word(top, 0x00000518U)) << "\",\n";
    out << "  \"dma_w7\": \"" << hex32(dram_word(top, 0x0000051CU)) << "\",\n";
    out << "  \"dma_w10\": \"" << hex32(dram_word(top, 0x00000528U)) << "\",\n";
    out << "  \"dma_w11\": \"" << hex32(dram_word(top, 0x0000052CU)) << "\",\n";
    out << "  \"dma_w12\": \"" << hex32(dram_word(top, 0x00000530U)) << "\",\n";
    out << "  \"dma_w13\": \"" << hex32(dram_word(top, 0x00000534U)) << "\",\n";
    out << "  \"hps_sd_rd\": " << static_cast<uint32_t>(top.hps_sd_rd) << "\n";
    out << "}\n";
}
}  // namespace

double sc_time_stamp() {
    return static_cast<double>(g_time);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    std::filesystem::path program_image = "release/program_usb.img";
    std::filesystem::path data_image = "release/data_usb.img";
    std::filesystem::path status_path;
    std::string npcap_selector;
    uint64_t max_cycles = 0;

    for (int i = 1; i < argc; ++i) {
        const std::string arg(argv[i]);
        if (arg == "--bootrom" && i + 1 < argc) ++i;
        else if (arg == "--program-image" && i + 1 < argc) program_image = argv[++i];
        else if (arg == "--data-image" && i + 1 < argc) data_image = argv[++i];
        else if (arg == "--status" && i + 1 < argc) status_path = argv[++i];
        else if (arg == "--npcap-device" && i + 1 < argc) npcap_selector = argv[++i];
        else if (arg == "--cycles" && i + 1 < argc) max_cycles = std::strtoull(argv[++i], nullptr, 0);
        else if (arg == "--list-npcap") {
            std::string error;
            if (!HarvOSNpcapBridge::list_devices(std::cout, error)) {
                std::cerr << error << "\n";
                return 1;
            }
            return 0;
        }
    }
    if (npcap_selector.empty()) {
        if (const char* env = std::getenv("HARVOS_NPCAP_DEVICE")) npcap_selector = env;
    }

    HpsImages hps;
    hps.drive[0] = read_file(program_image);
    hps.drive[1] = read_file(data_image);

    Vharvos_soc top;
    HnetEndpoint hnet;
    drive_idle_platform(top, hps);
    top.eval();
    hnet.open(npcap_selector);

    top.reset = 1;
    for (int i = 0; i < 8; ++i) {
        drive_idle_platform(top, hps);
        hnet.drive(top);
        tick_hnet(top, hnet);
    }
    top.reset = 0;
    std::cout << "HarvTTP USB boot server started through RTL bootrom readmemh init\n";

    uint64_t cycles = 0;
    uint32_t last_ip = 0;
    while (!Verilated::gotFinish() && (max_cycles == 0 || cycles < max_cycles)) {
        drive_idle_platform(top, hps);
        hnet.drive(top);
        observe_syscall(top, hnet.status);
        tick_hnet(top, hnet);
        ++cycles;
        const uint64_t hps_cycles = service_hps_read_if_requested(top, hps);
        cycles += hps_cycles;
        if (cycles > 64 && top.debug_trap) {
            std::cerr << "HarvTTP USB boot CPU trapped pc=0x" << std::hex << top.debug_pc
                      << " scause=0x" << top.debug_scause << " stval=0x" << top.debug_stval
                      << " status=0x" << top.debug_state << std::dec << "\n";
            hnet.status.cycles = cycles;
            write_status(status_path, hnet.status, top);
            return 1;
        }
        if ((cycles & 0xFFFFU) == 0 || hnet.status.lease_ip != last_ip) {
            hnet.status.cycles = cycles;
            write_status(status_path, hnet.status, top);
            if (hnet.status.lease_ip && hnet.status.lease_ip != last_ip) {
                std::cout << "HarvTTP DHCP bound ip=" << ip_string(hnet.status.lease_ip) << "\n";
                last_ip = hnet.status.lease_ip;
            }
        }
        const bool hw_rx_pending =
            top.rootp->harvos_soc__DOT__net_card__DOT__rx_frame_count != 0U ||
            top.rootp->harvos_soc__DOT__net_card__DOT__rx_ring_count != 0U;
        if ((cycles & 0xFFFFU) == 0 && hnet.rx_words.empty() && !hw_rx_pending && !top.net_tx_valid) {
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }
    hnet.status.cycles = cycles;
    write_status(status_path, hnet.status, top);
    return 0;
}
