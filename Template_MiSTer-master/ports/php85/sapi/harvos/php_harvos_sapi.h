/* Copyright 2025 Dennis Michael Heine */

#ifndef PHP_HARVOS_SAPI_H
#define PHP_HARVOS_SAPI_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define HARVOS_PHP85_ABI_VERSION 1u

#define HARVOS_PHP85_FLAG_HEADERS_ONLY      (1u << 0)
#define HARVOS_PHP85_FLAG_DEBUG             (1u << 1)
#define HARVOS_PHP85_RESULT_TRUNCATED       (1u << 16)
#define HARVOS_PHP85_RESULT_HEADER_TRUNCATED (1u << 17)

typedef enum {
	HARVOS_PHP85_OK = 0,
	HARVOS_PHP85_ERR_ARG = -1,
	HARVOS_PHP85_ERR_STARTUP = -2,
	HARVOS_PHP85_ERR_REQUEST = -3,
	HARVOS_PHP85_ERR_EXEC = -4,
	HARVOS_PHP85_ERR_SHUTDOWN = -5
} harvos_php85_status_t;

typedef struct {
	uint32_t abi_version;

	const char *script_name;
	const char *script_source;
	size_t script_source_len;

	const char *document_root;
	const char *request_uri;
	const char *query_string;
	const char *method;
	const char *content_type;
	const char *cookie_data;

	const uint8_t *post_body;
	size_t post_body_len;

	const char *server_addr;
	const char *remote_addr;
	uint16_t server_port;
	uint16_t remote_port;

	char *output;
	size_t output_cap;
	size_t output_len;

	char *headers;
	size_t headers_cap;
	size_t headers_len;

	uint32_t response_code;
	uint32_t flags;
	uint32_t result_flags;

	void *host_context;

	/* Internal per-request cursor used by the SAPI read_post callback. */
	size_t _post_offset;
} harvos_php85_request_t;

int harvos_php85_startup(const char *extra_ini);
int harvos_php85_shutdown(void);
int harvos_php85_execute(harvos_php85_request_t *request);

#ifdef __cplusplus
}
#endif

#endif
