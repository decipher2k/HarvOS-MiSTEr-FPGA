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
		.debug_word0(debug_word0),
		.debug_word1(debug_word1),
		.debug_word2(debug_word2),
		.debug_entropy(debug_entropy),
		.debug_trap(debug_trap)
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
