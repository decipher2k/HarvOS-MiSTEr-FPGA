// Copyright 2025 Dennis Michael Heine

module harvos_kernel_model
#(
	parameter int TASKS = 4
)
(
	input  logic        clk,
	input  logic        reset,
	input  logic        tick,
	input  logic        syscall_valid,
	input  logic [3:0]  syscall_no,
	input  logic [31:0] caps,

	output logic [1:0]  current_task,
	output logic        syscall_allow,
	output logic        policy_fault,
	output logic [3:0]  ipc_depth,
	output logic [31:0] status
);

	always_comb begin
		case(syscall_no)
			4'h0: syscall_allow = caps[0];
			4'h1: syscall_allow = caps[1] && (ipc_depth != 4'hF);
			4'h2: syscall_allow = caps[2];
			4'h3: syscall_allow = caps[3];
			default: syscall_allow = 1'b0;
		endcase
	end

	assign policy_fault = syscall_valid && !syscall_allow;
	assign status = {20'h00000, policy_fault, syscall_allow, current_task, ipc_depth, syscall_no};

	always_ff @(posedge clk) begin
		if(reset) begin
			current_task <= 2'd0;
			ipc_depth <= 4'h0;
		end else begin
			if(tick) current_task <= current_task + 2'd1;
			if(syscall_valid && syscall_allow && (syscall_no == 4'h1)) ipc_depth <= ipc_depth + 4'd1;
			else if(tick && (ipc_depth != 4'h0)) ipc_depth <= ipc_depth - 4'd1;
		end
	end
endmodule
