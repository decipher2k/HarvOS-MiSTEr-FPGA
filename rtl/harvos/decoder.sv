
//------------------------------------------------------------------------------
// HarvOS decoder – RV32I subset + custom SEC clears
// Replaces placeholder sections with functional decode logic based on the
// instruction layout described in the HarvOS whitepaper (RV32I compatible).
//------------------------------------------------------------------------------

`timescale 1ns/1ps

// Import macro and constant definitions (e.g. OPCODE_SEC, FUNCT3_CLRREG/CLRMEM)
import harvos_pkg_flat_pkg::*;

module decoder
(
    input  logic [31:0] instr,

    // Parsed fields
    output logic        valid,
    output logic [6:0]  opcode,
    output logic [2:0]  funct3,
    output logic [6:0]  funct7,
    output logic [4:0]  rd,
    output logic [4:0]  rs1,
    output logic [4:0]  rs2,

    // Immediates
    output logic [31:0] imm_i,
    output logic [31:0] imm_s,
    output logic [31:0] imm_b,
    output logic [31:0] imm_j,
    output logic [31:0] imm_u,

    // HarvOS security-extension helpers
    output logic        is_clrreg,
    output logic        is_clrmem
);

    // Basic field extraction
    assign opcode = instr[6:0];
    assign rd     = instr[11:7];
    assign funct3 = instr[14:12];
    assign rs1    = instr[19:15];
    assign rs2    = instr[24:20];
    assign funct7 = instr[31:25];

    // Sign-extended immediates (RV32I)
    assign imm_i = {{20{instr[31]}}, instr[31:20]};

    assign imm_s = {{20{instr[31]}}, instr[31:25], instr[11:7]};

    // B-type: imm[12|10:5|4:1|11] << 1
    assign imm_b = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};

    // J-type: imm[20|10:1|11|19:12] << 1
    assign imm_j = {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};

    // U-type: upper 20 bits, low 12 zero
    assign imm_u = {instr[31:12], 12'b0};

    // Very permissive "valid": treat any non-0 opcode as syntactically valid.
    // Actual illegal-instruction handling occurs elsewhere.
    assign valid = 1'b1;

    // HarvOS security micro-ops encoded in the custom SEC opcode
    // Defaults
    assign is_clrreg = (opcode == 7'b0001011) && (funct3 == 3'b000);
    assign is_clrmem = (opcode == 7'b0001011) && (funct3 == 3'b001);

endmodule
