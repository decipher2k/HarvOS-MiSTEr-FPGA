// Copyright 2025 Dennis Michael Heine

module harvos_assertions
#(
	parameter int I_ROM_BYTES = 1024,
	parameter logic [31:0] D_RAM_BASE = 32'h0000_0400,
	parameter int D_RAM_BYTES = 4096,
	parameter logic [31:0] MMIO_BASE = 32'hFFFF_0000,
	parameter int MMIO_BYTES = 256,
	parameter logic [31:0] DMA_WINDOW_BASE = D_RAM_BASE + 32'h0000_0100,
	parameter int DMA_WINDOW_BYTES = 2048
)
(
	input logic        clk,
	input logic        reset,
	input logic [31:0] fetch_addr0,
	input logic [31:0] fetch_addr1,
	input logic        d_we,
	input logic [31:0] d_addr,
	input logic        dma_req,
	input logic        dma_allow,
	input logic [31:0] dma_addr,
	input logic [15:0] dma_len
);

// synthesis translate_off
	logic [32:0] dma_start;
	logic [32:0] dma_end;
	logic [32:0] dma_window_end;

	assign dma_start = {1'b0, dma_addr};
	assign dma_end = dma_start + {17'h00000, dma_len};
	assign dma_window_end = {1'b0, DMA_WINDOW_BASE} + DMA_WINDOW_BYTES;

	always_ff @(posedge clk) begin
		if(!reset) begin
			assert(fetch_addr0 < I_ROM_BYTES);
			assert(fetch_addr1 < I_ROM_BYTES);
			if(d_we) assert(((d_addr >= D_RAM_BASE) && (d_addr < (D_RAM_BASE + D_RAM_BYTES))) ||
			                ((d_addr >= MMIO_BASE) && (d_addr < (MMIO_BASE + MMIO_BYTES))));
			if(dma_req && dma_allow) begin
				assert(dma_addr >= DMA_WINDOW_BASE);
				assert(dma_addr[1:0] == 2'b00);
				assert(dma_len != 16'h0000);
				assert(dma_len[1:0] == 2'b00);
				assert(dma_end <= dma_window_end);
			end
		end
	end
// synthesis translate_on
endmodule
