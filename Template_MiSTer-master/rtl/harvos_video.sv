// Copyright 2025 Dennis Michael Heine

module harvos_video
(
	input  logic        clk,
	input  logic        reset,
	input  logic        pal,
	input  logic        scandouble,
	input  logic        bootrom_wr,
	input  logic [16:0] bootrom_addr,
	input  logic [15:0] bootrom_data,
	input  logic        bootrom_loaded,

	input  logic [31:0] debug_pc,
	input  logic [31:0] debug_instr,
	input  logic [31:0] debug_scause,
	input  logic [31:0] debug_stval,
	input  logic [31:0] debug_state,
	input  logic [31:0] debug_word0,
	input  logic [31:0] debug_word1,
	input  logic [31:0] debug_word2,
	input  logic [31:0] debug_entropy,
	input  logic        debug_trap,

	output logic        ce_pix,
	output logic        HBlank,
	output logic        HSync,
	output logic        VBlank,
	output logic        VSync,
	output logic [7:0]  video_r,
	output logic [7:0]  video_g,
	output logic [7:0]  video_b
);

	logic [9:0] hc;
	logic [9:0] vc;
	logic [31:0] frame_ctr;
	logic [16:0] boot_addr;
	logic [15:0] boot_pixel;
	logic        boot_draw_q;

	wire [9:0] visible_y = scandouble ? {1'b0, vc[9:1]} : vc;
	wire       active    = ~(HBlank | VBlank);
	wire [9:0] boot_y0   = pal ? 10'd30 : 10'd0;
	wire       boot_draw = active &&
	                       (hc >= 10'd48) && (hc < 10'd480) &&
	                       (visible_y >= boot_y0) && (visible_y < (boot_y0 + 10'd240));

	function automatic logic [16:0] boot_addr_of(input logic [9:0] x, input logic [9:0] y);
		logic [16:0] x17;
		logic [16:0] y17;
		begin
			x17 = {7'd0, x};
			y17 = {7'd0, y};
			boot_addr_of = (y17 << 8) + (y17 << 7) + (y17 << 5) + (y17 << 4) + x17;
		end
	endfunction

	always_comb begin
		if(boot_draw) boot_addr = boot_addr_of(hc - 10'd48, visible_y - boot_y0);
		else boot_addr = 17'd0;
	end

	harvos_boot_ram boot_image (
		.clk(clk),
		.wr(bootrom_wr),
		.waddr(bootrom_addr),
		.wdata(bootrom_data),
		.raddr(boot_addr),
		.rdata(boot_pixel)
	);

	always_ff @(posedge clk) begin
		if(reset) begin
			ce_pix    <= 1'b0;
			hc        <= 10'd0;
			vc        <= 10'd0;
			HBlank    <= 1'b0;
			HSync     <= 1'b0;
			VBlank    <= 1'b0;
			VSync     <= 1'b0;
			frame_ctr <= 32'h0000_0000;
			boot_draw_q <= 1'b0;
		end else begin
			if(scandouble) ce_pix <= 1'b1;
			else ce_pix <= ~ce_pix;
			boot_draw_q <= boot_draw;

			if(ce_pix) begin
				if(hc == 10'd637) begin
					hc <= 10'd0;
					if(vc == (pal ? (scandouble ? 10'd623 : 10'd311) :
					               (scandouble ? 10'd523 : 10'd261))) begin
						vc <= 10'd0;
						frame_ctr <= frame_ctr + 32'd1;
					end else begin
						vc <= vc + 10'd1;
					end
				end else begin
					hc <= hc + 10'd1;
				end

				if(hc == 10'd529) HBlank <= 1'b1;
				else if(hc == 10'd0) HBlank <= 1'b0;

				if(hc == 10'd544) begin
					HSync <= 1'b1;

					if(pal) begin
						if(vc == (scandouble ? 10'd609 : 10'd304)) VSync <= 1'b1;
						else if(vc == (scandouble ? 10'd617 : 10'd308)) VSync <= 1'b0;

						if(vc == (scandouble ? 10'd601 : 10'd300)) VBlank <= 1'b1;
						else if(vc == 10'd0) VBlank <= 1'b0;
					end else begin
						if(vc == (scandouble ? 10'd490 : 10'd245)) VSync <= 1'b1;
						else if(vc == (scandouble ? 10'd496 : 10'd248)) VSync <= 1'b0;

						if(vc == (scandouble ? 10'd480 : 10'd240)) VBlank <= 1'b1;
						else if(vc == 10'd0) VBlank <= 1'b0;
					end
				end

				if(hc == 10'd590) HSync <= 1'b0;
			end
		end
	end

	always_comb begin : paint
		logic [31:0] status_mix;
		logic [7:0]  rail;

		video_r = 8'h00;
		video_g = 8'h00;
		video_b = 8'h00;
		status_mix = debug_pc ^ debug_instr ^ debug_scause ^ debug_stval ^
		             debug_state ^ debug_word0 ^ debug_word1 ^ debug_word2 ^
		             debug_entropy ^ frame_ctr;
		rail = {status_mix[5:0], 2'b00};

		if(active) begin
			video_r = 8'd2;
			video_g = 8'd4;
			video_b = 8'd6;

			if(bootrom_loaded && boot_draw_q) begin
				video_r = {boot_pixel[15:11], boot_pixel[15:13]};
				video_g = {boot_pixel[10:5],  boot_pixel[10:9]};
				video_b = {boot_pixel[4:0],   boot_pixel[4:2]};
			end else begin
				if(hc[5:0] == status_mix[5:0]) begin
					video_r = debug_trap ? 8'd120 : 8'd0;
					video_g = debug_trap ? 8'd24  : (8'd24 + rail[7:3]);
					video_b = debug_trap ? 8'd28  : (8'd48 + rail[7:2]);
				end

				if((hc < 10'd48) || (hc >= 10'd480)) begin
					video_r = debug_trap ? 8'd90 : 8'd4;
					video_g = debug_trap ? 8'd8  : 8'd14;
					video_b = debug_trap ? 8'd12 : 8'd24;
				end
			end
		end
	end
endmodule
