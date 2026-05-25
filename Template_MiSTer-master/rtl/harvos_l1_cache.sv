// Copyright 2025 Dennis Michael Heine

module harvos_l1_cache
#(
	parameter int LINES = 16
)
(
	input  logic        clk,
	input  logic        reset,
	input  logic        access,
	input  logic        we,
	input  logic [31:0] addr,
	input  logic [31:0] wdata,
	input  logic [31:0] fill_data,

	output logic        hit,
	output logic [31:0] rdata,
	output logic [31:0] status
);

	localparam int IDX_BITS = (LINES <= 1) ? 1 : $clog2(LINES);
	localparam int TAG_BITS = 32 - IDX_BITS - 2;

	logic valid [0:LINES-1];
	logic dirty [0:LINES-1];
	logic [TAG_BITS-1:0] tag [0:LINES-1];
	logic [31:0] data [0:LINES-1];
	logic [15:0] hit_count;
	logic [15:0] miss_count;

	wire [IDX_BITS-1:0] index = addr[IDX_BITS+1:2];
	wire [TAG_BITS-1:0] addr_tag = addr[31:IDX_BITS+2];

	integer i;

	assign hit = access && valid[index] && (tag[index] == addr_tag);
	assign rdata = hit ? data[index] : fill_data;
	assign status = {hit_count, miss_count};

	always_ff @(posedge clk) begin
		if(reset) begin
			for(i = 0; i < LINES; i = i + 1) begin
				valid[i] <= 1'b0;
				dirty[i] <= 1'b0;
				tag[i] <= '0;
				data[i] <= 32'h0000_0000;
			end
			hit_count <= 16'h0000;
			miss_count <= 16'h0000;
		end else if(access) begin
			if(hit) begin
				hit_count <= hit_count + 16'd1;
				if(we) begin
					data[index] <= wdata;
					dirty[index] <= 1'b1;
				end
			end else begin
				miss_count <= miss_count + 16'd1;
				valid[index] <= 1'b1;
				dirty[index] <= we;
				tag[index] <= addr_tag;
				data[index] <= we ? wdata : fill_data;
			end
		end
	end
endmodule
