// Copyright 2025 Dennis Michael Heine

#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

#ifdef HARVOS_WITH_SDL
#define SDL_MAIN_HANDLED
#include <SDL.h>
#endif

#include "Vmycore.h"
#include "verilated.h"

double sc_time_stamp() {
    return 0.0;
}

namespace {

constexpr int kBootWidth = 432;
constexpr int kBootHeight = 240;
constexpr int kBootScreenX = 48;

struct Options {
    std::string bootrom = "release/harvos_minerva_bootrom.hbr";
    std::string ppm = "build/verilator_sdl/frame.ppm";
    std::string bmp;
    int frames = 2;
    bool pal = false;
    bool scandouble = false;
    bool sdl = false;
    std::uint64_t max_cycles = 0;
};

struct Frame {
    int width = 0;
    int height = 0;
    std::vector<std::uint32_t> pixels;

    std::uint32_t at(int x, int y) const {
        if (x < 0 || y < 0 || x >= width || y >= height) return 0;
        return pixels[static_cast<std::size_t>(y) * width + x];
    }
};

std::string usage() {
    return
        "harvos_video_tb [options]\n"
        "  --bootrom <file>     RGB565 .hbr image loaded through mycore bootrom ports\n"
        "  --frames <n>         Complete frames to simulate, default 2\n"
        "  --ppm <file>         Write the last captured frame as binary PPM\n"
        "  --bmp <file>         Write the last captured frame as 24-bit BMP\n"
        "  --pal                Use PAL timing\n"
        "  --scandouble         Use scandoubled timing\n"
        "  --sdl                Show frames in an SDL2 window when compiled with SDL2\n"
        "  --headless           Disable SDL2 output\n"
        "  --max-cycles <n>     Simulation watchdog\n";
}

int parse_int(const char* text, const char* name) {
    char* end = nullptr;
    const long value = std::strtol(text, &end, 10);
    if (!text[0] || *end || value <= 0 || value > std::numeric_limits<int>::max()) {
        std::ostringstream oss;
        oss << "invalid " << name << ": " << text;
        throw std::runtime_error(oss.str());
    }
    return static_cast<int>(value);
}

std::uint64_t parse_u64(const char* text, const char* name) {
    char* end = nullptr;
    const unsigned long long value = std::strtoull(text, &end, 10);
    if (!text[0] || *end || value == 0) {
        std::ostringstream oss;
        oss << "invalid " << name << ": " << text;
        throw std::runtime_error(oss.str());
    }
    return static_cast<std::uint64_t>(value);
}

Options parse_args(int argc, char** argv) {
    Options opt;
    for (int i = 1; i < argc; ++i) {
        const std::string arg = argv[i];
        auto require_value = [&](const char* name) -> const char* {
            if (i + 1 >= argc) {
                std::ostringstream oss;
                oss << "missing value for " << name;
                throw std::runtime_error(oss.str());
            }
            return argv[++i];
        };

        if (arg == "--bootrom") opt.bootrom = require_value("--bootrom");
        else if (arg == "--frames") opt.frames = parse_int(require_value("--frames"), "--frames");
        else if (arg == "--ppm") opt.ppm = require_value("--ppm");
        else if (arg == "--bmp") opt.bmp = require_value("--bmp");
        else if (arg == "--pal") opt.pal = true;
        else if (arg == "--scandouble") opt.scandouble = true;
        else if (arg == "--sdl") opt.sdl = true;
        else if (arg == "--headless") opt.sdl = false;
        else if (arg == "--max-cycles") opt.max_cycles = parse_u64(require_value("--max-cycles"), "--max-cycles");
        else if (arg == "--help" || arg == "-h") {
            std::cout << usage();
            std::exit(0);
        } else {
            std::ostringstream oss;
            oss << "unknown option: " << arg << "\n" << usage();
            throw std::runtime_error(oss.str());
        }
    }
    return opt;
}

std::uint32_t rgb565_to_rgb888(std::uint16_t value) {
    const std::uint32_t r = ((value >> 11) & 0x1f);
    const std::uint32_t g = ((value >> 5) & 0x3f);
    const std::uint32_t b = (value & 0x1f);
    return ((r << 3) | (r >> 2)) << 16 |
           ((g << 2) | (g >> 4)) << 8 |
           ((b << 3) | (b >> 2));
}

std::vector<std::uint16_t> load_bootrom(const std::string& path) {
    std::ifstream in(path, std::ios::binary);
    if (!in) {
        throw std::runtime_error("cannot open bootrom: " + path);
    }

    std::vector<unsigned char> bytes(
        (std::istreambuf_iterator<char>(in)),
        std::istreambuf_iterator<char>());
    if ((bytes.size() & 1U) != 0) {
        throw std::runtime_error("bootrom has an odd byte count: " + path);
    }

    std::vector<std::uint16_t> words(bytes.size() / 2);
    for (std::size_t i = 0; i < words.size(); ++i) {
        words[i] = static_cast<std::uint16_t>(bytes[i * 2] |
                  (static_cast<std::uint16_t>(bytes[i * 2 + 1]) << 8));
    }

    const std::size_t required = static_cast<std::size_t>(kBootWidth) * kBootHeight;
    if (words.size() < required) {
        std::ostringstream oss;
        oss << "bootrom too small: " << words.size() << " words, need " << required;
        throw std::runtime_error(oss.str());
    }
    return words;
}

class HdmiSink {
public:
    HdmiSink() : scratch_(kMaxWidth * kMaxHeight, 0) {}

