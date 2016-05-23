#include <stdlib.h>

#include "map.h"
#include "response.h"

struct response_s {
    unsigned char version_major;
    unsigned char version_minor;
	unsigned short statusCode;			// default 200 OK
	const char * statusString;
	map_t * headers;
	char * contentBytes;
	int contentBytesLength;
	//
	char * redirectURL;  	// default NULL
};

response_t * response_new(void) {
	// @todo
	return NULL;
}

void response_free(response_t * self) {
	// @todo
	free(self);
}

void response_setContent(response_t * self, const char * contentBytes, size_t contentLength) {
    // @todo
}
