// Copyright 2025 Dennis Michael Heine

#include "Vharvos_soc.h"
#include "harvos_npcap_bridge.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdlib>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
vluint64_t g_time = 0;
constexpr uint32_t kHnetProbeMagic = 0x484E4554U;  // "HNET"
constexpr uint32_t kHarvttpLeaseWord = 0x0A00020FU;  // 10.0.2.15

void tick(Vharvos_soc& top) {
    top.clk = 0;
    top.eval();
    ++g_time;
    top.clk = 1;
    top.eval();
    ++g_time;
}

uint64_t parse_u64(const char* value, uint64_t fallback) {
    if (value == nullptr || *value == '\0') {
        return fallback;
    }
    char* end = nullptr;
    const uint64_t parsed = std::strtoull(value, &end, 0);
    return (end != value) ? parsed : fallback;
}

std::vector<uint8_t> read_file(const std::string& path) {
    std::ifstream in(path, std::ios::binary);
    if (!in) {
        throw std::runtime_error("could not open image: " + path);
    }
    in.seekg(0, std::ios::end);
    const std::streamoff size = in.tellg();
    in.seekg(0, std::ios::beg);
    std::vector<uint8_t> bytes(static_cast<size_t>(size));
    if (!bytes.empty()) {
        in.read(reinterpret_cast<char*>(bytes.data()), size);
    }
    return bytes;
}

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

struct VirtualHnet {
    std::deque<uint32_t> rx_words;
    std::vector<uint32_t> tx_words;
    std::vector<uint32_t> tx_frame_words;
    HarvOSNpcapBridge* pcap = nullptr;
    uint64_t tx_frames = 0;
    uint64_t rx_frames = 0;
    uint64_t pcap_tx_frames = 0;
    uint64_t pcap_rx_frames = 0;
    bool raw_tx_seen = false;
    bool pcap_error_reported = false;

    explicit VirtualHnet(HarvOSNpcapBridge* bridge = nullptr) : pcap(bridge) {}

    void enqueue_lease_response() {
        if (!rx_words.empty()) {
            return;
        }
        rx_words.push_back(kHarvttpLeaseWord);
        rx_words.push_back(0xFFFFFF00U);
        rx_words.push_back(0x0A000202U);
        rx_words.push_back(0x0A000203U);
    }

    void enqueue_packet_bytes(const std::vector<uint8_t>& packet) {
        for (size_t off = 0; off < packet.size(); off += 4) {
            uint32_t word = 0;
            for (size_t i = 0; i < 4 && off + i < packet.size(); ++i) {
                word |= static_cast<uint32_t>(packet[off + i]) << (8 * i);
            }
            rx_words.push_back(word);
        }
    }

    static void append_word_bytes(std::vector<uint8_t>& out, uint32_t word) {
        out.push_back(static_cast<uint8_t>(word));
        out.push_back(static_cast<uint8_t>(word >> 8));
        out.push_back(static_cast<uint8_t>(word >> 16));
        out.push_back(static_cast<uint8_t>(word >> 24));
    }

    void poll_pcap_if_needed() {
        if (!pcap || !pcap->is_open() || !raw_tx_seen || !rx_words.empty()) {
            return;
        }

        std::vector<uint8_t> packet;
        std::string error;
        for (int i = 0; i < 8; ++i) {
            if (pcap->poll_packet(packet, error) && !packet.empty()) {
                enqueue_packet_bytes(packet);
                ++pcap_rx_frames;
                return;
            }
            if (!error.empty() && !pcap_error_reported) {
                std::cerr << "HarvOS Npcap RX warning: " << error << "\n";
                pcap_error_reported = true;
                return;
            }
        }
    }

    void drive_inputs(Vharvos_soc& top) {
        poll_pcap_if_needed();
        top.net_link_up = 1;
        top.net_tx_ready = 1;
        top.net_rx_valid = 0;
        top.net_rx_word = 0;
        top.net_rx_last = 0;
        top.net_rx_error = 0;

        if (!rx_words.empty()) {
            top.net_rx_valid = 1;
            top.net_rx_word = rx_words.front();
            top.net_rx_last = (rx_words.size() == 1);
        }
    }

