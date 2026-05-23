// Copyright 2025 Dennis Michael Heine

module harvos_tlb
#(
	parameter int ENTRIES = 16,
	parameter int ASID_BITS = 8
)
(
	input  logic        clk,
	input  logic        reset,
	input  logic        flush,

	input  logic        lookup,
	input  logic [31:0] vaddr,
	input  logic [ASID_BITS-1:0] asid,
	output logic        hit,
	output logic [31:0] paddr,
	output logic [7:0]  flags,

	input  logic        fill,
	input  logic [31:0] fill_vaddr,
	input  logic [ASID_BITS-1:0] fill_asid,
	input  logic [31:0] fill_paddr,
	input  logic [7:0]  fill_flags
);

	localparam int IDX_BITS = (ENTRIES <= 1) ? 1 : $clog2(ENTRIES);

	logic valid [0:ENTRIES-1];
	logic [19:0] vpn [0:ENTRIES-1];
	logic [19:0] ppn [0:ENTRIES-1];
	logic [ASID_BITS-1:0] entry_asid [0:ENTRIES-1];
	logic [7:0] entry_flags [0:ENTRIES-1];
	logic [IDX_BITS-1:0] repl;

	integer i;
	integer r;

	always_comb begin
		hit = 1'b0;
		paddr = 32'h0000_0000;
		flags = 8'h00;

		for(i = 0; i < ENTRIES; i = i + 1) begin
			if(lookup && valid[i] && (vpn[i] == vaddr[31:12]) && (entry_asid[i] == asid)) begin
				hit = 1'b1;
				paddr = {ppn[i], vaddr[11:0]};
				flags = entry_flags[i];
			end
		end
	end

	always_ff @(posedge clk) begin
		if(reset || flush) begin
			for(r = 0; r < ENTRIES; r = r + 1) begin
				valid[r] <= 1'b0;
				vpn[r] <= 20'h00000;
				ppn[r] <= 20'h00000;
				entry_asid[r] <= '0;
				entry_flags[r] <= 8'h00;
			end
			repl <= '0;
		end else if(fill) begin
			valid[repl] <= 1'b1;
			vpn[repl] <= fill_vaddr[31:12];
			ppn[repl] <= fill_paddr[31:12];
			entry_asid[repl] <= fill_asid;
			entry_flags[repl] <= fill_flags;
			repl <= repl + 1'b1;
		end
	end
endmodule
