// Copyright 2025 Dennis Michael Heine

module harvos_smp_bus2
(
	input  logic        clk,
	input  logic        reset,

	input  logic        c0_req,
	input  logic        c0_we,
	input  logic [31:0] c0_addr,
	input  logic [31:0] c0_wdata,
	input  logic [3:0]  c0_be,
	output logic [31:0] c0_rdata,
	output logic        c0_ready,

	input  logic        c1_req,
	input  logic        c1_we,
	input  logic [31:0] c1_addr,
	input  logic [31:0] c1_wdata,
	input  logic [3:0]  c1_be,
	output logic [31:0] c1_rdata,
	output logic        c1_ready,

	output logic        m_req,
	output logic        m_we,
	output logic [31:0] m_addr,
	output logic [31:0] m_wdata,
	output logic [3:0]  m_be,
	input  logic [31:0] m_rdata
);

	logic last_grant;
	logic grant0;
	logic grant1;

	always_comb begin
		grant0 = 1'b0;
		grant1 = 1'b0;

		if(c0_req && c1_req) begin
			grant0 = last_grant;
			grant1 = ~last_grant;
		end else if(c0_req) begin
			grant0 = 1'b1;
		end else if(c1_req) begin
			grant1 = 1'b1;
		end

		m_req   = grant0 || grant1;
		m_we    = grant0 ? c0_we    : c1_we;
		m_addr  = grant0 ? c0_addr  : c1_addr;
		m_wdata = grant0 ? c0_wdata : c1_wdata;
		m_be    = grant0 ? c0_be    : c1_be;

		c0_ready = grant0;
		c1_ready = grant1;
		c0_rdata = m_rdata;
		c1_rdata = m_rdata;
	end

	always_ff @(posedge clk) begin
		if(reset) begin
			last_grant <= 1'b0;
		end else if(grant0 || grant1) begin
			last_grant <= grant1;
		end
	end
endmodule
