// Copyright 2025 Dennis Michael Heine

module harvos_dma_iommu
#(
	parameter logic [31:0] WINDOW_BASE = 32'h0000_0100,
	parameter int WINDOW_BYTES = 2048
)
(
	input  logic        dma_req,
	input  logic        dma_we,
	input  logic [31:0] dma_addr,
	input  logic [15:0] dma_len,
	input  logic        lock,

	output logic        allow,
	output logic        fault
);

	logic [32:0] dma_start;
	logic [32:0] dma_end;
	logic [32:0] window_start;
	logic [32:0] window_end;
	logic        aligned;
	logic        direction_ok;
	localparam logic [32:0] WINDOW_BYTES_U = WINDOW_BYTES;

	assign dma_start = {1'b0, dma_addr};
	assign dma_end = dma_start + {17'h00000, dma_len};
	assign window_start = {1'b0, WINDOW_BASE};
	assign window_end = {1'b0, WINDOW_BASE} + WINDOW_BYTES_U;
	assign aligned = (dma_addr[1:0] == 2'b00) && (dma_len[1:0] == 2'b00);
	assign direction_ok = dma_we || !dma_we;

	always_comb begin
		allow = 1'b0;
		fault = 1'b0;

		if(dma_req) begin
			allow = lock &&
			        direction_ok &&
			        aligned &&
			        (dma_start >= window_start) &&
			        (dma_end <= window_end) &&
			        (dma_len != 16'h0000);
			fault = !allow;
		end
	end
endmodule
