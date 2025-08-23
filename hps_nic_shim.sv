
// hps_nic_shim.sv - Move bytes between HPS (ioctl index 0xA0A0) and FIFOs
module hps_nic_shim #(
  parameter IOCTL_INDEX = 16'hA0A0
)(
  input  wire clk,
  input  wire rst_n,
  // HPS IOCTL interface
  input  wire        ioctl_download,
  input  wire [15:0] ioctl_index,
  input  wire        ioctl_wr,
  input  wire [26:0] ioctl_addr,
  input  wire [15:0] ioctl_dout,
  input  wire        ioctl_upload_req,
  input  wire  [7:0] ioctl_upload_index,
  output reg         ioctl_rd,
  output reg  [15:0] ioctl_din,
  // To NIC MMIO in top_soc (via harvos_mister_top)
  output wire [7:0] rx_count,
  output wire       rx_valid,
  output wire [7:0] rx_data,
  input  wire       rx_pop,
  output wire [7:0] tx_count,
  input  wire       tx_push,
  input  wire [7:0] tx_data
);
  // Two FIFOs
  wire rx_empty, rx_full;
  wire tx_empty, tx_full;
  reg  rx_wr; reg [7:0] rx_wdata;
  reg  tx_rd; wire [7:0] tx_rdata;
  simple_fifo #(.DEPTH(256)) u_rx(.clk(clk), .rst_n(rst_n),
    .wr_en(rx_wr), .wr_data(rx_wdata),
    .rd_en(rx_pop), .rd_data(rx_data),
    .empty(rx_empty), .full(rx_full), .count(rx_count)
  );
  simple_fifo #(.DEPTH(256)) u_tx(.clk(clk), .rst_n(rst_n),
    .wr_en(tx_push), .wr_data(tx_data),
    .rd_en(tx_rd), .rd_data(tx_rdata),
    .empty(tx_empty), .full(tx_full), .count(tx_count)
  );
  assign rx_valid = !rx_empty;

  // HPS -> RX FIFO via download writes
  always @(posedge clk) begin
    if (!rst_n) begin
      rx_wr <= 1'b0; rx_wdata <= 8'h00;
    end else begin
      rx_wr <= 1'b0;
      if (ioctl_download && ioctl_wr && (ioctl_index == IOCTL_INDEX)) begin
        rx_wdata <= ioctl_dout[7:0];
        rx_wr    <= 1'b1;
      end
    end
  end

  // TX FIFO -> HPS via upload
  // When HPS requests upload with matching index, present next byte.
  always @(posedge clk) begin
    if (!rst_n) begin
      ioctl_rd <= 1'b0; ioctl_din <= 16'h0000; tx_rd <= 1'b0;
    end else begin
      ioctl_rd <= 1'b0; tx_rd <= 1'b0;
      if (ioctl_upload_req && (ioctl_upload_index == IOCTL_INDEX[7:0]) && !tx_empty) begin
        ioctl_din <= {8'h00, tx_rdata};
        ioctl_rd  <= 1'b1;
        tx_rd     <= 1'b1;
      end
    end
  end
endmodule
