// Copyright 2025 Dennis Michael Heine

module harvos_ddr_bridge
(
	input  logic        clk,
	input  logic        reset,
	input  logic        req,
	input  logic        we,
	input  logic [31:0] addr,
	input  logic [31:0] wdata,
	output logic [31:0] rdata,
	output logic        ready,

	output logic [31:0] ddr_addr,
	output logic [31:0] ddr_wdata,
	output logic        ddr_we,
	input  logic [31:0] ddr_rdata
);

	always_ff @(posedge clk) begin
		if(reset) begin
			ready <= 1'b0;
			rdata <= 32'h0000_0000;
			ddr_addr <= 32'h0000_0000;
			ddr_wdata <= 32'h0000_0000;
			ddr_we <= 1'b0;
		end else begin
			ready <= req;
			ddr_addr <= addr;
			ddr_wdata <= wdata;
			ddr_we <= req && we;
			if(req && !we) rdata <= ddr_rdata;
		end
	end
endmodule
