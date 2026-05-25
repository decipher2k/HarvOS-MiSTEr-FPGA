// Copyright 2025 Dennis Michael Heine

module mycore
(
	input         clk,
	input         reset,

	input         pal,
	input         scandouble,
	input         bootrom_wr,
	input  [16:0] bootrom_addr,
	input  [15:0] bootrom_data,
	input         bootrom_loaded,
	input         usb_dp_i,
	input         usb_dm_i,
	output        usb_dp_drive_low,
	output        usb_dm_drive_low,
	output        usb_port_power_en,
	input         usb_port_overcurrent_n,
	output [7:0]  utmi_data_o,
	input  [7:0]  utmi_data_i,
	output        utmi_tx_valid,
	input         utmi_tx_ready,
	input         utmi_rx_valid,
	input         utmi_rx_active,
	input         utmi_rx_error,
	input  [1:0]  utmi_line_state,
	output [1:0]  utmi_xcvr_select,
	output [1:0]  utmi_op_mode,
	output        utmi_term_select,
	output        utmi_suspend_n,
	output        utmi_reset_n,
	input         net_link_up,
	input         net_rx_valid,
	input  [31:0] net_rx_word,
	input         net_rx_last,
	input         net_rx_error,
	output        net_rx_ready,
	output        net_tx_valid,
	output [31:0] net_tx_word,
	output        net_tx_last,
	input         net_tx_ready,
	input  [1:0]  hps_img_mounted,
	input         hps_img_readonly,
	input  [63:0] hps_img_size,
	output [31:0] hps_sd_lba[2],
	output [5:0]  hps_sd_blk_cnt[2],
	output [1:0]  hps_sd_rd,
	output [1:0]  hps_sd_wr,
	input  [1:0]  hps_sd_ack,
	input  [12:0] hps_sd_buff_addr,
	input  [15:0] hps_sd_buff_dout,
	output [15:0] hps_sd_buff_din[2],
	input         hps_sd_buff_wr,

	output        ce_pix,

	output        HBlank,
	output        HSync,
	output        VBlank,
	output        VSync,

	output [7:0]  video_r,
	output [7:0]  video_g,
	output [7:0]  video_b
);

	wire [31:0] debug_pc;
	wire [31:0] debug_instr;
	wire [31:0] debug_scause;
	wire [31:0] debug_stval;
	wire [31:0] debug_state;
	wire [31:0] debug_kernel_status;
	wire [31:0] debug_hps_boot_word;
	wire [31:0] debug_net_boot_word;
	wire [31:0] debug_word0;
	wire [31:0] debug_word1;
	wire [31:0] debug_word2;
	wire [31:0] debug_entropy;
	wire        debug_trap;

	harvos_soc soc
	(
		.clk(clk),
		.reset(reset),
		.debug_pc(debug_pc),
		.debug_instr(debug_instr),
		.debug_scause(debug_scause),
		.debug_stval(debug_stval),
		.debug_state(debug_state),
		.debug_kernel_status(debug_kernel_status),
		.debug_hps_boot_word(debug_hps_boot_word),
		.debug_net_boot_word(debug_net_boot_word),
		.debug_word0(debug_word0),
		.debug_word1(debug_word1),
		.debug_word2(debug_word2),
		.debug_entropy(debug_entropy),
		.debug_trap(debug_trap),
		.usb_dp_i(usb_dp_i),
		.usb_dm_i(usb_dm_i),
		.usb_dp_drive_low(usb_dp_drive_low),
		.usb_dm_drive_low(usb_dm_drive_low),
		.usb_port_power_en(usb_port_power_en),
		.usb_port_overcurrent_n(usb_port_overcurrent_n),
		.utmi_data_o(utmi_data_o),
		.utmi_data_i(utmi_data_i),
		.utmi_tx_valid(utmi_tx_valid),
		.utmi_tx_ready(utmi_tx_ready),
		.utmi_rx_valid(utmi_rx_valid),
		.utmi_rx_active(utmi_rx_active),
		.utmi_rx_error(utmi_rx_error),
		.utmi_line_state(utmi_line_state),
		.utmi_xcvr_select(utmi_xcvr_select),
		.utmi_op_mode(utmi_op_mode),
		.utmi_term_select(utmi_term_select),
		.utmi_suspend_n(utmi_suspend_n),
		.utmi_reset_n(utmi_reset_n),
		.net_link_up(net_link_up),
		.net_rx_valid(net_rx_valid),
		.net_rx_word(net_rx_word),
		.net_rx_last(net_rx_last),
		.net_rx_error(net_rx_error),
		.net_rx_ready(net_rx_ready),
		.net_tx_valid(net_tx_valid),
		.net_tx_word(net_tx_word),
		.net_tx_last(net_tx_last),
		.net_tx_ready(net_tx_ready),
		.hps_img_mounted(hps_img_mounted),
		.hps_img_readonly(hps_img_readonly),
		.hps_img_size(hps_img_size),
		.hps_sd_lba(hps_sd_lba),
		.hps_sd_blk_cnt(hps_sd_blk_cnt),
		.hps_sd_rd(hps_sd_rd),
		.hps_sd_wr(hps_sd_wr),
		.hps_sd_ack(hps_sd_ack),
		.hps_sd_buff_addr(hps_sd_buff_addr),
		.hps_sd_buff_dout(hps_sd_buff_dout),
		.hps_sd_buff_din(hps_sd_buff_din),
		.hps_sd_buff_wr(hps_sd_buff_wr)
	);

	harvos_video video
	(
		.clk(clk),
		.reset(reset),
		.pal(pal),
		.scandouble(scandouble),
		.bootrom_wr(bootrom_wr),
		.bootrom_addr(bootrom_addr),
		.bootrom_data(bootrom_data),
		.bootrom_loaded(bootrom_loaded),
		.debug_pc(debug_pc),
		.debug_instr(debug_instr),
		.debug_scause(debug_scause),
		.debug_stval(debug_stval),
		.debug_state(debug_state),
		.debug_word0(debug_word0),
		.debug_word1(debug_word1),
		.debug_word2(debug_word2),
		.debug_entropy(debug_entropy),
		.debug_trap(debug_trap),
		.ce_pix(ce_pix),
		.HBlank(HBlank),
		.HSync(HSync),
		.VBlank(VBlank),
		.VSync(VSync),
		.video_r(video_r),
		.video_g(video_g),
		.video_b(video_b)
	);
endmodule
