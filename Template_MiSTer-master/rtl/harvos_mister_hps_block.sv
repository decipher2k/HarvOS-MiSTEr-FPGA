// Copyright 2025 Dennis Michael Heine

module harvos_mister_hps_block
#(
	parameter int DRIVE_COUNT = 2,
	parameter int BUFFER_WORDS = 8192
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

	input  logic [DRIVE_COUNT-1:0] img_mounted,
	input  logic        img_readonly,
	input  logic [63:0] img_size,

	output logic [31:0] sd_lba[DRIVE_COUNT],
	output logic [5:0]  sd_blk_cnt[DRIVE_COUNT],
	output logic [DRIVE_COUNT-1:0] sd_rd,
	output logic [DRIVE_COUNT-1:0] sd_wr,
	input  logic [DRIVE_COUNT-1:0] sd_ack,

	input  logic [12:0] sd_buff_addr,
	input  logic [15:0] sd_buff_dout,
	output logic [15:0] sd_buff_din[DRIVE_COUNT],
	input  logic        sd_buff_wr,

	output logic [31:0] status
);
	localparam logic [31:0] HPS_BLOCK_ID = 32'h4850_5344; // "HPSD"
	localparam int DRIVE_BITS = (DRIVE_COUNT <= 2) ? 1 : $clog2(DRIVE_COUNT);
	localparam int BUFFER_AW = $clog2(BUFFER_WORDS);

	logic [31:0] ctrl;
	logic [31:0] lba_lo;
	logic [31:0] lba_hi;
	logic [31:0] count;
	logic [31:0] buffer_index;
	logic [DRIVE_BITS-1:0] drive;
	logic [DRIVE_BITS-1:0] active_drive;
	logic [DRIVE_COUNT-1:0] mounted;
	logic [DRIVE_COUNT-1:0] readonly;
	logic [63:0] size_bytes[DRIVE_COUNT];
	logic        busy;
	logic        done;
	logic        fault;
	logic        write_op;
	logic [15:0] buffer[0:BUFFER_WORDS-1];

	wire start_cmd = mmio_req && mmio_we && (mmio_addr == 8'h04) && mmio_wdata[0];
	wire clear_cmd = mmio_req && mmio_we && (mmio_addr == 8'h04) && mmio_wdata[2];
	wire selected_mounted = mounted[drive];
	wire selected_readonly = readonly[drive];
	wire selected_ack = sd_ack[active_drive];
	wire [BUFFER_AW-1:0] cpu_buf_index = buffer_index[BUFFER_AW-1:0];
	wire [BUFFER_AW-1:0] cpu_buf_next = buffer_index[BUFFER_AW-1:0] + {{(BUFFER_AW-1){1'b0}}, 1'b1};
	wire [BUFFER_AW-1:0] hps_buf_index = sd_buff_addr[BUFFER_AW-1:0];
	wire [31:0] selected_size_lo = size_bytes[drive][31:0];
	wire [31:0] selected_size_hi = size_bytes[drive][63:32];

	genvar gi;
	generate
		for(gi = 0; gi < DRIVE_COUNT; gi = gi + 1) begin : gen_hps_read_data
			assign sd_buff_din[gi] = buffer[hps_buf_index];
		end
	endgenerate

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

	always_comb begin
		status = 32'h4800_0000;
		status[17:16] = mounted;
		status[19:18] = readonly;
		status[10] = fault;
		status[9] = done;
		status[8] = busy;
		status[4] = write_op;
		status[0] = drive[0];
		status[1] = active_drive[0];

		case(mmio_addr)
			8'h00: mmio_rdata = HPS_BLOCK_ID;
			8'h04: mmio_rdata = ctrl;
			8'h08: mmio_rdata = status;
			8'h0C: mmio_rdata = {{(32-DRIVE_BITS){1'b0}}, drive};
			8'h10: mmio_rdata = lba_lo;
			8'h14: mmio_rdata = lba_hi;
			8'h18: mmio_rdata = count;
			8'h1C: mmio_rdata = buffer_index;
			8'h20: mmio_rdata = {buffer[cpu_buf_next], buffer[cpu_buf_index]};
			8'h24: mmio_rdata = selected_size_lo;
			8'h28: mmio_rdata = selected_size_hi;
			8'h2C: mmio_rdata = {30'h00000000, selected_readonly, selected_mounted};
			8'h30: mmio_rdata = {16'h0000, sd_ack, sd_wr, sd_rd};
			default: mmio_rdata = 32'h0000_0000;
		endcase
	end

	always_ff @(posedge clk) begin
		integer i;
		if(reset) begin
			ctrl <= 32'h0000_0000;
			lba_lo <= 32'h0000_0000;
			lba_hi <= 32'h0000_0000;
			count <= 32'h0000_0001;
			buffer_index <= 32'h0000_0000;
			drive <= '0;
			active_drive <= '0;
			mounted <= '0;
			readonly <= '0;
			busy <= 1'b0;
			done <= 1'b0;
			fault <= 1'b0;
			write_op <= 1'b0;
			sd_rd <= '0;
			sd_wr <= '0;
			for(i = 0; i < DRIVE_COUNT; i = i + 1) begin
				size_bytes[i] <= 64'h0000_0000_0000_0000;
				sd_lba[i] <= 32'h0000_0000;
				sd_blk_cnt[i] <= 6'h00;
			end
		end else begin
			for(i = 0; i < DRIVE_COUNT; i = i + 1) begin
				if(img_mounted[i]) begin
					mounted[i] <= 1'b1;
					readonly[i] <= img_readonly;
					size_bytes[i] <= img_size;
				end
			end

			if(sd_buff_wr) begin
				buffer[hps_buf_index] <= sd_buff_dout;
			end

			if(mmio_req && mmio_we) begin
				case(mmio_addr)
					8'h04: begin
						ctrl <= apply_wstrb(ctrl, mmio_wdata, mmio_be);
						if(clear_cmd) begin
							done <= 1'b0;
							fault <= 1'b0;
						end
					end
					8'h0C: drive <= mmio_wdata[DRIVE_BITS-1:0];
					8'h10: lba_lo <= apply_wstrb(lba_lo, mmio_wdata, mmio_be);
					8'h14: lba_hi <= apply_wstrb(lba_hi, mmio_wdata, mmio_be);
					8'h18: count <= apply_wstrb(count, mmio_wdata, mmio_be);
					8'h1C: buffer_index <= apply_wstrb(buffer_index, mmio_wdata, mmio_be);
					8'h20: begin
						buffer[cpu_buf_index] <= mmio_wdata[15:0];
						buffer[cpu_buf_next] <= mmio_wdata[31:16];
						buffer_index <= buffer_index + 32'd2;
					end
					default: begin end
				endcase
			end else if(mmio_req && !mmio_we && (mmio_addr == 8'h20)) begin
				buffer_index <= buffer_index + 32'd2;
			end

			if(clear_cmd) begin
				sd_rd <= '0;
				sd_wr <= '0;
				busy <= 1'b0;
			end else if(start_cmd && !busy) begin
				done <= 1'b0;
				fault <= 1'b0;
				write_op <= mmio_wdata[1];
				active_drive <= drive;
				if(!selected_mounted || (mmio_wdata[1] && selected_readonly) ||
				   (count == 32'h0000_0000) || (count > 32'd64) ||
				   (lba_hi != 32'h0000_0000)) begin
					fault <= 1'b1;
					done <= 1'b1;
				end else begin
					busy <= 1'b1;
					sd_lba[drive] <= lba_lo;
					sd_blk_cnt[drive] <= count[5:0] - 6'd1;
					if(mmio_wdata[1]) begin
						sd_wr[drive] <= 1'b1;
					end else begin
						sd_rd[drive] <= 1'b1;
					end
				end
			end else if(busy && selected_ack) begin
				sd_rd[active_drive] <= 1'b0;
				sd_wr[active_drive] <= 1'b0;
				busy <= 1'b0;
				done <= 1'b1;
			end
		end
	end
endmodule
