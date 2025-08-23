
// harvos_mmio_nic.sv - Simple byte FIFOs for NIC via HPS ioctl shim
// Address window: 0x1000_0200 - 0x1000_02FF
// Map:
//   0x200: RX_COUNT (r)
//   0x204: RX_POP   (r) -> pops and returns {24'h0, data}
//   0x208: TX_COUNT (r)
//   0x20C: TX_PUSH  (w) -> writes wdata[7:0] into TX FIFO (if space)
module harvos_mmio_nic(
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
  // RX FIFO (HPS -> CPU)
  input  wire  [7:0] nic_rx_count,
  input  wire        nic_rx_valid,
  input  wire  [7:0] nic_rx_data,
  output reg         nic_rx_pop,
  // TX FIFO (CPU -> HPS)
  input  wire  [7:0] nic_tx_count,
  output reg         nic_tx_push,
  output reg   [7:0] nic_tx_data
);
  wire in_window = (addr[31:8] == 24'h100002);
  always @(posedge clk) begin
    if (!rst_n) begin
      rdata  <= 32'h0; rvalid <= 1'b0; fault <= 1'b0;
      nic_rx_pop <= 1'b0; nic_tx_push <= 1'b0; nic_tx_data <= 8'h00;
    end else begin
      rvalid <= 1'b0; fault <= 1'b0;
      nic_rx_pop <= 1'b0; nic_tx_push <= 1'b0;
      if (req) begin
        if (in_window) begin
          if (we) begin
            case (addr[7:0])
              8'h0C: begin nic_tx_data <= wdata[7:0]; nic_tx_push <= 1'b1; end
              default: fault <= 1'b1;
            endcase
          end else begin
            rvalid <= 1'b1;
            case (addr[7:0])
              8'h00: rdata <= {24'h0, nic_rx_count};
              8'h04: begin rdata <= {24'h0, nic_rx_valid ? nic_rx_data : 8'h00}; if (nic_rx_valid) nic_rx_pop <= 1'b1; end
              8'h08: rdata <= {24'h0, nic_tx_count};
              default: begin rdata <= 32'h0; fault <= 1'b1; end
            endcase
          end
        end else begin
          fault <= 1'b1;
        end
      end
    end
  end
endmodule
