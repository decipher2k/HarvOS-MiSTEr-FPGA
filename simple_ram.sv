
// simple_ram.sv (MiSTer override)
// Replaces the default simulation/BRAM-only RAM with a device-friendly version.
// Keeps the exact same interface and parameters as the original. Dual-ported for optional video/DMAs later.

module simple_ram #(
  parameter integer WORDS = 16384
) (
  input  wire        clk,
  input  wire        rst_n,
  input  wire        req,
  input  wire        we,
  input  wire  [3:0] be,
  input  wire [31:0] addr,
  input  wire [31:0] wdata,
  output reg  [31:0] rdata,
  output reg         rvalid,
  output wire        fault
);
  // Address is word-based internally (32-bit words)
  wire [31:0] waddr = addr[31:2];

  // Bounds check
  assign fault = req && (waddr >= WORDS);

  // 32-bit wide memory
  reg [31:0] mem [0:WORDS-1];

  reg        req_q, we_q;
  reg  [3:0] be_q;
  reg [31:0] waddr_q, wdata_q;

  integer i;
  initial begin
    // Optional preload for quick bringup, if a hex is present alongside.
    // $readmemh("rtl/harvos/hello.hex", mem);
  end

  always @(posedge clk) begin
    if (!rst_n) begin
      req_q   <= 1'b0;
      we_q    <= 1'b0;
      be_q    <= 4'h0;
      waddr_q <= 32'h0;
      wdata_q <= 32'h0;
      rvalid  <= 1'b0;
      rdata   <= 32'h0;
    end else begin
      req_q   <= req && !fault;
      we_q    <= we;
      be_q    <= be;
      waddr_q <= waddr;
      wdata_q <= wdata;

      rvalid  <= req_q;
      if (req_q) begin
        // write strobes
        if (we_q) begin
          reg [31:0] d;
          d = mem[waddr_q];
          if (be_q[0]) d[ 7: 0] = wdata_q[ 7: 0];
          if (be_q[1]) d[15: 8] = wdata_q[15: 8];
          if (be_q[2]) d[23:16] = wdata_q[23:16];
          if (be_q[3]) d[31:24] = wdata_q[31:24];
          mem[waddr_q] <= d;
          rdata <= d;
        end else begin
          rdata <= mem[waddr_q];
        end
      end
    end
  end
endmodule
