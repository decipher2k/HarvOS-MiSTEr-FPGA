// Copyright 2025 Dennis Michael Heine

module harvos_trace
(
	input  logic        clk,
	input  logic        reset,
	input  logic        event_valid,
	input  logic [7:0]  event_code,
	input  logic [31:0] event_data,

	output logic [31:0] digest,
	output logic [15:0] count
);

	wire [31:0] rotated = {digest[26:0], digest[31:27]};

	always_ff @(posedge clk) begin
		if(reset) begin
			digest <= 32'h4841_5256;
			count <= 16'h0000;
		end else if(event_valid) begin
			digest <= rotated ^ event_data ^ {24'h000000, event_code};
			count <= count + 16'd1;
		end
	end
endmodule