    void sample(bool enable, bool de, bool vblank, std::uint8_t r, std::uint8_t g, std::uint8_t b) {
        if (!enable) return;

        if (vblank && !prev_vblank_) {
            complete_frame();
        }
        if (!vblank && prev_vblank_) {
            reset_frame();
        }

        if (de) {
            if (x_ < kMaxWidth && y_ < kMaxHeight) {
                scratch_[static_cast<std::size_t>(y_) * kMaxWidth + x_] =
                    (static_cast<std::uint32_t>(r) << 16) |
                    (static_cast<std::uint32_t>(g) << 8) |
                    static_cast<std::uint32_t>(b);
            }
            ++x_;
        } else if (prev_de_) {
            complete_line();
        }

        prev_de_ = de;
        prev_vblank_ = vblank;
    }

    int frames() const { return completed_frames_; }
    const Frame& last_frame() const { return last_frame_; }

private:
    static constexpr int kMaxWidth = 1024;
    static constexpr int kMaxHeight = 1024;

    void reset_frame() {
        x_ = 0;
        y_ = 0;
        width_ = 0;
        height_ = 0;
        saw_pixels_ = false;
    }

    void complete_line() {
        if (x_ > 0) {
            width_ = std::max(width_, std::min(x_, kMaxWidth));
            height_ = std::max(height_, std::min(y_ + 1, kMaxHeight));
            saw_pixels_ = true;
            ++y_;
        }
        x_ = 0;
    }

    void complete_frame() {
        if (prev_de_) {
            complete_line();
        }
        if (!saw_pixels_ || width_ <= 0 || height_ <= 0) {
            reset_frame();
            return;
        }

        last_frame_.width = width_;
        last_frame_.height = height_;
        last_frame_.pixels.assign(static_cast<std::size_t>(width_) * height_, 0);
        for (int y = 0; y < height_; ++y) {
            for (int x = 0; x < width_; ++x) {
                last_frame_.pixels[static_cast<std::size_t>(y) * width_ + x] =
                    scratch_[static_cast<std::size_t>(y) * kMaxWidth + x];
            }
        }
        ++completed_frames_;
        reset_frame();
    }

