// Copyright 2025 Dennis Michael Heine

import harvos_pkg::*;

module harvos_soc
#(
	parameter int IMEM_WORDS = 256,
	parameter logic [31:0] D_RAM_BASE = 32'h0000_0400,
	parameter int DMEM_WORDS = 1024,
	parameter logic [31:0] MMIO_BASE = 32'hFFFF_0000,
	parameter bit APP_ECALL_NO_TRAP = 1'b0,
	parameter bit ENABLE_DEMO_DMA = 1'b1
)
(
	input  logic        clk,
	input  logic        reset,

	output logic [31:0] debug_pc,
	output logic [31:0] debug_instr,
	output logic [31:0] debug_scause,
	output logic [31:0] debug_stval,
	output logic [31:0] debug_state,
	output logic [31:0] debug_kernel_status,
	output logic [31:0] debug_hps_boot_word,
	output logic [31:0] debug_net_boot_word,
	output logic [31:0] debug_word0,
	output logic [31:0] debug_word1,
	output logic [31:0] debug_word2,
	output logic [31:0] debug_entropy,
	output logic        debug_trap,

	input  logic        usb_dp_i,
	input  logic        usb_dm_i,
	output logic        usb_dp_drive_low,
	output logic        usb_dm_drive_low,
	output logic        usb_port_power_en,
	input  logic        usb_port_overcurrent_n,

	output logic [7:0]  utmi_data_o,
	input  logic [7:0]  utmi_data_i,
	output logic        utmi_tx_valid,
	input  logic        utmi_tx_ready,
	input  logic        utmi_rx_valid,
	input  logic        utmi_rx_active,
	input  logic        utmi_rx_error,
	input  logic [1:0]  utmi_line_state,
	output logic [1:0]  utmi_xcvr_select,
	output logic [1:0]  utmi_op_mode,
	output logic        utmi_term_select,
	output logic        utmi_suspend_n,
	output logic        utmi_reset_n,

	input  logic        net_link_up,
	input  logic        net_rx_valid,
	input  logic [31:0] net_rx_word,
	input  logic        net_rx_last,
	input  logic        net_rx_error,
	output logic        net_rx_ready,
	output logic        net_tx_valid,
	output logic [31:0] net_tx_word,
	output logic        net_tx_last,
	input  logic        net_tx_ready,

	input  logic [1:0]  hps_img_mounted,
	input  logic        hps_img_readonly,
	input  logic [63:0] hps_img_size,
	output logic [31:0] hps_sd_lba[2],
	output logic [5:0]  hps_sd_blk_cnt[2],
	output logic [1:0]  hps_sd_rd,
	output logic [1:0]  hps_sd_wr,
	input  logic [1:0]  hps_sd_ack,
	input  logic [12:0] hps_sd_buff_addr,
	input  logic [15:0] hps_sd_buff_dout,
	output logic [15:0] hps_sd_buff_din[2],
	input  logic        hps_sd_buff_wr
);

	localparam int IMEM_AW = $clog2(IMEM_WORDS);
	localparam int DMEM_AW = $clog2(DMEM_WORDS);
	localparam logic [31:0] NOP = 32'h0000_0013;
	localparam logic [31:0] CPU1_RESET_VECTOR = 32'h0000_00C0;
	localparam logic [31:0] D_RAM_LIMIT = D_RAM_BASE + (DMEM_WORDS * 4);
	localparam logic [31:0] DMA_WINDOW_BASE = D_RAM_BASE + 32'h0000_0100;
	localparam int DMA_WINDOW_BYTES = 2048;
	localparam logic [255:0] BOOT_IMAGE_HASH =
		256'h54e70887c7068d8afbc2542b32e61245e9d6efb7429cbf1ae14afd44c6c24a9d;
	localparam logic [255:0] BOOT_PUBLIC_KEY_HASH =
		256'hbd7a0499dd41743eafe0299ebb6056de3bb6fa804a8e05d5a86b1a2e43a03785;
	localparam logic [255:0] BOOT_SIGNATURE =
		256'h89d7f25a9038eb8eb726f8f2b21d371d93e0381ed31e45e2e859083063fd873e;

	logic [31:0] imem [0:IMEM_WORDS-1];
	logic [31:0] dmem [0:DMEM_WORDS-1];

	logic boot_ok;
	logic boot_mpu_lock;
	logic [31:0] boot_status;
	logic cpu_reset;

	logic [31:0] i_addr0;
	logic [31:0] i_addr1;
	logic [31:0] i_rdata0;
	logic [31:0] i_rdata1;

	logic        d_req0;
	logic        d_we0;
	logic [31:0] d_addr0;
	logic [31:0] d_wdata0;
	logic [3:0]  d_be0;
	logic [31:0] d_rdata0;
	logic        d_ready0;

	logic        d_req1;
	logic        d_we1;
	logic [31:0] d_addr1;
	logic [31:0] d_wdata1;
	logic [3:0]  d_be1;
	logic [31:0] d_rdata1;
	logic        d_ready1;
	logic [31:0] fetch_pt_l1_addr0;
	logic [31:0] fetch_pt_l0_addr0;
	logic [31:0] fetch_pt_l1_rdata0;
	logic [31:0] fetch_pt_l0_rdata0;
	logic [31:0] data_pt_l1_addr0;
	logic [31:0] data_pt_l0_addr0;
	logic [31:0] data_pt_l1_rdata0;
	logic [31:0] data_pt_l0_rdata0;
	logic [31:0] fetch_pt_l1_addr1;
	logic [31:0] fetch_pt_l0_addr1;
	logic [31:0] fetch_pt_l1_rdata1;
	logic [31:0] fetch_pt_l0_rdata1;
	logic [31:0] data_pt_l1_addr1;
	logic [31:0] data_pt_l0_addr1;
	logic [31:0] data_pt_l1_rdata1;
	logic [31:0] data_pt_l0_rdata1;

	logic        bus_req;
	logic        bus_we;
	logic [31:0] bus_addr;
	logic [31:0] bus_wdata;
	logic [3:0]  bus_be;
	logic [31:0] bus_rdata;

	logic [31:0] debug_pc0;
	logic [31:0] debug_instr0;
	logic [31:0] debug_scause0;
	logic [31:0] debug_stval0;
	logic [31:0] debug_state0;
	logic        debug_trap0;

	logic [31:0] debug_pc1;
	logic [31:0] debug_instr1;
	logic [31:0] debug_scause1;
	logic [31:0] debug_stval1;
	logic [31:0] debug_state1;
	logic        debug_trap1;
	logic [31:0] debug_a0_unused;
	logic [31:0] debug_a1_unused;

	logic [31:0] entropy_lfsr;
	logic [31:0] mmio_out;
	logic [15:0] dma_tick;
	logic [31:0] dma_addr;
	logic [31:0] dma_wdata;
	logic [31:0] dma_rdata;
	logic [15:0] dma_len;
	logic [31:0] dma_status;
	logic        dma_req;
	logic        dma_we;
	logic        dma_allow;
	logic        dma_fault;
	logic        demo_dma_req;
	logic [31:0] demo_dma_addr;
	logic [31:0] demo_dma_wdata;
	logic        usb_irq;
	logic        usb_dma_req;
	logic        usb_dma_we;
	logic [31:0] usb_dma_addr;
	logic [15:0] usb_dma_len;
	logic [31:0] usb_dma_wdata;
	logic        usb_dma_allow;
	logic        usb_dma_fault;
	logic [31:0] usb_mmio_rdata;
	logic [31:0] usb_status;
	logic        net_irq;
	logic        net_dma_req;
	logic        net_dma_we;
	logic [31:0] net_dma_addr;
	logic [15:0] net_dma_len;
	logic [31:0] net_dma_wdata;
	logic        net_dma_allow;
	logic        net_dma_fault;
	logic [31:0] net_mmio_rdata;
	logic [31:0] net_status;
	logic [31:0] hps_block_mmio_rdata;
	logic [31:0] hps_block_status;
	logic [31:0] imem_loader_mmio_rdata;
	logic [31:0] imem_loader_status;
	logic        imem_loader_wr;
	logic [31:0] imem_loader_addr;
	logic [31:0] imem_loader_wdata;
	logic        l1_hit0;
	logic        l1_hit1;
	logic        l2_hit;
	logic [31:0] l1_status0;
	logic [31:0] l1_status1;
	logic [31:0] l2_status;
	logic        coh_invalidate;
	logic [31:0] coh_status;
	logic [1:0]  kernel_task;
	logic        kernel_allow;
	logic        kernel_policy_fault;
	logic [3:0]  kernel_ipc_depth;
	logic [31:0] kernel_status;
	logic [31:0] trace_digest;
	logic [15:0] trace_count;
	logic        trace_event;
	logic [7:0]  trace_code;
	logic [31:0] ddr_probe_rdata;
	logic        ddr_probe_ready;
	logic [31:0] ddr_probe_addr;
	logic [31:0] ddr_probe_wdata;
	logic        ddr_probe_we;

	wire [IMEM_AW-1:0] i_index0 = i_addr0[IMEM_AW+1:2];
	wire [IMEM_AW-1:0] i_index1 = i_addr1[IMEM_AW+1:2];
	wire               i_in_range0 = (i_addr0[31:2] < IMEM_WORDS);
	wire               i_in_range1 = (i_addr1[31:2] < IMEM_WORDS);
	wire [31:0]        d_offset = bus_addr - D_RAM_BASE;
	wire [DMEM_AW-1:0] d_index = d_offset[DMEM_AW+1:2];
	wire               d_in_range = (bus_addr >= D_RAM_BASE) && (bus_addr < D_RAM_LIMIT);
	wire               d_is_mmio  = (bus_addr >= MMIO_BASE) && (bus_addr < (MMIO_BASE + 32'd256));
	wire               d_is_imem_loader_mmio = d_is_mmio && (bus_addr[7:4] == 4'h3);
	wire               d_is_net_mmio = d_is_mmio && (bus_addr[7:6] == 2'b01);
	wire               d_is_usb_mmio = d_is_mmio && (bus_addr[7:6] == 2'b10);
	wire               d_is_hps_block_mmio = d_is_mmio && (bus_addr[7:6] == 2'b11);
	wire [IMEM_AW-1:0] imem_loader_index = imem_loader_addr[IMEM_AW+1:2];
	wire [31:0]        dma_offset = dma_addr - D_RAM_BASE;
	wire [DMEM_AW-1:0] dma_index = dma_offset[DMEM_AW+1:2];

	assign cpu_reset = reset | !boot_ok;

	function automatic logic [31:0] enc_r(
		input logic [6:0] f7,
		input logic [4:0] rs2,
		input logic [4:0] rs1,
		input logic [2:0] f3,
		input logic [4:0] rd
	);
		enc_r = {f7, rs2, rs1, f3, rd, OPC_OP};
	endfunction

	function automatic logic [31:0] enc_i(
		input logic signed [11:0] imm,
		input logic [4:0] rs1,
		input logic [2:0] f3,
		input logic [4:0] rd,
		input logic [6:0] opc
	);
		enc_i = {imm[11:0], rs1, f3, rd, opc};
	endfunction

	function automatic logic [31:0] enc_s(
		input logic signed [11:0] imm,
		input logic [4:0] rs2,
		input logic [4:0] rs1,
		input logic [2:0] f3
	);
		enc_s = {imm[11:5], rs2, rs1, f3, imm[4:0], OPC_STORE};
	endfunction

	function automatic logic [31:0] enc_b(
		input logic signed [12:0] imm,
		input logic [4:0] rs1,
		input logic [4:0] rs2,
		input logic [2:0] f3
	);
		enc_b = {imm[12], imm[10:5], rs2, rs1, f3, imm[4:1], imm[11], OPC_BRANCH};
	endfunction

	function automatic logic [31:0] enc_j(
		input logic signed [20:0] imm,
		input logic [4:0] rd
	);
		enc_j = {imm[20], imm[10:1], imm[11], imm[19:12], rd, OPC_JAL};
	endfunction

	function automatic logic [31:0] enc_u(
		input logic [31:12] imm,
		input logic [4:0] rd,
		input logic [6:0] opc
	);
		enc_u = {imm, rd, opc};
	endfunction

	function automatic logic [31:0] enc_custom(
		input logic [2:0] f3,
		input logic [4:0] rd,
		input logic [4:0] rs1,
		input logic [4:0] rs2
	);
		enc_custom = {7'b0000000, rs2, rs1, f3, rd, OPC_CUSTOM0};
	endfunction

	function automatic logic [31:0] apply_wstrb(
		input logic [31:0] old_word,
		input logic [31:0] new_word,
		input logic [3:0]  be
	);
		begin
			apply_wstrb = old_word;
			if(be[0]) apply_wstrb[7:0]   = new_word[7:0];
			if(be[1]) apply_wstrb[15:8]  = new_word[15:8];
			if(be[2]) apply_wstrb[23:16] = new_word[23:16];
			if(be[3]) apply_wstrb[31:24] = new_word[31:24];
		end
	endfunction

	function automatic logic [31:0] dmem_read_pt(input logic [31:0] addr);
		logic [31:0] off;
		logic [DMEM_AW-1:0] idx;
		begin
			off = addr - D_RAM_BASE;
			idx = off[DMEM_AW+1:2];
			if((addr >= D_RAM_BASE) && (addr < D_RAM_LIMIT) && (addr[1:0] == 2'b00)) begin
				dmem_read_pt = dmem[idx];
			end else begin
				dmem_read_pt = 32'h0000_0000;
			end
		end
	endfunction

	integer init_i;
	string imem_init_file;
	string dmem_init_file;
	bit external_imem_init;
	initial begin
		for(init_i = 0; init_i < IMEM_WORDS; init_i = init_i + 1) imem[init_i] = NOP;
		for(init_i = 0; init_i < DMEM_WORDS; init_i = init_i + 1) dmem[init_i] = 32'h0000_0000;

		external_imem_init = $value$plusargs("HARVOS_IMEM_INIT=%s", imem_init_file);
		if(external_imem_init) begin
			$readmemh(imem_init_file, imem);
		end else begin
		// Core 0: ISA/security self-test, then shared-memory heartbeat.
		imem[0]  = enc_i(12'sd1024, 5'd0, F3_ADD_SUB, 5'd1, OPC_OP_IMM);
		imem[1]  = enc_i(12'sd5,  5'd0, F3_ADD_SUB, 5'd2, OPC_OP_IMM);
		imem[2]  = enc_i(12'sd7,  5'd0, F3_ADD_SUB, 5'd3, OPC_OP_IMM);
		imem[3]  = enc_r(F7_ADD,  5'd3, 5'd2, F3_ADD_SUB, 5'd4);
		imem[4]  = enc_s(12'sd0,  5'd4, 5'd1, F3_LW_SW);
		imem[5]  = enc_i(12'sd0,  5'd1, F3_LW_SW, 5'd5, OPC_LOAD);
		imem[6]  = enc_b(13'sd8,  5'd4, 5'd5, F3_BEQ);
		imem[7]  = 32'h0010_0073;
		imem[8]  = enc_i(12'sd1,  5'd0,  F3_ADD_SUB, 5'd10, OPC_OP_IMM);
		imem[9]  = enc_i(12'sd3,  5'd10, F3_SLL,     5'd10, OPC_OP_IMM);
		imem[10] = enc_i(12'sd1,  5'd10, F3_SRL_SRA, 5'd10, OPC_OP_IMM);
		imem[11] = enc_i(12'sd4,  5'd0,  F3_ADD_SUB, 5'd11, OPC_OP_IMM);
		imem[12] = enc_b(13'sd8,  5'd10, 5'd11, F3_BEQ);
		imem[13] = 32'h0010_0073;
		imem[14] = enc_i(12'sd90, 5'd0,  F3_ADD_SUB, 5'd10, OPC_OP_IMM);
		imem[15] = enc_s(12'sd20, 5'd10, 5'd1, F3_LB_SB);
		imem[16] = enc_i(12'sd20, 5'd1,  F3_LBU,     5'd11, OPC_LOAD);
		imem[17] = enc_b(13'sd8,  5'd10, 5'd11, F3_BEQ);
		imem[18] = 32'h0010_0073;
		imem[19] = enc_i(12'sd91, 5'd0,  F3_ADD_SUB, 5'd11, OPC_OP_IMM);
		imem[20] = enc_b(13'sd8,  5'd10, 5'd11, F3_BLTU);
		imem[21] = 32'h0010_0073;
		imem[22] = enc_b(13'sd8,  5'd11, 5'd10, F3_BGEU);
		imem[23] = 32'h0010_0073;
		imem[24] = enc_i(12'sd1040, 5'd0, F3_ADD_SUB, 5'd9, OPC_OP_IMM);
		imem[25] = enc_i(12'sd4,  5'd0, F3_ADD_SUB, 5'd8, OPC_OP_IMM);
		imem[26] = enc_custom(F3_CLRMEM,  5'd0, 5'd9, 5'd8);
		imem[27] = enc_custom(F3_ENTROPY, 5'd6, 5'd0, 5'd0);
		imem[28] = enc_s(12'sd4,  5'd6, 5'd1, F3_LW_SW);
		imem[29] = enc_custom(F3_CLRREG,  5'd6, 5'd0, 5'd0);
		imem[30] = enc_i(12'sd0,  5'd0, F3_ADD_SUB, 5'd7, OPC_OP_IMM);
		imem[31] = enc_j(21'sd100, 5'd0);

		// Shared trap vector.
		imem[40] = enc_j(21'sd0, 5'd0);

		// Core 1: second hart heartbeat to exercise the SMP bus.
		imem[48] = enc_i(12'sd1036, 5'd0, F3_ADD_SUB, 5'd1, OPC_OP_IMM);
		imem[49] = enc_i(12'sd0,  5'd0, F3_ADD_SUB, 5'd7, OPC_OP_IMM);
		imem[50] = enc_i(12'sd1,  5'd7, F3_ADD_SUB, 5'd7, OPC_OP_IMM);
		imem[51] = enc_s(12'sd0,  5'd7, 5'd1, F3_LW_SW);
		imem[52] = enc_j(-21'sd8, 5'd0);

		// Core 0: minimal USB MMIO/DMA probe, HPS program-image sector read, HNET packet probe, then heartbeat.
		imem[56] = enc_u(20'hFFFF0, 5'd12, OPC_LUI);
		imem[57] = enc_i(12'sd11,   5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[58] = enc_s(12'h084,   5'd13, 5'd12, F3_LW_SW);
		imem[59] = enc_i(12'sd1,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[60] = enc_s(12'h08C,   5'd13, 5'd12, F3_LW_SW);
		imem[61] = enc_i(12'sd1280, 5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[62] = enc_s(12'h094,   5'd13, 5'd12, F3_LW_SW);
		imem[63] = enc_i(12'sd16,   5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[64] = enc_s(12'h098,   5'd13, 5'd12, F3_LW_SW);
		imem[65] = enc_i(12'sd1,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[66] = enc_s(12'h09C,   5'd13, 5'd12, F3_LW_SW);
		imem[67] = enc_i(12'h088,   5'd12, F3_LW_SW, 5'd14, OPC_LOAD);
		imem[68] = enc_i(12'sd512,  5'd14, F3_AND,     5'd14, OPC_OP_IMM);
		imem[69] = enc_b(-13'sd8,   5'd14, 5'd0,  F3_BEQ);
		imem[70] = enc_s(12'h090,   5'd13, 5'd12, F3_LW_SW);
		imem[71] = enc_i(12'sd0,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[72] = enc_s(12'h0CC,   5'd13, 5'd12, F3_LW_SW);
		imem[73] = enc_s(12'h0D0,   5'd13, 5'd12, F3_LW_SW);
		imem[74] = enc_s(12'h0D4,   5'd13, 5'd12, F3_LW_SW);
		imem[75] = enc_i(12'sd1,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[76] = enc_s(12'h0D8,   5'd13, 5'd12, F3_LW_SW);
		imem[77] = enc_i(12'sd0,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[78] = enc_s(12'h0DC,   5'd13, 5'd12, F3_LW_SW);
		imem[79] = enc_i(12'sd4,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[80] = enc_s(12'h0C4,   5'd13, 5'd12, F3_LW_SW);
		imem[81] = enc_i(12'sd1,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[82] = enc_s(12'h0C4,   5'd13, 5'd12, F3_LW_SW);
		imem[83] = enc_i(12'h0C8,   5'd12, F3_LW_SW, 5'd14, OPC_LOAD);
		imem[84] = enc_i(12'sd512,  5'd14, F3_AND,     5'd14, OPC_OP_IMM);
		imem[85] = enc_b(-13'sd8,   5'd14, 5'd0,  F3_BEQ);
		imem[86] = enc_i(12'sd0,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[87] = enc_s(12'h0DC,   5'd13, 5'd12, F3_LW_SW);
		imem[88] = enc_i(12'h0E0,   5'd12, F3_LW_SW, 5'd16, OPC_LOAD);
		imem[89] = enc_s(12'sd16,   5'd16, 5'd1,  F3_LW_SW);

		// HNET MMIO probe. The Verilator harness drives the peer endpoint.
		imem[90]  = enc_i(12'sd1,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[91]  = enc_s(12'h044,   5'd13, 5'd12, F3_LW_SW);
		imem[92]  = enc_i(12'sd1280, 5'd0,  F3_ADD_SUB, 5'd15, OPC_OP_IMM);
		imem[93]  = enc_u(20'h484E4, 5'd13, OPC_LUI);
		imem[94]  = enc_i(12'h554,   5'd13, F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[95]  = enc_s(12'sd0,    5'd13, 5'd15, F3_LW_SW);
		imem[96]  = enc_i(12'sd1,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[97]  = enc_s(12'sd4,    5'd13, 5'd15, F3_LW_SW);
		imem[98]  = enc_i(12'sd1280, 5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[99]  = enc_s(12'h060,   5'd13, 5'd12, F3_LW_SW);
		imem[100] = enc_i(12'sd8,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[101] = enc_s(12'h064,   5'd13, 5'd12, F3_LW_SW);
		imem[102] = enc_i(12'sd4,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[103] = enc_s(12'h05C,   5'd13, 5'd12, F3_LW_SW);
		imem[104] = enc_i(12'sd1,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[105] = enc_s(12'h05C,   5'd13, 5'd12, F3_LW_SW);
		imem[106] = enc_i(12'h048,   5'd12, F3_LW_SW, 5'd14, OPC_LOAD);
		imem[107] = enc_i(12'sd512,  5'd14, F3_AND,     5'd14, OPC_OP_IMM);
		imem[108] = enc_b(-13'sd8,   5'd14, 5'd0,  F3_BEQ);
		imem[109] = enc_i(12'sd4,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[110] = enc_s(12'h05C,   5'd13, 5'd12, F3_LW_SW);
		imem[111] = enc_i(12'sd1280, 5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[112] = enc_s(12'h054,   5'd13, 5'd12, F3_LW_SW);
		imem[113] = enc_i(12'sd16,   5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[114] = enc_s(12'h058,   5'd13, 5'd12, F3_LW_SW);
		imem[115] = enc_i(12'sd2,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[116] = enc_s(12'h05C,   5'd13, 5'd12, F3_LW_SW);
		imem[117] = enc_i(12'h048,   5'd12, F3_LW_SW, 5'd14, OPC_LOAD);
		imem[118] = enc_i(12'sd512,  5'd14, F3_AND,     5'd14, OPC_OP_IMM);
		imem[119] = enc_b(-13'sd8,   5'd14, 5'd0,  F3_BEQ);
		imem[120] = enc_i(12'sd4,    5'd0,  F3_ADD_SUB, 5'd13, OPC_OP_IMM);
		imem[121] = enc_s(12'h05C,   5'd13, 5'd12, F3_LW_SW);
		imem[122] = enc_i(12'sd1,    5'd7,  F3_ADD_SUB, 5'd7,  OPC_OP_IMM);
		imem[123] = enc_s(12'sd8,    5'd7,  5'd1,  F3_LW_SW);
		imem[124] = enc_j(-21'sd8,   5'd0);
		end

		if($value$plusargs("HARVOS_DMEM_INIT=%s", dmem_init_file)) begin
			$readmemh(dmem_init_file, dmem);
		end
	end

	assign i_rdata0 = i_in_range0 ? imem[i_index0] : NOP;
	assign i_rdata1 = i_in_range1 ? imem[i_index1] : NOP;
	assign fetch_pt_l1_rdata0 = dmem_read_pt(fetch_pt_l1_addr0);
	assign fetch_pt_l0_rdata0 = dmem_read_pt(fetch_pt_l0_addr0);
	assign data_pt_l1_rdata0 = dmem_read_pt(data_pt_l1_addr0);
	assign data_pt_l0_rdata0 = dmem_read_pt(data_pt_l0_addr0);
	assign fetch_pt_l1_rdata1 = dmem_read_pt(fetch_pt_l1_addr1);
	assign fetch_pt_l0_rdata1 = dmem_read_pt(fetch_pt_l0_addr1);
	assign data_pt_l1_rdata1 = dmem_read_pt(data_pt_l1_addr1);
	assign data_pt_l0_rdata1 = dmem_read_pt(data_pt_l0_addr1);

	always_comb begin
		if(d_in_range) begin
			bus_rdata = dmem[d_index];
		end else if(d_is_imem_loader_mmio) begin
			bus_rdata = imem_loader_mmio_rdata;
		end else if(d_is_net_mmio) begin
			bus_rdata = net_mmio_rdata;
		end else if(d_is_usb_mmio) begin
			bus_rdata = usb_mmio_rdata;
		end else if(d_is_hps_block_mmio) begin
			bus_rdata = hps_block_mmio_rdata;
		end else if(d_is_mmio) begin
			case(bus_addr[7:0])
				8'h00: bus_rdata = mmio_out;
				8'h04: bus_rdata = debug_pc0;
				8'h08: bus_rdata = debug_scause0;
				8'h0C: bus_rdata = entropy_lfsr;
				8'h10: bus_rdata = debug_pc1;
				8'h14: bus_rdata = debug_scause1;
				8'h18: bus_rdata = boot_status;
				8'h1C: bus_rdata = dma_status;
				default: bus_rdata = 32'h0000_0000;
			endcase
		end else begin
			bus_rdata = 32'h0000_0000;
		end
	end

	assign demo_dma_req = ENABLE_DEMO_DMA && (dma_tick[9:0] == 10'h3FF);
	assign demo_dma_addr = DMA_WINDOW_BASE + {26'h0000000, dma_tick[5:2], 2'b00};
	assign demo_dma_wdata = entropy_lfsr ^ {16'hD00D, dma_tick};
	assign dma_req = usb_dma_req || net_dma_req || demo_dma_req;
	assign dma_we = usb_dma_req ? usb_dma_we : (net_dma_req ? net_dma_we : 1'b1);
	assign dma_addr = usb_dma_req ? usb_dma_addr : (net_dma_req ? net_dma_addr : demo_dma_addr);
	assign dma_len = usb_dma_req ? usb_dma_len : (net_dma_req ? net_dma_len : 16'd4);
	assign dma_wdata = usb_dma_req ? usb_dma_wdata : (net_dma_req ? net_dma_wdata : demo_dma_wdata);
	assign dma_rdata = dmem[dma_index];
	assign usb_dma_allow = usb_dma_req ? dma_allow : 1'b0;
	assign usb_dma_fault = usb_dma_req ? dma_fault : 1'b0;
	assign net_dma_allow = (!usb_dma_req && net_dma_req) ? dma_allow : 1'b0;
	assign net_dma_fault = (!usb_dma_req && net_dma_req) ? dma_fault : 1'b0;
	assign dma_status = {20'h00000, net_irq, net_dma_req, usb_irq, usb_dma_req,
	                     dma_fault, dma_allow, 4'h0};
	assign trace_event = bus_req || dma_req || usb_irq || net_irq ||
	                     debug_trap0 || debug_trap1 || kernel_policy_fault;
	assign trace_code = debug_trap0 ? 8'hE0 :
	                    debug_trap1 ? 8'hE1 :
	                    kernel_policy_fault ? 8'hA1 :
	                    net_irq ? 8'h4E :
	                    usb_irq ? 8'h55 :
	                    dma_req ? 8'hD0 :
	                    bus_we ? 8'h57 : 8'h52;

	always_ff @(posedge clk) begin
		if(reset) begin
			entropy_lfsr <= 32'h1ACE_B00C;
			mmio_out     <= 32'h0000_0000;
			dma_tick     <= 16'h0000;
		end else begin
			entropy_lfsr <= {entropy_lfsr[30:0],
			                 entropy_lfsr[31] ^ entropy_lfsr[21] ^
			                 entropy_lfsr[1]  ^ entropy_lfsr[0]};
			dma_tick <= dma_tick + 16'd1;

			if(bus_req && bus_we) begin
				if(d_in_range) begin
					dmem[d_index] <= apply_wstrb(dmem[d_index], bus_wdata, bus_be);
				end else if(d_is_mmio && (bus_addr[7:0] == 8'h00)) begin
					mmio_out <= apply_wstrb(mmio_out, bus_wdata, bus_be);
				end
			end

			if(dma_req && dma_allow && dma_we) begin
				dmem[dma_index] <= dma_wdata;
			end
			if(imem_loader_wr) begin
				imem[imem_loader_index] <= imem_loader_wdata;
			end
		end
	end

	harvos_imem_loader_mmio #(
		.IMEM_WORDS(IMEM_WORDS)
	) imem_loader (
		.clk(clk),
		.reset(cpu_reset),
		.mmio_req(bus_req && d_is_imem_loader_mmio),
		.mmio_we(bus_we),
		.mmio_addr(bus_addr[3:0]),
		.mmio_wdata(bus_wdata),
		.mmio_be(bus_be),
		.mmio_rdata(imem_loader_mmio_rdata),
		.imem_wr(imem_loader_wr),
		.imem_addr(imem_loader_addr),
		.imem_wdata(imem_loader_wdata),
		.status(imem_loader_status)
	);

	harvos_net_mmio #(
		.DMA_WINDOW_BASE(DMA_WINDOW_BASE),
		.DMA_WINDOW_BYTES(DMA_WINDOW_BYTES)
	) net_card (
		.clk(clk),
		.reset(cpu_reset),
		.mmio_req(bus_req && d_is_net_mmio),
		.mmio_we(bus_we),
		.mmio_addr(bus_addr[5:0]),
		.mmio_wdata(bus_wdata),
		.mmio_be(bus_be),
		.mmio_rdata(net_mmio_rdata),
		.irq(net_irq),
		.dma_req(net_dma_req),
		.dma_we(net_dma_we),
		.dma_addr(net_dma_addr),
		.dma_len(net_dma_len),
		.dma_wdata(net_dma_wdata),
		.dma_rdata(dma_rdata),
		.dma_allow(net_dma_allow),
		.dma_fault(net_dma_fault),
		.packet_link_up(net_link_up),
		.packet_rx_valid(net_rx_valid),
		.packet_rx_word(net_rx_word),
		.packet_rx_last(net_rx_last),
		.packet_rx_error(net_rx_error),
		.packet_rx_ready(net_rx_ready),
		.packet_tx_valid(net_tx_valid),
		.packet_tx_word(net_tx_word),
		.packet_tx_last(net_tx_last),
		.packet_tx_ready(net_tx_ready),
		.status(net_status)
	);

	harvos_usb_host_mmio #(
		.DMA_WINDOW_BASE(DMA_WINDOW_BASE),
		.DMA_WINDOW_BYTES(DMA_WINDOW_BYTES)
	) usb_host (
		.clk(clk),
		.reset(cpu_reset),
		.mmio_req(bus_req && d_is_usb_mmio),
		.mmio_we(bus_we),
		.mmio_addr(bus_addr[5:0]),
		.mmio_wdata(bus_wdata),
		.mmio_be(bus_be),
		.mmio_rdata(usb_mmio_rdata),
		.irq(usb_irq),
		.dma_req(usb_dma_req),
		.dma_we(usb_dma_we),
		.dma_addr(usb_dma_addr),
		.dma_len(usb_dma_len),
		.dma_wdata(usb_dma_wdata),
		.dma_allow(usb_dma_allow),
		.dma_fault(usb_dma_fault),
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
		.status(usb_status)
	);

	harvos_mister_hps_block #(
		.DRIVE_COUNT(2),
		.BUFFER_WORDS(8192)
	) hps_block (
		.clk(clk),
		.reset(cpu_reset),
		.mmio_req(bus_req && d_is_hps_block_mmio),
		.mmio_we(bus_we),
		.mmio_addr(bus_addr[5:0]),
		.mmio_wdata(bus_wdata),
		.mmio_be(bus_be),
		.mmio_rdata(hps_block_mmio_rdata),
		.img_mounted(hps_img_mounted),
		.img_readonly(hps_img_readonly),
		.img_size(hps_img_size),
		.sd_lba(hps_sd_lba),
		.sd_blk_cnt(hps_sd_blk_cnt),
		.sd_rd(hps_sd_rd),
		.sd_wr(hps_sd_wr),
		.sd_ack(hps_sd_ack),
		.sd_buff_addr(hps_sd_buff_addr),
		.sd_buff_dout(hps_sd_buff_dout),
		.sd_buff_din(hps_sd_buff_din),
		.sd_buff_wr(hps_sd_buff_wr),
		.status(hps_block_status)
	);

	harvos_secure_boot #(
		.EXPECTED_HASH(BOOT_IMAGE_HASH),
		.TRUSTED_PUBLIC_KEY_HASH(BOOT_PUBLIC_KEY_HASH),
		.EXPECTED_SIGNATURE(BOOT_SIGNATURE)
	) secure_boot (
		.clk(clk),
		.reset(reset),
		.image_hash(BOOT_IMAGE_HASH),
		.public_key_hash(BOOT_PUBLIC_KEY_HASH),
		.signature(BOOT_SIGNATURE),
		.boot_ok(boot_ok),
		.mpu_lock(boot_mpu_lock),
		.boot_status(boot_status)
	);

	harvos_cpu #(
		.I_ROM_BYTES(IMEM_WORDS * 4),
		.D_RAM_BASE(D_RAM_BASE),
		.D_RAM_BYTES(DMEM_WORDS * 4),
		.RESET_VECTOR(32'h0000_0000),
		.TRAP_VECTOR(32'h0000_00A0),
		.MMIO_BASE(MMIO_BASE),
		.ECALL_NO_TRAP(APP_ECALL_NO_TRAP)
	) cpu0 (
		.clk(clk),
		.reset(cpu_reset),
		.i_addr(i_addr0),
		.i_rdata(i_rdata0),
		.d_req(d_req0),
		.d_we(d_we0),
		.d_addr(d_addr0),
		.d_wdata(d_wdata0),
		.d_be(d_be0),
		.d_rdata(d_rdata0),
		.d_ready(d_ready0),
		.ext_irq(usb_irq | net_irq),
		.entropy_i(entropy_lfsr),
		.fetch_pt_l1_addr(fetch_pt_l1_addr0),
		.fetch_pt_l0_addr(fetch_pt_l0_addr0),
		.fetch_pt_l1_rdata(fetch_pt_l1_rdata0),
		.fetch_pt_l0_rdata(fetch_pt_l0_rdata0),
		.data_pt_l1_addr(data_pt_l1_addr0),
		.data_pt_l0_addr(data_pt_l0_addr0),
		.data_pt_l1_rdata(data_pt_l1_rdata0),
		.data_pt_l0_rdata(data_pt_l0_rdata0),
		.debug_pc(debug_pc0),
		.debug_instr(debug_instr0),
		.debug_a0(debug_a0_unused),
		.debug_a1(debug_a1_unused),
		.debug_scause(debug_scause0),
		.debug_stval(debug_stval0),
		.debug_state(debug_state0),
		.debug_trap(debug_trap0)
	);

	harvos_cpu #(
		.I_ROM_BYTES(IMEM_WORDS * 4),
		.D_RAM_BASE(D_RAM_BASE),
		.D_RAM_BYTES(DMEM_WORDS * 4),
		.RESET_VECTOR(CPU1_RESET_VECTOR),
		.TRAP_VECTOR(32'h0000_00A0),
		.MMIO_BASE(MMIO_BASE)
	) cpu1 (
		.clk(clk),
		.reset(cpu_reset),
		.i_addr(i_addr1),
		.i_rdata(i_rdata1),
		.d_req(d_req1),
		.d_we(d_we1),
		.d_addr(d_addr1),
		.d_wdata(d_wdata1),
		.d_be(d_be1),
		.d_rdata(d_rdata1),
		.d_ready(d_ready1),
		.ext_irq(1'b0),
		.entropy_i(entropy_lfsr ^ 32'h1357_9BDF),
		.fetch_pt_l1_addr(fetch_pt_l1_addr1),
		.fetch_pt_l0_addr(fetch_pt_l0_addr1),
		.fetch_pt_l1_rdata(fetch_pt_l1_rdata1),
		.fetch_pt_l0_rdata(fetch_pt_l0_rdata1),
		.data_pt_l1_addr(data_pt_l1_addr1),
		.data_pt_l0_addr(data_pt_l0_addr1),
		.data_pt_l1_rdata(data_pt_l1_rdata1),
		.data_pt_l0_rdata(data_pt_l0_rdata1),
		.debug_pc(debug_pc1),
		.debug_instr(debug_instr1),
		.debug_a0(),
		.debug_a1(),
		.debug_scause(debug_scause1),
		.debug_stval(debug_stval1),
		.debug_state(debug_state1),
		.debug_trap(debug_trap1)
	);

	harvos_smp_bus2 smp_bus (
		.clk(clk),
		.reset(cpu_reset),
		.c0_req(d_req0),
		.c0_we(d_we0),
		.c0_addr(d_addr0),
		.c0_wdata(d_wdata0),
		.c0_be(d_be0),
		.c0_rdata(d_rdata0),
		.c0_ready(d_ready0),
		.c1_req(d_req1),
		.c1_we(d_we1),
		.c1_addr(d_addr1),
		.c1_wdata(d_wdata1),
		.c1_be(d_be1),
		.c1_rdata(d_rdata1),
		.c1_ready(d_ready1),
		.m_req(bus_req),
		.m_we(bus_we),
		.m_addr(bus_addr),
		.m_wdata(bus_wdata),
		.m_be(bus_be),
		.m_rdata(bus_rdata)
	);

	harvos_l1_cache #(
		.LINES(16)
	) l1d0 (
		.clk(clk),
		.reset(cpu_reset),
		.access(d_req0 && d_ready0),
		.we(d_we0),
		.addr(d_addr0),
		.wdata(d_wdata0),
		.fill_data(d_rdata0),
		.hit(l1_hit0),
		.rdata(),
		.status(l1_status0)
	);

	harvos_l1_cache #(
		.LINES(16)
	) l1d1 (
		.clk(clk),
		.reset(cpu_reset),
		.access(d_req1 && d_ready1),
		.we(d_we1),
		.addr(d_addr1),
		.wdata(d_wdata1),
		.fill_data(d_rdata1),
		.hit(l1_hit1),
		.rdata(),
		.status(l1_status1)
	);

	harvos_l2_cache #(
		.LINES(32)
	) l2 (
		.clk(clk),
		.reset(cpu_reset),
		.access(bus_req),
		.we(bus_we),
		.addr(bus_addr),
		.hit(l2_hit),
		.status(l2_status)
	);

	harvos_coherence_dir #(
		.LINES(32)
	) coherence (
		.clk(clk),
		.reset(cpu_reset),
		.access(bus_req),
		.core_id(d_ready1),
		.we(bus_we),
		.addr(bus_addr),
		.invalidate_other(coh_invalidate),
		.status(coh_status)
	);

	harvos_kernel_model kernel_model (
		.clk(clk),
		.reset(cpu_reset),
		.tick(dma_tick[7:0] == 8'hFF),
		.syscall_valid(bus_req && d_is_mmio && (bus_addr[7:4] == 4'h2)),
		.syscall_no(bus_addr[3:0]),
		.caps(32'h0000_000F),
		.current_task(kernel_task),
		.syscall_allow(kernel_allow),
		.policy_fault(kernel_policy_fault),
		.ipc_depth(kernel_ipc_depth),
		.status(kernel_status)
	);

	harvos_trace trace (
		.clk(clk),
		.reset(reset),
		.event_valid(trace_event),
		.event_code(trace_code),
		.event_data(bus_req ? bus_addr : (dma_req ? dma_addr :
		            (net_irq ? net_status : (usb_irq ? usb_status : debug_scause)))),
		.digest(trace_digest),
		.count(trace_count)
	);

	harvos_ddr_bridge ddr_probe (
		.clk(clk),
		.reset(reset),
		.req(1'b0),
		.we(1'b0),
		.addr(32'h0000_0000),
		.wdata(32'h0000_0000),
		.rdata(ddr_probe_rdata),
		.ready(ddr_probe_ready),
		.ddr_addr(ddr_probe_addr),
		.ddr_wdata(ddr_probe_wdata),
		.ddr_we(ddr_probe_we),
		.ddr_rdata(32'h0000_0000)
	);

	harvos_dma_iommu #(
		.WINDOW_BASE(DMA_WINDOW_BASE),
		.WINDOW_BYTES(DMA_WINDOW_BYTES)
	) dma_iommu (
		.dma_req(dma_req),
		.dma_we(dma_we),
		.dma_addr(dma_addr),
		.dma_len(dma_len),
		.lock(boot_mpu_lock),
		.allow(dma_allow),
		.fault(dma_fault)
	);

	harvos_assertions #(
		.I_ROM_BYTES(IMEM_WORDS * 4),
		.D_RAM_BASE(D_RAM_BASE),
		.D_RAM_BYTES(DMEM_WORDS * 4),
		.MMIO_BASE(MMIO_BASE),
		.MMIO_BYTES(256),
		.DMA_WINDOW_BASE(DMA_WINDOW_BASE),
		.DMA_WINDOW_BYTES(DMA_WINDOW_BYTES)
	) assertions (
		.clk(clk),
		.reset(cpu_reset),
		.fetch_addr0(i_addr0),
		.fetch_addr1(i_addr1),
		.d_we(bus_req && bus_we),
		.d_addr(bus_addr),
		.dma_req(dma_req),
		.dma_allow(dma_allow),
		.dma_addr(dma_addr),
		.dma_len(dma_len)
	);

	assign debug_pc      = debug_pc0;
	assign debug_instr   = debug_instr0 ^ debug_instr1;
	assign debug_scause  = debug_scause0 ^ debug_scause1;
	assign debug_stval   = debug_stval0 ^ debug_stval1;
	assign debug_state   = debug_state0 ^ debug_state1 ^ boot_status ^ kernel_status ^
	                       {l1_hit0, l1_hit1, l2_hit, coh_invalidate, trace_count[11:0], 16'h0000} ^
	                       usb_status ^ net_status ^ hps_block_status ^ imem_loader_status;
	assign debug_kernel_status = kernel_status;
	assign debug_hps_boot_word = dmem[4];
	assign debug_net_boot_word = dmem[64];
	assign debug_word0   = dmem[0];
	assign debug_word1   = dmem[1] ^ dmem[3] ^ l1_status0 ^ l1_status1;
	assign debug_word2   = dmem[2] ^ dmem[64] ^ l2_status ^ coh_status ^ trace_digest;
	assign debug_entropy = entropy_lfsr;
	assign debug_trap    = debug_trap0 | debug_trap1 | dma_fault | kernel_policy_fault | !boot_ok;
endmodule
