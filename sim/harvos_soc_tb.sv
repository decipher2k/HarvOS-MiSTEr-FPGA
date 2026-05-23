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
	logic [31:0] debug_word0;
	logic [31:0] debug_word1;
	logic [31:0] debug_word2;
	logic [31:0] debug_entropy;
	logic debug_trap;

	always #5 clk = ~clk;

	harvos_soc dut (
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

	initial begin
		repeat(8) @(posedge clk);
		reset <= 1'b0;
		repeat(1200) @(posedge clk);
		if(debug_word0 !== 32'd12) begin
			$fatal(1, "ALU/load-store self-test failed: %08x", debug_word0);
		end
		if(debug_trap) begin
			$fatal(1, "Unexpected trap: scause=%08x stval=%08x", debug_scause, debug_stval);
		end
		$display("HarvOS SoC TB passed pc=%08x state=%08x", debug_pc, debug_state);
		$finish;
	end
endmodule