    std::vector<std::uint32_t> scratch_;
    Frame last_frame_;
    bool prev_de_ = false;
    bool prev_vblank_ = false;
    bool saw_pixels_ = false;
    int x_ = 0;
    int y_ = 0;
    int width_ = 0;
    int height_ = 0;
    int completed_frames_ = 0;
};

std::uint64_t fnv1a64(const Frame& frame) {
    std::uint64_t hash = 1469598103934665603ULL;
    for (std::uint32_t pixel : frame.pixels) {
        hash ^= pixel & 0xffU;
        hash *= 1099511628211ULL;
        hash ^= (pixel >> 8) & 0xffU;
        hash *= 1099511628211ULL;
        hash ^= (pixel >> 16) & 0xffU;
        hash *= 1099511628211ULL;
    }
    return hash;
}

int color_variance_score(const Frame& frame) {
    std::vector<std::uint32_t> colors;
    colors.reserve(64);
    const int step_y = std::max(1, frame.height / 80);
    const int step_x = std::max(1, frame.width / 120);
    for (int y = 0; y < frame.height; y += step_y) {
        for (int x = 0; x < frame.width; x += step_x) {
            const std::uint32_t color = frame.at(x, y);
            if (std::find(colors.begin(), colors.end(), color) == colors.end()) {
                colors.push_back(color);
                if (colors.size() >= 64) return static_cast<int>(colors.size());
            }
        }
    }
    return static_cast<int>(colors.size());
}

struct Validation {
    bool ok = false;
    int samples = 0;
    int matches = 0;
    int x_shift = 0;
    int y_shift = 0;
    double ratio = 0.0;
    std::string message;
};

Validation validate_boot_image(
    const Frame& frame,
    const std::vector<std::uint16_t>& bootrom,
    bool pal,
    bool scandouble) {
    Validation best;
    const int y0 = pal ? 30 : 0;
    const int screen_y0 = scandouble ? y0 * 2 : y0;
    const int screen_boot_h = scandouble ? kBootHeight * 2 : kBootHeight;

    if (frame.width < kBootScreenX + kBootWidth || frame.height < screen_y0 + screen_boot_h) {
        std::ostringstream oss;
        oss << "visible frame too small for boot image: "
            << frame.width << "x" << frame.height;
        best.message = oss.str();
        return best;
    }

    const int x_shifts[] = {-2, -1, 0, 1, 2};
    const int y_shifts[] = {-2, -1, 0, 1, 2};
    for (int y_shift : y_shifts) {
        for (int x_shift : x_shifts) {
            int samples = 0;
            int matches = 0;
            for (int by = 12; by < kBootHeight - 12; by += 4) {
                const int sy = (scandouble ? (y0 + by) * 2 : (y0 + by)) + y_shift;
                if (sy < 0 || sy >= frame.height) continue;
                for (int bx = 12; bx < kBootWidth - 12; bx += 4) {
                    const int boot_x = bx + x_shift;
                    if (boot_x < 0 || boot_x >= kBootWidth) continue;
                    const std::uint32_t expected =
                        rgb565_to_rgb888(bootrom[static_cast<std::size_t>(by) * kBootWidth + boot_x]);
                    const std::uint32_t actual = frame.at(kBootScreenX + bx, sy);
                    ++samples;
                    if (actual == expected) ++matches;
                }
            }

            const double ratio = samples ? static_cast<double>(matches) / samples : 0.0;
            if (ratio > best.ratio) {
                best.samples = samples;
                best.matches = matches;
                best.x_shift = x_shift;
                best.y_shift = y_shift;
                best.ratio = ratio;
            }
        }
    }

    const int colors = color_variance_score(frame);
    if (best.ratio >= 0.60 && colors >= 16) {
        best.ok = true;
        best.message = "boot image matches captured HDMI frame";
    } else {
        std::ostringstream oss;
        oss << "boot image mismatch: best ratio=" << std::fixed << std::setprecision(3)
            << best.ratio << ", samples=" << best.samples
            << ", matches=" << best.matches << ", colors=" << colors;
        best.message = oss.str();
    }
    return best;
}

void write_ppm(const Frame& frame, const std::string& path) {
    std::ofstream out(path, std::ios::binary);
    if (!out) {
        throw std::runtime_error("cannot write PPM: " + path);
    }
    out << "P6\n" << frame.width << " " << frame.height << "\n255\n";
    for (std::uint32_t pixel : frame.pixels) {
        const unsigned char rgb[3] = {
            static_cast<unsigned char>((pixel >> 16) & 0xff),
            static_cast<unsigned char>((pixel >> 8) & 0xff),
            static_cast<unsigned char>(pixel & 0xff),
        };
        out.write(reinterpret_cast<const char*>(rgb), sizeof(rgb));
    }
}

void write_le16(std::ofstream& out, std::uint16_t value) {
    const unsigned char bytes[2] = {
        static_cast<unsigned char>(value & 0xff),
        static_cast<unsigned char>((value >> 8) & 0xff),
    };
    out.write(reinterpret_cast<const char*>(bytes), sizeof(bytes));
}

void write_le32(std::ofstream& out, std::uint32_t value) {
    const unsigned char bytes[4] = {
        static_cast<unsigned char>(value & 0xff),
        static_cast<unsigned char>((value >> 8) & 0xff),
        static_cast<unsigned char>((value >> 16) & 0xff),
        static_cast<unsigned char>((value >> 24) & 0xff),
    };
    out.write(reinterpret_cast<const char*>(bytes), sizeof(bytes));
}

void write_bmp(const Frame& frame, const std::string& path) {
    std::ofstream out(path, std::ios::binary);
    if (!out) {
        throw std::runtime_error("cannot write BMP: " + path);
    }

    const std::uint32_t row_stride = static_cast<std::uint32_t>((frame.width * 3 + 3) & ~3);
    const std::uint32_t pixel_bytes = row_stride * static_cast<std::uint32_t>(frame.height);
    const std::uint32_t header_bytes = 14 + 40;
    const unsigned char zero[3] = {0, 0, 0};

    out.put('B');
    out.put('M');
    write_le32(out, header_bytes + pixel_bytes);
    write_le16(out, 0);
    write_le16(out, 0);
    write_le32(out, header_bytes);

    write_le32(out, 40);
    write_le32(out, static_cast<std::uint32_t>(frame.width));
    write_le32(out, static_cast<std::uint32_t>(frame.height));
    write_le16(out, 1);
    write_le16(out, 24);
    write_le32(out, 0);
    write_le32(out, pixel_bytes);
    write_le32(out, 2835);
    write_le32(out, 2835);
    write_le32(out, 0);
    write_le32(out, 0);

    for (int y = frame.height - 1; y >= 0; --y) {
        for (int x = 0; x < frame.width; ++x) {
            const std::uint32_t pixel = frame.at(x, y);
            const unsigned char bgr[3] = {
                static_cast<unsigned char>(pixel & 0xff),
                static_cast<unsigned char>((pixel >> 8) & 0xff),
                static_cast<unsigned char>((pixel >> 16) & 0xff),
            };
            out.write(reinterpret_cast<const char*>(bgr), sizeof(bgr));
        }
        const std::uint32_t padding = row_stride - static_cast<std::uint32_t>(frame.width * 3);
        out.write(reinterpret_cast<const char*>(zero), padding);
    }
}

void tick(VerilatedContext& context, Vmycore& top) {
    top.clk = 0;
    top.eval();
    context.timeInc(1);
    top.clk = 1;
    top.eval();
    context.timeInc(1);
}

void load_bootrom_into_core(VerilatedContext& context, Vmycore& top, const std::vector<std::uint16_t>& words) {
    top.reset = 1;
    top.bootrom_loaded = 0;
    top.bootrom_wr = 0;
    top.bootrom_addr = 0;
    top.bootrom_data = 0;

    for (int i = 0; i < 8; ++i) tick(context, top);

    for (std::size_t i = 0; i < words.size(); ++i) {
        top.bootrom_addr = static_cast<vluint32_t>(i & 0x1ffffU);
        top.bootrom_data = words[i];
        top.bootrom_wr = 1;
        tick(context, top);
    }

    top.bootrom_wr = 0;
    top.bootrom_loaded = 1;
    for (int i = 0; i < 8; ++i) tick(context, top);
    top.reset = 0;
}

#ifdef HARVOS_WITH_SDL
class SdlOutput {
public:
    ~SdlOutput() {
        if (texture_) SDL_DestroyTexture(texture_);
        if (renderer_) SDL_DestroyRenderer(renderer_);
        if (window_) SDL_DestroyWindow(window_);
        if (initialized_) SDL_Quit();
    }

