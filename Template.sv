// Copyright 2025 Dennis Michael Heine

//============================================================================
//
//  This program is free software; you can redistribute it and/or modify it
//  under the terms of the GNU General Public License as published by the Free
//  Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope that it will be useful, but WITHOUT
//  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
//  more details.
//
//  You should have received a copy of the GNU General Public License along
//  with this program; if not, write to the Free Software Foundation, Inc.,
//  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
//============================================================================

module emu
(
	`include "sys/emu_ports.vh"
);

///////// Default values for ports not used in this core /////////

assign ADC_BUS  = 'Z;
assign USER_OUT = '1;
assign {UART_RTS, UART_TXD, UART_DTR} = 0;
assign {SD_SCK, SD_MOSI, SD_CS} = 'Z;
assign {SDRAM_DQ, SDRAM_A, SDRAM_BA, SDRAM_CLK, SDRAM_CKE, SDRAM_DQML, SDRAM_DQMH, SDRAM_nWE, SDRAM_nCAS, SDRAM_nRAS, SDRAM_nCS} = 'Z;
assign {DDRAM_CLK, DDRAM_BURSTCNT, DDRAM_ADDR, DDRAM_DIN, DDRAM_BE, DDRAM_RD, DDRAM_WE} = '0;  

assign VGA_SL = 0;
assign VGA_F1 = 0;
assign VGA_SCALER  = 0;
assign VGA_DISABLE = 0;
assign HDMI_FREEZE = 0;
assign HDMI_BLACKOUT = 0;
assign HDMI_BOB_DEINT = 0;

assign AUDIO_S = 0;
assign AUDIO_L = 0;
assign AUDIO_R = 0;
assign AUDIO_MIX = 0;

assign LED_DISK = 0;
assign LED_POWER = 0;
assign BUTTONS = 0;

//////////////////////////////////////////////////////////////////

wire [1:0] ar = status[122:121];

assign VIDEO_ARX = (!ar) ? 12'd4 : (ar - 1'd1);
assign VIDEO_ARY = (!ar) ? 12'd3 : 12'd0;

`include "build_id.v" 
localparam CONF_STR = {
	"HarvOS;;",
	"F,HBR,Load Boot ROM;",
	"-;",
	"O[122:121],Aspect ratio,Original,Full Screen,[ARC1],[ARC2];",
	"O[2],TV Mode,NTSC,PAL;",
	"-;",
	"T[0],Reset;",
	"R[0],Reset and close OSD;",
	"v,0;", // [optional] config version 0-99. 
	        // If CONF_STR options are changed in incompatible way, then change version number too,
			  // so all options will get default values on first start.
	"V,v",`BUILD_DATE 
};

wire forced_scandoubler;
wire clk_sys;
wire   [1:0] buttons;
wire [127:0] status;
wire  [10:0] ps2_key;
wire        ioctl_download;
wire [15:0] ioctl_index;
wire        ioctl_wr;
wire [26:0] ioctl_addr;
wire [15:0] ioctl_dout;
wire [31:0] ioctl_file_ext;

hps_io #(.CONF_STR(CONF_STR), .WIDE(1)) hps_io
(
	.clk_sys(clk_sys),
	.HPS_BUS(HPS_BUS),
	.EXT_BUS(),
	.gamma_bus(),

	.forced_scandoubler(forced_scandoubler),

	.buttons(buttons),
	.status(status),
	.status_menumask(1'b0),
	
	.ps2_key(ps2_key),

	.ioctl_download(ioctl_download),
	.ioctl_index(ioctl_index),
	.ioctl_wr(ioctl_wr),
	.ioctl_addr(ioctl_addr),
	.ioctl_dout(ioctl_dout),
	.ioctl_upload_req(1'b0),
	.ioctl_upload_index(8'd0),
	.ioctl_din(16'h0000),
	.ioctl_file_ext(ioctl_file_ext),
	.ioctl_wait(1'b0)
);

///////////////////////   CLOCKS   ///////////////////////////////

pll pll
(
	.refclk(CLK_50M),
	.rst(0),
	.outclk_0(clk_sys)
);

wire reset = RESET | status[0] | buttons[1];
localparam logic [17:0] BOOTROM_PIXELS_COUNT = 18'd103680;
localparam logic [26:0] BOOTRAM_WORDS_U  = 27'd131072;

reg ioctl_download_d = 1'b0;
reg bootrom_active   = 1'b0;
reg bootrom_bad      = 1'b0;
reg bootrom_loaded   = 1'b0;
reg [17:0] bootrom_words_seen = 18'd0;

wire        bootrom_selected = (ioctl_index == 16'd0);
wire [26:0] ioctl_word_addr = {1'b0, ioctl_addr[26:1]};
wire        bootrom_wr = bootrom_selected && ioctl_download && ioctl_wr && (ioctl_word_addr < BOOTRAM_WORDS_U);
wire [16:0] bootrom_addr = ioctl_addr[17:1];
wire [15:0] bootrom_data = ioctl_dout;

always @(posedge clk_sys) begin
	ioctl_download_d <= ioctl_download;

	if(ioctl_download && !ioctl_download_d) begin
		bootrom_active     <= bootrom_selected;
		bootrom_bad        <= 1'b0;
		bootrom_loaded     <= 1'b0;
		bootrom_words_seen <= 18'd0;
	end else if(!ioctl_download && ioctl_download_d) begin
		bootrom_loaded <= bootrom_active && !bootrom_bad &&
		                  (bootrom_words_seen == BOOTROM_PIXELS_COUNT);
		bootrom_active <= 1'b0;
	end

	if(bootrom_wr) begin
		if((bootrom_words_seen < BOOTROM_PIXELS_COUNT) &&
		   ({1'b0, bootrom_addr} == bootrom_words_seen)) begin
			bootrom_words_seen <= bootrom_words_seen + 18'd1;
		end else begin
			bootrom_bad <= 1'b1;
		end
	end
end

wire HBlank;
wire HSync;
wire VBlank;
wire VSync;
wire ce_pix;
wire [7:0] video_r;
wire [7:0] video_g;
wire [7:0] video_b;

mycore mycore
(
	.clk(clk_sys),
	.reset(reset),
	
	.pal(status[2]),
	.scandouble(forced_scandoubler),
	.bootrom_wr(bootrom_wr),
	.bootrom_addr(bootrom_addr),
	.bootrom_data(bootrom_data),
	.bootrom_loaded(bootrom_loaded),

	.ce_pix(ce_pix),

	.HBlank(HBlank),
	.HSync(HSync),
	.VBlank(VBlank),
	.VSync(VSync),

	.video_r(video_r),
	.video_g(video_g),
	.video_b(video_b)
);

assign CLK_VIDEO = clk_sys;
assign CE_PIXEL = ce_pix;

assign VGA_DE = ~(HBlank | VBlank);
assign VGA_HS = HSync;
assign VGA_VS = VSync;
assign VGA_R  = video_r;
assign VGA_G  = video_g;
assign VGA_B  = video_b;

reg  [26:0] act_cnt;
always @(posedge clk_sys) act_cnt <= act_cnt + 1'd1; 
assign LED_USER    = act_cnt[26]  ? act_cnt[25:18]  > act_cnt[7:0]  : act_cnt[25:18]  <= act_cnt[7:0];

endmodule
