// Copyright 2025 Dennis Michael Heine

module harvos_l2_cache
#(
	parameter int LINES = 32
)
(
	input  logic        clk,
	input  logic        reset,
	input  logic        access,
	input  logic        we,
	input  logic [31:0] addr,

	output logic        hit,
	output logic [31:0] status
);

	localparam int IDX_BITS = (LINES <= 1) ? 1 : $clog2(LINES);
	localparam int TAG_BITS = 32 - IDX_BITS - 2;

	logic valid [0:LINES-1];
	logic dirty [0:LINES-1];
	logic [TAG_BITS-1:0] tag [0:LINES-1];
	logic [15:0] hits;
	logic [15:0] misses;

	wire [IDX_BITS-1:0] index = addr[IDX_BITS+1:2];
	wire [TAG_BITS-1:0] addr_tag = addr[31:IDX_BITS+2];

	integer i;

	assign hit = access && valid[index] && (tag[index] == addr_tag);
	assign status = {hits, misses};

	always_ff @(posedge clk) begin
		if(reset) begin
			for(i = 0; i < LINES; i = i + 1) begin
				valid[i] <= 1'b0;
				dirty[i] <= 1'b0;
				tag[i] <= '0;
			end
			hits <= 16'h0000;
			misses <= 16'h0000;
		end else if(access) begin
			if(hit) begin
				hits <= hits + 16'd1;
				dirty[index] <= dirty[index] | we;
			end else begin
				misses <= misses + 16'd1;
				valid[index] <= 1'b1;
				dirty[index] <= we;
				tag[index] <= addr_tag;
			end
		end
	end
endmodule
