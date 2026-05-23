// Copyright 2025 Dennis Michael Heine

module harvos_boot_ram
#(
	parameter int WORDS = 131072,
	parameter int ADDR_WIDTH = 17
)
(
	input  logic                    clk,
	input  logic                    wr,
	input  logic [ADDR_WIDTH-1:0]   waddr,
	input  logic [15:0]             wdata,
	input  logic [ADDR_WIDTH-1:0]   raddr,
	output logic [15:0]             rdata
);

	(* ramstyle = "M10K,no_rw_check" *) logic [15:0] ram [0:WORDS-1];

	always_ff @(posedge clk) begin
		if(wr) ram[waddr] <= wdata;
		rdata <= ram[raddr];
	end
endmodule