    void present(const Frame& frame) {
        if (!initialized_) {
            if (SDL_Init(SDL_INIT_VIDEO) != 0) {
                throw std::runtime_error(std::string("SDL_Init failed: ") + SDL_GetError());
            }
            initialized_ = true;
            window_ = SDL_CreateWindow(
                "HarvOS Verilator HDMI",
                SDL_WINDOWPOS_CENTERED,
                SDL_WINDOWPOS_CENTERED,
                std::max(1, frame.width * 2),
                std::max(1, frame.height * 2),
                SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
            renderer_ = SDL_CreateRenderer(window_, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
            if (!window_ || !renderer_) {
                throw std::runtime_error(std::string("SDL window creation failed: ") + SDL_GetError());
            }
        }

        if (!texture_ || tex_w_ != frame.width || tex_h_ != frame.height) {
            if (texture_) SDL_DestroyTexture(texture_);
            texture_ = SDL_CreateTexture(
                renderer_,
                SDL_PIXELFORMAT_ARGB8888,
                SDL_TEXTUREACCESS_STREAMING,
                frame.width,
                frame.height);
            if (!texture_) {
                throw std::runtime_error(std::string("SDL texture creation failed: ") + SDL_GetError());
            }
            tex_w_ = frame.width;
            tex_h_ = frame.height;
        }

        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                throw std::runtime_error("SDL window closed");
            }
        }

        argb_.resize(frame.pixels.size());
        for (std::size_t i = 0; i < frame.pixels.size(); ++i) {
            argb_[i] = 0xff000000U | frame.pixels[i];
        }
        SDL_UpdateTexture(texture_, nullptr, argb_.data(), frame.width * 4);
        SDL_RenderClear(renderer_);
        SDL_RenderCopy(renderer_, texture_, nullptr, nullptr);
        SDL_RenderPresent(renderer_);
    }

private:
    bool initialized_ = false;
    int tex_w_ = 0;
    int tex_h_ = 0;
    SDL_Window* window_ = nullptr;
    SDL_Renderer* renderer_ = nullptr;
    SDL_Texture* texture_ = nullptr;
    std::vector<std::uint32_t> argb_;
};
#endif

} // namespace

