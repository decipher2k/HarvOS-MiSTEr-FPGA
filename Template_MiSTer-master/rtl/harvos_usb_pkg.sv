// Copyright 2025 Dennis Michael Heine

package harvos_usb_pkg;
	localparam logic [3:0] USB_PID_OUT   = 4'h1;
	localparam logic [3:0] USB_PID_ACK   = 4'h2;
	localparam logic [3:0] USB_PID_DATA0 = 4'h3;
	localparam logic [3:0] USB_PID_SOF   = 4'h5;
	localparam logic [3:0] USB_PID_NYET  = 4'h6;
	localparam logic [3:0] USB_PID_IN    = 4'h9;
	localparam logic [3:0] USB_PID_NAK   = 4'hA;
	localparam logic [3:0] USB_PID_DATA1 = 4'hB;
	localparam logic [3:0] USB_PID_SETUP = 4'hD;
	localparam logic [3:0] USB_PID_STALL = 4'hE;

	localparam logic [1:0] USB_HANDSHAKE_NONE  = 2'd0;
	localparam logic [1:0] USB_HANDSHAKE_ACK   = 2'd1;
	localparam logic [1:0] USB_HANDSHAKE_NAK   = 2'd2;
	localparam logic [1:0] USB_HANDSHAKE_STALL = 2'd3;

	function automatic logic [7:0] usb_pid_byte(input logic [3:0] pid);
		usb_pid_byte = {~pid, pid};
	endfunction

	function automatic logic usb_pid_valid(input logic [7:0] pid_byte);
		usb_pid_valid = (pid_byte[7:4] == ~pid_byte[3:0]);
	endfunction

	function automatic logic usb_pid_is_token(input logic [3:0] pid);
		usb_pid_is_token = (pid == USB_PID_OUT) ||
		                   (pid == USB_PID_IN) ||
		                   (pid == USB_PID_SOF) ||
		                   (pid == USB_PID_SETUP);
	endfunction

	function automatic logic usb_pid_is_data(input logic [3:0] pid);
		usb_pid_is_data = (pid == USB_PID_DATA0) ||
		                  (pid == USB_PID_DATA1);
	endfunction

	function automatic logic usb_pid_is_handshake(input logic [3:0] pid);
		usb_pid_is_handshake = (pid == USB_PID_ACK) ||
		                       (pid == USB_PID_NAK) ||
		                       (pid == USB_PID_STALL) ||
		                       (pid == USB_PID_NYET);
	endfunction

	function automatic logic [1:0] usb_handshake_code(input logic [3:0] pid);
		begin
			case(pid)
				USB_PID_ACK:   usb_handshake_code = USB_HANDSHAKE_ACK;
				USB_PID_NAK:   usb_handshake_code = USB_HANDSHAKE_NAK;
				USB_PID_NYET:  usb_handshake_code = USB_HANDSHAKE_NAK;
				USB_PID_STALL: usb_handshake_code = USB_HANDSHAKE_STALL;
				default:       usb_handshake_code = USB_HANDSHAKE_NONE;
			endcase
		end
	endfunction

	function automatic logic [4:0] usb_crc5_token(input logic [10:0] token_bits);
		logic [4:0] crc;
		logic       mix;
		integer     i;
		begin
			crc = 5'h1F;
			for(i = 0; i < 11; i = i + 1) begin
				mix    = token_bits[i] ^ crc[0];
				crc[0] = crc[1];
				crc[1] = crc[2];
				crc[2] = crc[3] ^ mix;
				crc[3] = crc[4];
				crc[4] = mix;
			end
			usb_crc5_token = ~crc;
		end
	endfunction

	function automatic logic [15:0] usb_crc16_next(
		input logic [15:0] crc_in,
		input logic [7:0]  data
	);
		logic [15:0] crc;
		logic        mix;
		integer      i;
		begin
			crc = crc_in;
			for(i = 0; i < 8; i = i + 1) begin
				mix = crc[0] ^ data[i];
				crc = {1'b0, crc[15:1]};
				if(mix) crc = crc ^ 16'hA001;
			end
			usb_crc16_next = crc;
		end
	endfunction
endpackage