    void sample_outputs(const Vharvos_soc& top) {
        if (top.net_tx_valid && top.net_tx_ready) {
            tx_words.push_back(top.net_tx_word);
            tx_frame_words.push_back(top.net_tx_word);
            if (top.net_tx_word == kHnetProbeMagic) {
                enqueue_lease_response();
            }
            if (top.net_tx_last) {
                ++tx_frames;
                if (pcap && pcap->is_open() && tx_frame_words.size() * 4U >= 14U) {
                    std::vector<uint8_t> frame;
                    frame.reserve(tx_frame_words.size() * 4U);
                    for (uint32_t word : tx_frame_words) {
                        append_word_bytes(frame, word);
                    }

                    std::string error;
                    if (pcap->send_packet(frame.data(), frame.size(), error)) {
                        ++pcap_tx_frames;
                        raw_tx_seen = true;
                    } else if (!pcap_error_reported) {
                        std::cerr << "HarvOS Npcap TX warning: " << error << "\n";
                        pcap_error_reported = true;
                    }
                }
                tx_frame_words.clear();
            }
        }

        if (top.net_rx_valid && top.net_rx_ready && !rx_words.empty()) {
            const bool last = (rx_words.size() == 1);
            rx_words.pop_front();
            if (last) {
                ++rx_frames;
            }
        }
    }

    bool saw_probe_tx() const {
        for (uint32_t word : tx_words) {
            if (word == kHnetProbeMagic) {
                return true;
            }
        }
        return false;
    }
};

void tick_hnet(Vharvos_soc& top, VirtualHnet& hnet) {
    top.clk = 0;
    top.eval();
    hnet.sample_outputs(top);
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

    top.net_link_up = 0;
    top.net_rx_valid = 0;
    top.net_rx_word = 0;
    top.net_rx_last = 0;
    top.net_rx_error = 0;
    top.net_tx_ready = 0;

    top.hps_img_mounted = hps.mounted_mask();
    top.hps_img_readonly = 0;
    top.hps_img_size = hps.visible_size();
    top.hps_sd_ack = 0;
    top.hps_sd_buff_addr = 0;
    top.hps_sd_buff_dout = 0;
    top.hps_sd_buff_wr = 0;
}

uint16_t image_word(const std::vector<uint8_t>& image, uint64_t byte_offset) {
    if (byte_offset + 1 >= image.size()) {
        return 0;
    }
    return static_cast<uint16_t>(image[byte_offset]) |
           static_cast<uint16_t>(image[byte_offset + 1]) << 8;
}

uint64_t service_hps_read_if_requested(Vharvos_soc& top, const HpsImages& hps) {
    const uint8_t req = static_cast<uint8_t>(top.hps_sd_rd & hps.mounted_mask());
    if (req == 0) {
        return 0;
    }

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

void print_status(const Vharvos_soc& top, uint64_t cycles) {
    std::cout << "cycles=" << cycles
              << " pc=0x" << std::hex << std::setw(8) << std::setfill('0') << top.debug_pc
              << " state=0x" << std::setw(8) << top.debug_state
              << " kernel=0x" << std::setw(8) << top.debug_kernel_status
              << " hps=0x" << std::setw(8) << top.debug_hps_boot_word
              << " net=0x" << std::setw(8) << top.debug_net_boot_word
              << " word0=0x" << std::setw(8) << top.debug_word0
              << " word1=0x" << std::setw(8) << top.debug_word1
              << " word2=0x" << std::setw(8) << top.debug_word2
              << " entropy=0x" << std::setw(8) << top.debug_entropy
              << std::dec << std::setfill(' ') << "\n";
}
}  // namespace

