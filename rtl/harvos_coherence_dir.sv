// Copyright 2025 Dennis Michael Heine

module harvos_coherence_dir
#(
	parameter int LINES = 32
)
(
	input  logic        clk,
	input  logic        reset,
	input  logic        access,
	input  logic        core_id,
	input  logic        we,
	input  logic [31:0] addr,

	output logic        invalidate_other,
	output logic [31:0] status
);

	localparam int IDX_BITS = (LINES <= 1) ? 1 : $clog2(LINES);

	logic valid [0:LINES-1];
	logic owner [0:LINES-1];
	logic modified [0:LINES-1];
	logic [19:0] line_tag [0:LINES-1];
	logic [15:0] invalidations;
	logic [15:0] shared_reads;

	wire [IDX_BITS-1:0] index = addr[IDX_BITS+1:2];
	wire [19:0] addr_tag = addr[31:12];
	wire same_line = valid[index] && (line_tag[index] == addr_tag);

	integer i;

	assign invalidate_other = access && we && same_line && modified[index] && (owner[index] != core_id);
	assign status = {invalidations, shared_reads};

	always_ff @(posedge clk) begin
		if(reset) begin
			for(i = 0; i < LINES; i = i + 1) begin
				valid[i] <= 1'b0;
				owner[i] <= 1'b0;
				modified[i] <= 1'b0;
				line_tag[i] <= 20'h00000;
			end
			invalidations <= 16'h0000;
			shared_reads <= 16'h0000;
		end else if(access) begin
			if(invalidate_other) invalidations <= invalidations + 16'd1;
			if(!we && same_line && (owner[index] != core_id)) shared_reads <= shared_reads + 16'd1;
			valid[index] <= 1'b1;
			owner[index] <= core_id;
			modified[index] <= we;
			line_tag[index] <= addr_tag;
		end
	end
endmodule
