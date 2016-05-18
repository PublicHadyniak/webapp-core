#include "map.h"
#include "response.h"

struct response_s {
	int statusCode;			// default 200 OK
	char * data;
	int dataLength;
	map_t * headers;
	char * redirectURL;  	// default NULL
};

response_t * response_new(void) {
	/* */
}
	
void response_free(response_t * self) {
	/* */
}