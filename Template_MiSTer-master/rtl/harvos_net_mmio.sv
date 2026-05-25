// Copyright 2025 Dennis Michael Heine

module harvos_net_mmio
#(
	parameter logic [31:0] DMA_WINDOW_BASE = 32'h0000_0500,
	parameter int DMA_WINDOW_BYTES = 2048,
	parameter int RX_RING_WORDS = 4096,
	parameter int TX_DESC_RING_SIZE = 8
)
(
	input  logic        clk,
	input  logic        reset,

	input  logic        mmio_req,
	input  logic        mmio_we,
	input  logic [7:0]  mmio_addr,
	input  logic [31:0] mmio_wdata,
	input  logic [3:0]  mmio_be,
	output logic [31:0] mmio_rdata,

	output logic        irq,

	output logic        dma_req,
	output logic        dma_we,
	output logic [31:0] dma_addr,
	output logic [15:0] dma_len,
	output logic [31:0] dma_wdata,
	input  logic [31:0] dma_rdata,
	input  logic        dma_allow,
	input  logic        dma_fault,

	input  logic        packet_link_up,
	input  logic        packet_rx_valid,
	input  logic [31:0] packet_rx_word,
	input  logic        packet_rx_last,
	input  logic        packet_rx_error,
	output logic        packet_rx_ready,
	output logic        packet_tx_valid,
	output logic [31:0] packet_tx_word,
	output logic        packet_tx_last,
	input  logic        packet_tx_ready,

	output logic [31:0] status
);
	localparam logic [31:0] NET_ID = 32'h484E_4554; // "HNET"
	localparam logic [15:0] DMA_WORD_BYTES = 16'd4;
	localparam int RX_RING_AW = $clog2(RX_RING_WORDS);
	localparam int TX_BUF_WORDS = DMA_WINDOW_BYTES / 4;
	localparam int TX_BUF_AW = $clog2(TX_BUF_WORDS);
	localparam int TX_DESC_AW = $clog2(TX_DESC_RING_SIZE);
	localparam int TX_RING_WORDS = TX_DESC_RING_SIZE * TX_BUF_WORDS;
	localparam int TX_RING_AW = $clog2(TX_RING_WORDS);
	localparam int TX_DESC_COUNT_PAD = 8 - (TX_DESC_AW + 1);
	localparam logic [TX_DESC_AW:0] TX_DESC_RING_COUNT = TX_DESC_RING_SIZE;

	typedef enum logic [1:0] {
		TX_OFF_IDLE   = 2'd0,
		TX_OFF_LOAD   = 2'd1,
		TX_OFF_PATCH  = 2'd2,
		TX_OFF_STREAM = 2'd3
	} tx_offload_state_t;

	logic [31:0] ctrl;
	logic [31:0] irq_enable;
	logic [31:0] irq_status /*verilator public_flat_rd*/;
	logic [31:0] rx_dma_base;
	logic [31:0] rx_dma_len;
	logic [31:0] tx_dma_base;
	logic [31:0] tx_dma_len;
	logic [31:0] command;
	logic [31:0] mac_lo;
	logic [31:0] mac_hi;
	logic [31:0] frame_len;
	logic [31:0] rx_count;
	logic [31:0] tx_count;
	logic [31:0] rx_start_count /*verilator public_flat_rd*/;
	logic [31:0] rx_start_fault_count /*verilator public_flat_rd*/;
	logic [31:0] digest;
	logic [31:0] progress;
	logic [31:0] last_tx_word;
	logic        rx_ready_latched /*verilator public_flat_rd*/;
	logic [31:0] tx_buf_data [0:TX_BUF_WORDS-1];
	logic [31:0] tx_ring_data [0:TX_RING_WORDS-1];
	logic [15:0] tx_desc_len [0:TX_DESC_RING_SIZE-1];
	logic [TX_BUF_AW:0] tx_desc_words [0:TX_DESC_RING_SIZE-1];
	tx_offload_state_t tx_offload_state;
	logic        tx_offload_active;
	logic        tx_ring_submit_active;
	logic [TX_DESC_AW-1:0] tx_load_desc;
	logic [TX_DESC_AW-1:0] tx_desc_head;
	logic [TX_DESC_AW-1:0] tx_desc_tail;
	logic [TX_DESC_AW:0]   tx_desc_count /*verilator public_flat_rd*/;
	logic [TX_BUF_AW:0]    tx_ring_stream_word;
	logic [TX_BUF_AW:0] tx_word_count;
	logic [TX_BUF_AW:0] tx_stream_word;
	logic [31:0] tx_ip_sum;
	logic [31:0] tx_tcp_sum;
	logic [15:0] tx_total_len;
	logic [31:0] rx_ring_data [0:RX_RING_WORDS-1];
	logic        rx_ring_last [0:RX_RING_WORDS-1];
	logic [RX_RING_AW-1:0] rx_ring_rd;
	logic [RX_RING_AW-1:0] rx_ring_wr;
	logic [RX_RING_AW:0]   rx_ring_count;
	logic [15:0]           rx_frame_count;
	logic        busy;
	logic        done;
	logic        fault;
	logic        rx_op;
	logic        link_prev;

	wire enable = ctrl[0];
	wire loopback = ctrl[1];
	wire clear_ctrl = (mmio_req && mmio_we && (mmio_addr == 8'h04) && mmio_wdata[2]) ||
	                  (mmio_req && mmio_we && (mmio_addr == 8'h1C) && mmio_wdata[2]);
	wire sim_link = ctrl[4];
	wire tx_checksum_offload = ctrl[5];
	wire tx_desc_ring_enable = ctrl[6];
	wire link_up = sim_link || packet_link_up;
	wire start_tx = mmio_req && mmio_we && (mmio_addr == 8'h1C) && mmio_wdata[0];
	wire start_rx = mmio_req && mmio_we && (mmio_addr == 8'h1C) && mmio_wdata[1];
	wire [31:0] active_len = rx_op ? rx_dma_len : tx_dma_len;
	wire [31:0] active_base = rx_op ? rx_dma_base : tx_dma_base;
	wire [31:0] remaining = active_len - progress;
	wire active = busy && (progress < active_len);
	wire tx_ready = packet_tx_ready || loopback || sim_link;
	wire tx_desc_ring_ready = (tx_desc_count < TX_DESC_RING_COUNT) && !busy;
	wire tx_status_ready = tx_desc_ring_enable ? tx_desc_ring_ready : tx_ready;
	wire tx_ring_stream_valid = tx_desc_ring_enable && enable && link_up && !busy && (tx_desc_count != '0);
	wire tx_ring_stream_last = tx_ring_stream_word + {{TX_BUF_AW{1'b0}}, 1'b1} >=
	                           tx_desc_words[tx_desc_head];
	wire tx_ring_stream_step = tx_ring_stream_valid && tx_ready;
	wire direct_rx_mode = loopback || sim_link;
	wire rx_ring_full = (rx_ring_count >= RX_RING_WORDS);
	wire rx_ring_ready = (rx_ring_count != 0) && (rx_frame_count != 0);
	wire rx_status_valid = direct_rx_mode ? packet_rx_valid : (rx_frame_count != 0);
	wire rx_source_ready = direct_rx_mode ? (packet_rx_valid || loopback || sim_link) : rx_ring_ready;
	wire tx_offload_loading = busy && !rx_op && tx_offload_active && (tx_offload_state == TX_OFF_LOAD);
	wire tx_offload_streaming = busy && !rx_op && tx_offload_active && (tx_offload_state == TX_OFF_STREAM);
	wire dma_step = active && (rx_op ? rx_source_ready :
	                           (tx_offload_active ? tx_offload_loading : tx_ready));
	wire [31:0] sim_rx_word = 32'h484E_0000 ^ mac_lo ^ {16'h0000, progress[15:0]} ^ rx_count;
	wire [31:0] loop_rx_word = last_tx_word ^ 32'h0101_0101;
	wire [31:0] direct_rx_word = packet_rx_valid ? packet_rx_word :
	                            (loopback ? loop_rx_word : sim_rx_word);
	wire [31:0] selected_rx_word = direct_rx_mode ? direct_rx_word : rx_ring_data[rx_ring_rd];
	wire selected_rx_last = direct_rx_mode ? (packet_rx_valid ? packet_rx_last : (remaining <= 32'd4)) :
	                        rx_ring_last[rx_ring_rd];
	wire ring_pop = dma_step && rx_op && !direct_rx_mode && !dma_fault && dma_allow;
	wire ring_push = enable && link_up && packet_rx_valid && packet_rx_ready;
	wire ring_pop_last = ring_pop && rx_ring_last[rx_ring_rd];
	wire ring_push_last = ring_push && packet_rx_last;
	wire [31:0] irq_status_view = irq_status | (rx_ready_latched ? 32'h0000_0010 : 32'h0000_0000);
	wire [31:0] status_word = {16'h0000, packet_rx_error, rx_status_valid,
	                           tx_status_ready, rx_op, irq, fault, done,
	                           busy, link_up, 7'h00};
	wire [31:0] next_digest = digest ^ (rx_op ? selected_rx_word : dma_rdata) ^
	                          {progress[15:0], active_len[15:0]};

	function automatic logic dma_range_ok(
		input logic [31:0] base,
		input logic [31:0] len
	);
		logic [32:0] dma_start;
		logic [32:0] dma_end;
		logic [32:0] window_start;
		logic [32:0] window_end;
		begin
			dma_start = {1'b0, base};
			dma_end = dma_start + {1'b0, len};
			window_start = {1'b0, DMA_WINDOW_BASE};
			window_end = {1'b0, DMA_WINDOW_BASE} + DMA_WINDOW_BYTES;
			dma_range_ok = (len != 32'h0000_0000) &&
			               (len <= DMA_WINDOW_BYTES) &&
			               (dma_end > dma_start) &&
			               (dma_start >= window_start) &&
			               (dma_end <= window_end);
		end
	endfunction

	assign irq = (irq_status_view & irq_enable) != 32'h0000_0000;
	assign dma_req = dma_step;
	assign dma_we = rx_op;
	assign dma_addr = active_base + progress;
	assign dma_len = DMA_WORD_BYTES;
	assign dma_wdata = selected_rx_word;
	assign packet_rx_ready = enable && link_up && !direct_rx_mode && !rx_ring_full;
	assign packet_tx_valid = tx_desc_ring_enable ? tx_ring_stream_valid :
	                         (enable && link_up && !rx_op &&
	                          (tx_offload_active ? tx_offload_streaming :
	                           (active && dma_allow && !dma_fault)));
	assign packet_tx_word = tx_desc_ring_enable ?
	                         tx_ring_data[{tx_desc_head, tx_ring_stream_word[TX_BUF_AW-1:0]}] :
	                         (tx_offload_active ? tx_buf_data[tx_stream_word[TX_BUF_AW-1:0]] : dma_rdata);
	assign packet_tx_last = tx_desc_ring_enable ? tx_ring_stream_last :
	                        (tx_offload_active ?
	                         (tx_stream_word + {{TX_BUF_AW{1'b0}}, 1'b1} >= tx_word_count) :
	                         (remaining <= 32'd4));
	assign status = 32'h484E_0000 ^ status_word ^ digest ^ {rx_count[15:0], tx_count[15:0]};

	function automatic logic [31:0] apply_wstrb(
		input logic [31:0] old_word,
		input logic [31:0] new_word,
		input logic [3:0]  be
	);
		begin
			apply_wstrb = old_word;
			if(be[0]) apply_wstrb[7:0]   = new_word[7:0];
			if(be[1]) apply_wstrb[15:8]  = new_word[15:8];
			if(be[2]) apply_wstrb[23:16] = new_word[23:16];
			if(be[3]) apply_wstrb[31:24] = new_word[31:24];
		end
	endfunction

	function automatic logic [7:0] tx_buf_byte(input int byte_index);
		logic [31:0] word;
		begin
			word = tx_buf_data[byte_index >> 2];
			case(byte_index[1:0])
				2'd0: tx_buf_byte = word[7:0];
				2'd1: tx_buf_byte = word[15:8];
				2'd2: tx_buf_byte = word[23:16];
				default: tx_buf_byte = word[31:24];
			endcase
		end
	endfunction

	function automatic logic [15:0] checksum_fold(input logic [31:0] sum);
		logic [31:0] folded;
		begin
			folded = (sum & 32'h0000_FFFF) + (sum >> 16);
			folded = (folded & 32'h0000_FFFF) + (folded >> 16);
			checksum_fold = ~folded[15:0];
		end
	endfunction

	function automatic logic [31:0] checksum_add16(
		input logic [31:0] sum,
		input int byte_index
	);
		logic [7:0] hi;
		logic [7:0] lo;
		begin
			hi = tx_buf_byte(byte_index);
			lo = ((byte_index + 1) < tx_dma_len) ? tx_buf_byte(byte_index + 1) : 8'h00;
			checksum_add16 = sum + {hi, lo};
		end
	endfunction

	function automatic logic [7:0] word_byte(
		input logic [31:0] word,
		input int byte_index
	);
		begin
			case(byte_index[1:0])
				2'd0: word_byte = word[7:0];
				2'd1: word_byte = word[15:8];
				2'd2: word_byte = word[23:16];
				default: word_byte = word[31:24];
			endcase
		end
	endfunction

	function automatic logic [15:0] word_half_be(
		input logic [31:0] word,
		input int byte_index,
		input int valid_end
	);
		logic [7:0] hi;
		logic [7:0] lo;
		begin
			hi = word_byte(word, byte_index);
			lo = ((byte_index + 1) < valid_end) ? word_byte(word, byte_index + 1) : 8'h00;
			word_half_be = {hi, lo};
		end
	endfunction

	function automatic logic [31:0] tx_word_ip_sum(
		input logic [31:0] base,
		input logic [31:0] word
	);
		logic [31:0] sum;
		int i;
		int off;
		begin
			sum = 32'h0000_0000;
			for(i = 0; i < 4; i = i + 2) begin
				off = base + i;
				if(off >= 14 && off < 34 && off != 24) begin
					sum = sum + word_half_be(word, i, 4);
				end
			end
			tx_word_ip_sum = sum;
		end
	endfunction

	function automatic logic [31:0] tx_word_tcp_sum(
		input logic [31:0] base,
		input logic [31:0] word,
		input logic [15:0] total_len
	);
		logic [31:0] sum;
		int i;
		int off;
		int frame_end;
		begin
			sum = 32'h0000_0000;
			frame_end = 14 + total_len;
			for(i = 0; i < 4; i = i + 2) begin
				off = base + i;
				if((off >= 26 && off < 34) ||
				   (total_len >= 16'd40 && off >= 34 && off < frame_end && off != 50)) begin
					sum = sum + word_half_be(word, i, frame_end - base);
				end
			end
			tx_word_tcp_sum = sum;
		end
	endfunction

	always_comb begin
		case(mmio_addr)
			8'h00: mmio_rdata = NET_ID;
			8'h04: mmio_rdata = ctrl;
			8'h08: mmio_rdata = status_word;
			8'h0C: mmio_rdata = irq_enable;
			8'h10: mmio_rdata = irq_status_view;
			8'h14: mmio_rdata = rx_dma_base;
			8'h18: mmio_rdata = rx_dma_len;
			8'h1C: mmio_rdata = command;
			8'h20: mmio_rdata = tx_dma_base;
			8'h24: mmio_rdata = tx_dma_len;
			8'h28: mmio_rdata = mac_lo;
			8'h2C: mmio_rdata = mac_hi;
			8'h30: mmio_rdata = frame_len;
			8'h34: mmio_rdata = rx_count;
			8'h38: mmio_rdata = tx_count;
			8'h3C: mmio_rdata = {8'h00, {TX_DESC_COUNT_PAD{1'b0}}, tx_desc_count, rx_frame_count};
			default: mmio_rdata = 32'h0000_0000;
		endcase
	end

	always_ff @(posedge clk) begin
		if(reset) begin
			ctrl        <= 32'h0000_0000;
			irq_enable  <= 32'h0000_0000;
			irq_status  <= 32'h0000_0000;
			rx_dma_base <= DMA_WINDOW_BASE;
			rx_dma_len  <= 32'h0000_0040;
			tx_dma_base <= DMA_WINDOW_BASE;
			tx_dma_len  <= 32'h0000_0040;
			command     <= 32'h0000_0000;
			mac_lo      <= 32'h0200_0001;
			mac_hi      <= 32'h0000_484E;
			frame_len   <= 32'h0000_0000;
			rx_count    <= 32'h0000_0000;
			tx_count    <= 32'h0000_0000;
			rx_start_count <= 32'h0000_0000;
			rx_start_fault_count <= 32'h0000_0000;
			digest      <= 32'h484E_4554;
			progress    <= 32'h0000_0000;
			last_tx_word <= 32'h0000_0000;
			rx_ready_latched <= 1'b0;
			tx_offload_state <= TX_OFF_IDLE;
			tx_offload_active <= 1'b0;
			tx_ring_submit_active <= 1'b0;
			tx_load_desc <= '0;
			tx_desc_head <= '0;
			tx_desc_tail <= '0;
			tx_desc_count <= '0;
			tx_ring_stream_word <= '0;
			tx_word_count <= '0;
			tx_stream_word <= '0;
			tx_ip_sum <= 32'h0000_0000;
			tx_tcp_sum <= 32'h0000_0000;
			tx_total_len <= 16'h0000;
			rx_ring_rd  <= '0;
			rx_ring_wr  <= '0;
			rx_ring_count <= '0;
			rx_frame_count <= 16'h0000;
			busy        <= 1'b0;
			done        <= 1'b0;
			fault       <= 1'b0;
			rx_op       <= 1'b0;
			link_prev   <= 1'b0;
		end else begin
			link_prev <= link_up;
			if(link_up != link_prev) irq_status <= irq_status | 32'h0000_0008;

			if(ring_push) begin
				rx_ring_data[rx_ring_wr] <= packet_rx_word;
				rx_ring_last[rx_ring_wr] <= packet_rx_last;
				rx_ring_wr <= rx_ring_wr + {{(RX_RING_AW-1){1'b0}}, 1'b1};
			end
			if(ring_push_last) rx_ready_latched <= 1'b1;

			if(mmio_req && mmio_we) begin
				case(mmio_addr)
					8'h04: ctrl <= apply_wstrb(ctrl, mmio_wdata, mmio_be);
					8'h0C: irq_enable <= apply_wstrb(irq_enable, mmio_wdata, mmio_be);
					8'h10: begin
						irq_status <= irq_status & ~mmio_wdata;
						if(mmio_wdata[4]) rx_ready_latched <= 1'b0;
					end
					8'h14: rx_dma_base <= apply_wstrb(rx_dma_base, mmio_wdata, mmio_be);
					8'h18: rx_dma_len <= apply_wstrb(rx_dma_len, mmio_wdata, mmio_be);
					8'h1C: command <= apply_wstrb(command, mmio_wdata, mmio_be);
					8'h20: tx_dma_base <= apply_wstrb(tx_dma_base, mmio_wdata, mmio_be);
					8'h24: tx_dma_len <= apply_wstrb(tx_dma_len, mmio_wdata, mmio_be);
					8'h28: mac_lo <= apply_wstrb(mac_lo, mmio_wdata, mmio_be);
					8'h2C: mac_hi <= apply_wstrb(mac_hi, mmio_wdata, mmio_be);
					default: begin end
				endcase
			end

			if(clear_ctrl) begin
				irq_status <= 32'h0000_0000;
				done <= 1'b0;
				fault <= 1'b0;
				busy <= 1'b0;
				progress <= 32'h0000_0000;
				tx_offload_state <= TX_OFF_IDLE;
				tx_offload_active <= 1'b0;
				tx_ring_submit_active <= 1'b0;
				tx_stream_word <= '0;
				rx_ready_latched <= 1'b0;
				tx_desc_head <= '0;
				tx_desc_tail <= '0;
				tx_desc_count <= '0;
				tx_ring_stream_word <= '0;
				tx_ip_sum <= 32'h0000_0000;
				tx_tcp_sum <= 32'h0000_0000;
				tx_total_len <= 16'h0000;
			end else if(start_tx || start_rx) begin
				logic [31:0] requested_len;
				logic [31:0] requested_base;
				requested_len = start_rx ? rx_dma_len : tx_dma_len;
				requested_base = start_rx ? rx_dma_base : tx_dma_base;
				if(start_rx) rx_start_count <= rx_start_count + 32'd1;
				if(!enable || !link_up || busy ||
				   (start_tx && start_rx) ||
				   (start_tx && tx_desc_ring_enable && !tx_desc_ring_ready) ||
				   !dma_range_ok(requested_base, requested_len)) begin
					if(start_rx) rx_start_fault_count <= rx_start_fault_count + 32'd1;
					busy <= 1'b0;
					done <= 1'b0;
					fault <= 1'b1;
					irq_status <= irq_status | 32'h0000_0004;
				end else begin
					busy <= 1'b1;
					done <= 1'b0;
					fault <= 1'b0;
					rx_op <= start_rx;
					progress <= 32'h0000_0000;
					frame_len <= 32'h0000_0000;
					tx_offload_active <= start_tx && (tx_checksum_offload || tx_desc_ring_enable);
					tx_ring_submit_active <= start_tx && tx_desc_ring_enable;
					tx_load_desc <= tx_desc_tail;
					tx_offload_state <= (start_tx && (tx_checksum_offload || tx_desc_ring_enable)) ?
						TX_OFF_LOAD : TX_OFF_IDLE;
					tx_word_count <= requested_len[TX_BUF_AW+1:2] +
						{{TX_BUF_AW{1'b0}}, (requested_len[1:0] != 2'b00)};
					tx_stream_word <= '0;
					tx_ip_sum <= 32'h0000_0000;
					tx_tcp_sum <= 32'h0000_0000;
					tx_total_len <= 16'h0000;
					digest <= NET_ID ^ requested_len ^ (start_rx ? 32'h5258_0000 : 32'h5458_0000);
					irq_status <= irq_status & ~32'h0000_0007;
				end
			end else if(busy && !rx_op && tx_offload_active && (tx_offload_state == TX_OFF_PATCH)) begin
				logic [15:0] ip_sum;
				logic [15:0] tcp_sum;
				logic [15:0] total_len;
				logic [31:0] ip_word;
				logic [31:0] tcp_word;
				total_len = {tx_buf_byte(16), tx_buf_byte(17)};
				if(tx_dma_len >= 54 && {tx_buf_byte(12), tx_buf_byte(13)} == 16'h0800 &&
				   tx_buf_byte(14) == 8'h45 && tx_buf_byte(23) == 8'h06 &&
				   tx_checksum_offload &&
				   total_len >= 16'd40) begin
					ip_sum = checksum_fold(tx_ip_sum);
					tcp_sum = checksum_fold(tx_tcp_sum);
					ip_word = tx_buf_data[6];
					tcp_word = tx_buf_data[12];
					ip_word[7:0] = ip_sum[15:8];
					ip_word[15:8] = ip_sum[7:0];
					tcp_word[23:16] = tcp_sum[15:8];
					tcp_word[31:24] = tcp_sum[7:0];
					tx_buf_data[6] <= ip_word;
					tx_buf_data[12] <= tcp_word;
					if(tx_ring_submit_active) begin
						tx_ring_data[{tx_load_desc, 9'd6}] <= ip_word;
						tx_ring_data[{tx_load_desc, 9'd12}] <= tcp_word;
					end
					digest <= digest ^ {ip_sum, tcp_sum};
				end
				if(tx_ring_submit_active) begin
					tx_desc_len[tx_load_desc] <= tx_dma_len[15:0];
					tx_desc_words[tx_load_desc] <= tx_word_count;
					tx_desc_tail <= tx_desc_tail + {{(TX_DESC_AW-1){1'b0}}, 1'b1};
					tx_desc_count <= tx_desc_count + {{TX_DESC_AW{1'b0}}, 1'b1};
					busy <= 1'b0;
					done <= 1'b1;
					frame_len <= tx_dma_len;
					tx_offload_state <= TX_OFF_IDLE;
					tx_offload_active <= 1'b0;
					tx_ring_submit_active <= 1'b0;
					progress <= 32'h0000_0000;
				end else begin
					tx_offload_state <= TX_OFF_STREAM;
					tx_stream_word <= '0;
					progress <= 32'h0000_0000;
				end
			end else if(busy && !rx_op && tx_offload_active && (tx_offload_state == TX_OFF_STREAM)) begin
				if(packet_tx_ready) begin
					last_tx_word <= tx_buf_data[tx_stream_word[TX_BUF_AW-1:0]];
					tx_stream_word <= tx_stream_word + {{TX_BUF_AW{1'b0}}, 1'b1};
					progress <= progress + 32'd4;
					if(tx_stream_word + {{TX_BUF_AW{1'b0}}, 1'b1} >= tx_word_count) begin
						busy <= 1'b0;
						done <= 1'b1;
						frame_len <= tx_dma_len;
						tx_count <= tx_count + 32'd1;
						irq_status <= irq_status | 32'h0000_0002;
						tx_offload_state <= TX_OFF_IDLE;
						tx_offload_active <= 1'b0;
						tx_ring_submit_active <= 1'b0;
					end
				end
			end else if(tx_ring_stream_step) begin
				last_tx_word <= tx_ring_data[{tx_desc_head, tx_ring_stream_word[TX_BUF_AW-1:0]}];
				if(tx_ring_stream_last) begin
					tx_ring_stream_word <= '0;
					tx_desc_head <= tx_desc_head + {{(TX_DESC_AW-1){1'b0}}, 1'b1};
					tx_desc_count <= tx_desc_count - {{TX_DESC_AW{1'b0}}, 1'b1};
					tx_count <= tx_count + 32'd1;
					irq_status <= irq_status | 32'h0000_0002;
				end else begin
					tx_ring_stream_word <= tx_ring_stream_word + {{TX_BUF_AW{1'b0}}, 1'b1};
				end
			end else if(busy && dma_req) begin
				if(dma_fault || !dma_allow || (rx_op && packet_rx_error)) begin
					busy <= 1'b0;
					done <= 1'b0;
					fault <= 1'b1;
					irq_status <= irq_status | 32'h0000_0004;
				end else begin
					digest <= next_digest;
					if(!rx_op) begin
						if(tx_offload_active) begin
							logic [15:0] loaded_total_len;
							logic [31:0] tcp_add;
							loaded_total_len = {dma_rdata[7:0], dma_rdata[15:8]};
							tcp_add = tx_word_tcp_sum(progress, dma_rdata,
								(progress == 32'd16) ? loaded_total_len : tx_total_len);
							tx_buf_data[progress[TX_BUF_AW+1:2]] <= dma_rdata;
							if(tx_ring_submit_active) begin
								tx_ring_data[{tx_load_desc, progress[TX_BUF_AW+1:2]}] <= dma_rdata;
							end
							tx_ip_sum <= tx_ip_sum + tx_word_ip_sum(progress, dma_rdata);
							tx_tcp_sum <= tx_tcp_sum + tcp_add +
								((progress == 32'd16 && loaded_total_len >= 16'd40) ?
									(32'd6 + {16'h0000, loaded_total_len - 16'd20}) : 32'h0000_0000);
							if(progress == 32'd16) tx_total_len <= loaded_total_len;
						end else last_tx_word <= dma_rdata;
					end
					if(rx_op && !direct_rx_mode) begin
						rx_ring_rd <= rx_ring_rd + {{(RX_RING_AW-1){1'b0}}, 1'b1};
					end
					progress <= progress + 32'd4;

					if((remaining <= 32'd4) || (rx_op && selected_rx_last)) begin
						if(!rx_op && tx_offload_active) begin
							tx_offload_state <= TX_OFF_PATCH;
							progress <= tx_dma_len;
						end else begin
							busy <= 1'b0;
							done <= 1'b1;
							frame_len <= progress + ((remaining <= 32'd4) ? remaining : 32'd4);
						end
						if(rx_op) begin
							rx_count <= rx_count + 32'd1;
							irq_status <= irq_status | 32'h0000_0001;
						end else if(!tx_offload_active) begin
							tx_count <= tx_count + 32'd1;
							irq_status <= irq_status | 32'h0000_0002;
						end
					end
				end
			end

			case({ring_push, ring_pop})
				2'b10: rx_ring_count <= rx_ring_count + {{RX_RING_AW{1'b0}}, 1'b1};
				2'b01: rx_ring_count <= rx_ring_count - {{RX_RING_AW{1'b0}}, 1'b1};
				default: begin end
			endcase

			case({ring_push_last, ring_pop_last})
				2'b10: rx_frame_count <= rx_frame_count + 16'd1;
				2'b01: rx_frame_count <= rx_frame_count - 16'd1;
				default: begin end
			endcase
		end
	end
endmodule
