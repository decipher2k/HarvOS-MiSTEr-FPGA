
// harvos_mmio_hid.sv - Map MiSTer hps_io PS/2/Mouse to HarvOS MMIO
// Address window: 0x1000_0000 - 0x1000_00FF
module harvos_mmio_hid(
  input  wire        clk,
  input  wire        rst_n,
  // D-side like port
  input  wire        req,
  input  wire        we,
  input  wire  [3:0] be,
  input  wire [31:0] addr,
  input  wire [31:0] wdata,
  output reg  [31:0] rdata,
  output reg         rvalid,
  output reg         fault,
  // MiSTer HID feeds
  input  wire [10:0] ps2_key,
  input  wire [24:0] ps2_mouse,
  input  wire [15:0] ps2_mouse_ext
);
  // Decode
  wire in_window = (addr[31:8] == 24'h100000);
  // simple reg map
  //   0x00: [10:0] ps2_key
  //   0x04: [24:0] ps2_mouse
  //   0x08: [15:0] ps2_mouse_ext
  always @(posedge clk) begin
    if (!rst_n) begin
      rdata  <= 32'h0;
      rvalid <= 1'b0;
      fault  <= 1'b0;
    end else begin
      rvalid <= 1'b0;
      fault  <= 1'b0;
      if (req) begin
        if (in_window) begin
          rvalid <= !we;
          case (addr[7:0])
            8'h00: rdata <= {21'h0, ps2_key};
            8'h04: rdata <= {7'h0, ps2_mouse};
            8'h08: rdata <= {16'h0, ps2_mouse_ext};
            default: begin rdata <= 32'h0; fault <= we; end
          endcase
        end else begin
          // out of our window
          fault <= 1'b1;
        end
      end
    end
  end
endmodule