int main(int argc, char** argv) {
    try {
        VerilatedContext context;
        context.commandArgs(argc, argv);
        const Options opt = parse_args(argc, argv);

#ifndef HARVOS_WITH_SDL
        if (opt.sdl) {
            throw std::runtime_error("binary was built without SDL2 support; rebuild with scripts/run_verilator_sdl.ps1 -SDL");
        }
#endif

        const std::vector<std::uint16_t> bootrom = load_bootrom(opt.bootrom);
        Vmycore top(&context);
        top.pal = opt.pal ? 1 : 0;
        top.scandouble = opt.scandouble ? 1 : 0;

        load_bootrom_into_core(context, top, bootrom);

        HdmiSink sink;
#ifdef HARVOS_WITH_SDL
        SdlOutput sdl;
#endif
        int presented_frames = 0;
        bool prev_ce = top.ce_pix != 0;
        const std::uint64_t watchdog = opt.max_cycles
            ? opt.max_cycles
            : (200000ULL + static_cast<std::uint64_t>(opt.frames) * (opt.pal ? 900000ULL : 700000ULL));

        std::uint64_t cycles = 0;
        while (!context.gotFinish() && sink.frames() < opt.frames && cycles < watchdog) {
            prev_ce = top.ce_pix != 0;
            tick(context, top);
            ++cycles;

            const bool cur_ce = top.ce_pix != 0;
            const bool sample_enable = opt.scandouble ? cur_ce : (prev_ce && !cur_ce);
            const bool de = !(top.HBlank || top.VBlank);
            sink.sample(
                sample_enable,
                de,
                top.VBlank != 0,
                static_cast<std::uint8_t>(top.video_r),
                static_cast<std::uint8_t>(top.video_g),
                static_cast<std::uint8_t>(top.video_b));

            if (sink.frames() > presented_frames) {
#ifdef HARVOS_WITH_SDL
                if (opt.sdl) {
                    sdl.present(sink.last_frame());
                }
#endif
                presented_frames = sink.frames();
            }
        }

        top.final();

        if (sink.frames() < opt.frames) {
            std::ostringstream oss;
            oss << "watchdog expired after " << cycles << " cycles, frames="
                << sink.frames() << "/" << opt.frames;
            throw std::runtime_error(oss.str());
        }

        const Frame& frame = sink.last_frame();
        const Validation validation = validate_boot_image(frame, bootrom, opt.pal, opt.scandouble);
        write_ppm(frame, opt.ppm);
        if (!opt.bmp.empty()) {
            write_bmp(frame, opt.bmp);
        }

        std::cout << "frames=" << sink.frames()
                  << " visible=" << frame.width << "x" << frame.height
                  << " checksum=0x" << std::hex << fnv1a64(frame) << std::dec
                  << " boot_match=" << validation.matches << "/" << validation.samples
                  << " ratio=" << std::fixed << std::setprecision(3) << validation.ratio
                  << " x_shift=" << validation.x_shift
                  << " y_shift=" << validation.y_shift
                  << " ppm=" << opt.ppm;
        if (!opt.bmp.empty()) {
            std::cout << " bmp=" << opt.bmp;
        }
        std::cout << "\n";

        if (!validation.ok) {
            throw std::runtime_error(validation.message);
        }
        return 0;
    } catch (const std::exception& ex) {
        std::cerr << "harvos_video_tb: " << ex.what() << "\n";
        return 1;
    }
}
