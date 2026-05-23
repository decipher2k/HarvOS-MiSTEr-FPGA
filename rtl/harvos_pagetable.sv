// Copyright 2025 Dennis Michael Heine

import harvos_pkg::*;

module harvos_pagetable
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
	input  logic [31:0] vaddr,
	input  logic [31:0] satp,

	output logic [9:0]  l1_index,
	output logic [9:0]  l0_index,
	output logic [31:0] paddr,
	output logic [7:0]  flags,
	output logic        valid,
	output logic [31:0] cause
);

	logic in_irom;
	logic in_dram;
	logic in_mmio;

	assign l1_index = vaddr[31:22];
	assign l0_index = vaddr[21:12];
	assign in_irom = (vaddr < I_ROM_BYTES);
	assign in_dram = (vaddr >= D_RAM_BASE) && (vaddr < (D_RAM_BASE + D_RAM_BYTES));
	assign in_mmio = (vaddr >= MMIO_BASE) && (vaddr < (MMIO_BASE + MMIO_BYTES));

	always_comb begin
		paddr = vaddr;
		flags = 8'h00;
		valid = 1'b0;
		cause = fetch ? SCAUSE_INST_ACCESS_FAULT :
		        load  ? SCAUSE_LOAD_ACCESS_FAULT :
		                SCAUSE_STORE_ACCESS_FAULT;

		if(satp[31]) begin
			if(fetch && in_irom) begin
				flags = PTE_V | PTE_R | PTE_X | PTE_A;
				valid = 1'b1;
				cause = 32'h0000_0000;
			end else if(fetch && in_dram) begin
				cause = SCAUSE_HARVARD_VIOLATION;
			end else if((load || store) && in_irom) begin
				cause = SCAUSE_HARVARD_VIOLATION;
			end else if((load || store) && in_dram) begin
				flags = PTE_V | PTE_R | PTE_W | PTE_U | PTE_A | PTE_D;
				valid = 1'b1;
				cause = 32'h0000_0000;
			end else if((load || store) && in_mmio) begin
				flags = PTE_V | PTE_R | PTE_W | PTE_A | PTE_D;
				valid = 1'b1;
				cause = 32'h0000_0000;
			end
		end
	end
endmodule