double sc_time_stamp() {
    return static_cast<double>(g_time);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    uint64_t max_cycles = 8192;
    HpsImages hps;
    bool use_npcap = false;
    bool list_npcap = false;
    std::string npcap_selector;
    for (int i = 1; i < argc; ++i) {
        const std::string arg(argv[i]);
        if (arg == "--cycles" && (i + 1) < argc) {
            max_cycles = parse_u64(argv[++i], max_cycles);
        } else if (arg == "--program-image" && (i + 1) < argc) {
            hps.drive[0] = read_file(argv[++i]);
        } else if (arg == "--data-image" && (i + 1) < argc) {
            hps.drive[1] = read_file(argv[++i]);
        } else if (arg == "--npcap") {
            use_npcap = true;
        } else if (arg == "--npcap-device" && (i + 1) < argc) {
            use_npcap = true;
            npcap_selector = argv[++i];
        } else if (arg == "--list-npcap") {
            list_npcap = true;
        }
    }

    if (list_npcap) {
        std::string error;
        if (!HarvOSNpcapBridge::list_devices(std::cout, error)) {
            std::cerr << "HarvOS Npcap device listing failed: " << error << "\n";
            return 1;
        }
        return 0;
    }

    if (hps.drive[0].empty()) {
        std::cerr << "HarvOS processor boot failed: no program USB image was provided\n";
        return 1;
    }

    HarvOSNpcapBridge npcap;
    if (use_npcap) {
        if (npcap_selector.empty()) {
            const char* env_selector = std::getenv("HARVOS_NPCAP_DEVICE");
            if (env_selector) {
                npcap_selector = env_selector;
            }
        }

        std::string error;
        if (!npcap.open(npcap_selector, std::cout, error)) {
            std::cerr << "HarvOS processor boot failed: Npcap bridge could not open: " << error << "\n";
            return 1;
        }
    }

    Vharvos_soc top;
    VirtualHnet hnet(use_npcap ? &npcap : nullptr);
    drive_idle_platform(top, hps);
    hnet.drive_inputs(top);
    top.reset = 1;
    for (int i = 0; i < 8; ++i) {
        tick(top);
    }

    top.reset = 0;
    uint32_t first_kernel_status = top.debug_kernel_status;
    bool saw_selftest = false;
    bool saw_pc_progress = false;
    bool saw_kernel_nonzero = false;
    bool saw_kernel_change = false;
    bool saw_entropy = false;
    bool saw_usb_boot_dma = false;
    bool saw_hps_request = false;
    bool saw_hps_boot_sector = false;
    bool saw_hnet_probe_tx = false;
    bool saw_hnet_lease_rx = false;
    bool saw_hnet_rx_frame = false;
    bool saw_hnet_cpu_post_rx = false;

    uint64_t cycles = 0;
    for (; cycles < max_cycles && !Verilated::gotFinish(); ++cycles) {
        drive_idle_platform(top, hps);
        hnet.drive_inputs(top);
        tick_hnet(top, hnet);
        const uint64_t hps_cycles = service_hps_read_if_requested(top, hps);
        if (hps_cycles != 0) {
            cycles += hps_cycles;
            saw_hps_request = true;
        }

        saw_selftest = saw_selftest || (top.debug_word0 == 12U);
        saw_pc_progress = saw_pc_progress || (top.debug_pc >= 0xE0U);
        saw_kernel_nonzero = saw_kernel_nonzero || (top.debug_kernel_status != 0U);
        saw_kernel_change = saw_kernel_change || (top.debug_kernel_status != first_kernel_status);
        saw_entropy = saw_entropy || (top.debug_entropy != 0U && top.debug_entropy != 0x1ACEB00CU);
        saw_usb_boot_dma = saw_usb_boot_dma || (top.usb_port_power_en && top.debug_word2 != 0U);
        saw_hps_boot_sector = saw_hps_boot_sector || (top.debug_hps_boot_word == 0x489058EBU);
        saw_hnet_probe_tx = saw_hnet_probe_tx || hnet.saw_probe_tx();
        saw_hnet_lease_rx = saw_hnet_lease_rx || (top.debug_net_boot_word == kHarvttpLeaseWord);
        saw_hnet_rx_frame = saw_hnet_rx_frame || (hnet.rx_frames > 0);
        saw_hnet_cpu_post_rx = saw_hnet_cpu_post_rx || (top.debug_pc >= 0x000001E8U);

        if (cycles > 32 && top.debug_trap) {
            std::cerr << "HarvOS processor boot failed: trap asserted\n";
            print_status(top, cycles);
            return 1;
        }

        if (saw_selftest && saw_pc_progress && saw_kernel_nonzero &&
            saw_kernel_change && saw_entropy && saw_usb_boot_dma &&
            saw_hps_request && saw_hps_boot_sector &&
            saw_hnet_probe_tx && saw_hnet_lease_rx && saw_hnet_rx_frame &&
            saw_hnet_cpu_post_rx) {
            break;
        }
    }

    bool ok = true;
    if (!saw_selftest) {
        std::cerr << "HarvOS processor boot failed: ROM self-test never wrote dmem[0]=12\n";
        ok = false;
    }
    if (!saw_pc_progress) {
        std::cerr << "HarvOS processor boot failed: CPU did not reach the USB boot-probe loop\n";
        ok = false;
    }
    if (!saw_kernel_nonzero || !saw_kernel_change) {
        std::cerr << "HarvOS processor boot failed: kernel/supervisor model did not tick\n";
        ok = false;
    }
    if (!saw_entropy) {
        std::cerr << "HarvOS processor boot failed: entropy source did not advance\n";
        ok = false;
    }
    if (!saw_usb_boot_dma) {
        std::cerr << "HarvOS processor boot failed: USB boot-probe/DMA path did not become observable\n";
        ok = false;
    }
    if (!saw_hps_request) {
        std::cerr << "HarvOS processor boot failed: boot ROM did not read the program USB image\n";
        ok = false;
    }
    if (!saw_hps_boot_sector) {
        std::cerr << "HarvOS processor boot failed: program USB image FAT32 boot sector was not observed\n";
        ok = false;
    }
    if (!saw_hnet_probe_tx) {
        std::cerr << "HarvOS processor boot failed: CPU did not transmit on the HNET MMIO endpoint\n";
        ok = false;
    }
    if (!saw_hnet_lease_rx) {
        std::cerr << "HarvOS processor boot failed: HNET lease response did not reach DMA memory\n";
        ok = false;
    }
    if (!saw_hnet_rx_frame) {
        std::cerr << "HarvOS processor boot failed: HNET RX frame did not complete\n";
        ok = false;
    }
    if (!saw_hnet_cpu_post_rx) {
        std::cerr << "HarvOS processor boot failed: CPU did not leave the HNET RX wait loop\n";
        ok = false;
    }

    if (!ok) {
        std::cerr << "HNET debug: tx_words=" << hnet.tx_words.size()
                  << " tx_frames=" << hnet.tx_frames
                  << " rx_frames=" << hnet.rx_frames
                  << " pending_rx_words=" << hnet.rx_words.size();
        if (!hnet.tx_words.empty()) {
            std::cerr << " first_tx=0x" << std::hex << std::setw(8) << std::setfill('0') << hnet.tx_words.front()
                      << " last_tx=0x" << std::setw(8) << hnet.tx_words.back()
                      << std::dec << std::setfill(' ');
        }
        std::cerr << "\n";
        print_status(top, cycles);
        return 1;
    }

    std::cout << "HarvOS processor+kernel RTL boot passed ";
    print_status(top, cycles);
    std::cout << "HarvOS HNET RTL endpoint passed hnet_ip=10.0.2.15"
              << " tx_frames=" << hnet.tx_frames
              << " rx_frames=" << hnet.rx_frames
              << "\n";
    if (npcap.is_open()) {
        std::cout << "HarvOS Npcap bridge ready device=\"" << npcap.device_description()
                  << "\" pcap_tx_frames=" << hnet.pcap_tx_frames
                  << " pcap_rx_frames=" << hnet.pcap_rx_frames;
        if (hnet.pcap_tx_frames == 0) {
            std::cout << " note=\"ROM probe used HNET control frames, no raw Ethernet app frame yet\"";
        }
        std::cout << "\n";
    }
    return 0;
}
