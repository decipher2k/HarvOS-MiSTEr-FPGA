// Copyright 2025 Dennis Michael Heine

`timescale 1ns/1ps

module harvos_soc_tb;
	logic clk = 1'b0;
	logic reset = 1'b1;
	logic [31:0] debug_pc;
	logic [31:0] debug_instr;
	logic [31:0] debug_scause;
	logic [31:0] debug_stval;
	logic [31:0] debug_state;
	logic [31:0] debug_kernel_status;
	logic [31:0] debug_hps_boot_word;
	logic [31:0] debug_net_boot_word;
	logic [31:0] debug_word0;
	logic [31:0] debug_word1;
	logic [31:0] debug_word2;
	logic [31:0] debug_entropy;
	logic debug_trap;
	logic usb_dp_drive_low;
	logic usb_dm_drive_low;
	logic usb_port_power_en;
	logic [7:0] utmi_data_o;
	logic utmi_tx_valid;
	logic [1:0] utmi_xcvr_select;
	logic [1:0] utmi_op_mode;
	logic utmi_term_select;
	logic utmi_suspend_n;
	logic utmi_reset_n;
	logic net_rx_ready;
	logic net_tx_valid;
	logic [31:0] net_tx_word;
	logic net_tx_last;
	logic [31:0] hps_sd_lba[2];
	logic [5:0] hps_sd_blk_cnt[2];
	logic [1:0] hps_sd_rd;
	logic [1:0] hps_sd_wr;
	logic [15:0] hps_sd_buff_din[2];
	logic kernel_seen_nonzero;

	always #5 clk = ~clk;

	harvos_soc dut (
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
		.usb_dp_i(1'b0),
		.usb_dm_i(1'b0),
		.usb_dp_drive_low(usb_dp_drive_low),
		.usb_dm_drive_low(usb_dm_drive_low),
		.usb_port_power_en(usb_port_power_en),
		.usb_port_overcurrent_n(1'b1),
		.utmi_data_o(utmi_data_o),
		.utmi_data_i(8'h00),
		.utmi_tx_valid(utmi_tx_valid),
		.utmi_tx_ready(1'b1),
		.utmi_rx_valid(1'b0),
		.utmi_rx_active(1'b0),
		.utmi_rx_error(1'b0),
		.utmi_line_state(2'b00),
		.utmi_xcvr_select(utmi_xcvr_select),
		.utmi_op_mode(utmi_op_mode),
		.utmi_term_select(utmi_term_select),
		.utmi_suspend_n(utmi_suspend_n),
		.utmi_reset_n(utmi_reset_n),
		.net_link_up(1'b1),
		.net_rx_valid(1'b0),
		.net_rx_word(32'h0000_0000),
		.net_rx_last(1'b0),
		.net_rx_error(1'b0),
		.net_rx_ready(net_rx_ready),
		.net_tx_valid(net_tx_valid),
		.net_tx_word(net_tx_word),
		.net_tx_last(net_tx_last),
		.net_tx_ready(1'b1),
		.hps_img_mounted(2'b00),
		.hps_img_readonly(1'b0),
		.hps_img_size(64'h0000_0000_0000_0000),
		.hps_sd_lba(hps_sd_lba),
		.hps_sd_blk_cnt(hps_sd_blk_cnt),
		.hps_sd_rd(hps_sd_rd),
		.hps_sd_wr(hps_sd_wr),
		.hps_sd_ack(2'b00),
		.hps_sd_buff_addr(13'h0000),
		.hps_sd_buff_dout(16'h0000),
		.hps_sd_buff_din(hps_sd_buff_din),
		.hps_sd_buff_wr(1'b0)
	);

	initial begin
		kernel_seen_nonzero = 1'b0;
		repeat(8) @(posedge clk);
		reset <= 1'b0;
		repeat(4096) begin
			@(posedge clk);
			if(debug_kernel_status !== 32'h0000_0000) kernel_seen_nonzero = 1'b1;
		end
		if(debug_word0 !== 32'd12) begin
			$fatal(1, "ALU/load-store self-test failed: %08x", debug_word0);
		end
		if(!kernel_seen_nonzero) begin
			$fatal(1, "Kernel model did not advance");
		end
		if(debug_trap) begin
			$fatal(1, "Unexpected trap: scause=%08x stval=%08x", debug_scause, debug_stval);
		end
		$display("HarvOS SoC TB passed pc=%08x state=%08x kernel=%08x", debug_pc, debug_state, debug_kernel_status);
		$finish;
	end
endmodule
