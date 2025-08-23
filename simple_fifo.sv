
module simple_fifo #(
  parameter DEPTH = 256
)(
  input  wire clk,
  input  wire rst_n,
  // write
  input  wire wr_en,
  input  wire [7:0] wr_data,
  // read
  input  wire rd_en,
  output reg  [7:0] rd_data,
  output wire       empty,
  output wire       full,
  output reg  [7:0] count
);
  localparam ADDR_W = $clog2(DEPTH);
  reg [7:0] mem[0:DEPTH-1];
  reg [ADDR_W:0] wptr, rptr;

  assign empty = (wptr == rptr);
  assign full  = ((wptr[ADDR_W-1:0] == rptr[ADDR_W-1:0]) && (wptr[ADDR_W] != rptr[ADDR_W]));

  always @(posedge clk) begin
    if (!rst_n) begin
      wptr <= 0; rptr <= 0; rd_data <= 8'h00; count <= 0;
    end else begin
      if (wr_en && !full) begin
        mem[wptr[ADDR_W-1:0]] <= wr_data;
        wptr <= wptr + 1'd1;
      end
      if (rd_en && !empty) begin
        rd_data <= mem[rptr[ADDR_W-1:0]];
        rptr <= rptr + 1'd1;
      end
      // update count
      if (wptr == rptr) count <= 0;
      else if (wptr[ADDR_W] == rptr[ADDR_W]) count <= wptr[ADDR_W-1:0] - rptr[ADDR_W-1:0];
      else count <= (DEPTH[7:0] - rptr[ADDR_W-1:0]) + wptr[ADDR_W-1:0];
    end
  end
endmodule
