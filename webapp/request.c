#include <stdlib.h>

#include "map.h"
#include "request.h"

struct request_s {
	map_t * args;		// URI args
	map_t * form;		// POST args
	map_t * headers;
	map_t * files;
	map_t * cookies;
};

request_t * request_new(void) {
    return NULL;
}

void request_free(request_t * self) {
    // @todo
    free(self);
}
