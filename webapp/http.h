#pragma once

// Flags
typedef enum http_method {
	HTTP_GET 		= 1,
	HTTP_HEAD 		= 1 << 1,
	HTTP_POST 		= 1 << 2,
	HTTP_PUT 		= 1 << 3,
	HTTP_DELETE 	= 1 << 4,
	HTTP_OPTIONS 	= 1 << 5
} http_method_t;