// Copyright 2025 Dennis Michael Heine

module harvos_secure_boot
#(
	parameter logic [255:0] EXPECTED_HASH =
		256'h54e70887c7068d8afbc2542b32e61245e9d6efb7429cbf1ae14afd44c6c24a9d,
	parameter logic [255:0] TRUSTED_PUBLIC_KEY_HASH =
		256'hbd7a0499dd41743eafe0299ebb6056de3bb6fa804a8e05d5a86b1a2e43a03785,
	parameter logic [255:0] EXPECTED_SIGNATURE =
		256'h89d7f25a9038eb8eb726f8f2b21d371d93e0381ed31e45e2e859083063fd873e
)
(
	input  logic        clk,
	input  logic        reset,
	input  logic [255:0] image_hash,
	input  logic [255:0] public_key_hash,
	input  logic [255:0] signature,

	output logic        boot_ok,
	output logic        mpu_lock,
	output logic [31:0] boot_status
);

	typedef enum logic [1:0] {
		BOOT_HASH = 2'd0,
		BOOT_LOCK = 2'd1,
		BOOT_RUN  = 2'd2,
		BOOT_FAIL = 2'd3
	} boot_state_e;

	boot_state_e state;
	logic sig_valid;
	logic [31:0] sig_digest;

	harvos_signature #(
		.EXPECTED_IMAGE_HASH(EXPECTED_HASH),
		.TRUSTED_PUBLIC_KEY_HASH(TRUSTED_PUBLIC_KEY_HASH),
		.EXPECTED_SIGNATURE(EXPECTED_SIGNATURE)
	) signature_check (
		.image_hash(image_hash),
		.public_key_hash(public_key_hash),
		.signature(signature),
		.digest(sig_digest),
		.valid(sig_valid)
	);

	always_ff @(posedge clk) begin
		if(reset) begin
			state <= BOOT_HASH;
			boot_ok <= 1'b0;
			mpu_lock <= 1'b0;
			boot_status <= 32'h0000_0000;
		end else begin
			case(state)
				BOOT_HASH: begin
					if(sig_valid) begin
						boot_status <= sig_digest;
						state <= BOOT_LOCK;
					end else begin
						boot_status <= 32'hBAD0_0001;
						state <= BOOT_FAIL;
					end
				end
				BOOT_LOCK: begin
					mpu_lock <= 1'b1;
					state <= BOOT_RUN;
				end
				BOOT_RUN: begin
					boot_ok <= 1'b1;
					mpu_lock <= 1'b1;
				end
				default: begin
					boot_ok <= 1'b0;
					mpu_lock <= 1'b0;
				end
			endcase
		end
	end
endmodule
