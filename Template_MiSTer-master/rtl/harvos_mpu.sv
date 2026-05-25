// Copyright 2025 Dennis Michael Heine

import harvos_pkg::*;

module harvos_mpu
#(
	parameter int I_ROM_BYTES = 1024,
	parameter logic [31:0] D_RAM_BASE = 32'h0000_0400,
	parameter int D_RAM_BYTES = 4096,
	parameter logic [31:0] MMIO_BASE = 32'hFFFF_0000,
	parameter int MMIO_BYTES = 256
)
(
	input  logic        fetch,
	input  logic        load,
	input  logic        store,
	input  logic        user_mode,
	input  logic [31:0] addr,
	input  logic        lock,

	output logic        allow,
	output logic        mmio,
	output logic [31:0] cause
);

	logic in_irom;
	logic in_dram;
	logic in_mmio;

	assign in_irom = (addr < I_ROM_BYTES);
	assign in_dram = (addr >= D_RAM_BASE) && (addr < (D_RAM_BASE + D_RAM_BYTES));
	assign in_mmio = (addr >= MMIO_BASE) && (addr < (MMIO_BASE + MMIO_BYTES));

	always_comb begin
		allow = 1'b0;
		mmio  = 1'b0;
		cause = SCAUSE_ILLEGAL_INSTRUCTION;

		if(fetch) begin
			if(in_irom && lock) begin
				allow = 1'b1;
				cause = 32'h0;
			end else if(in_dram) begin
				cause = SCAUSE_HARVARD_VIOLATION;
			end else begin
				cause = SCAUSE_INST_ACCESS_FAULT;
			end
		end else if(load || store) begin
			if(in_dram) begin
				allow = 1'b1;
				cause = 32'h0;
			end else if(in_irom) begin
				cause = SCAUSE_HARVARD_VIOLATION;
			end else if(in_mmio) begin
				mmio = 1'b1;
				if(!user_mode) begin
					allow = 1'b1;
					cause = 32'h0;
				end else begin
					cause = load ? SCAUSE_LOAD_ACCESS_FAULT : SCAUSE_STORE_ACCESS_FAULT;
				end
			end else begin
				cause = load ? SCAUSE_LOAD_ACCESS_FAULT : SCAUSE_STORE_ACCESS_FAULT;
			end
		end
	end
endmodule
