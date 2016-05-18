#include "map.h"
#include "request.h"

struct request_s {
	map_t * const args;		// URI args
	map_t * const form;		// POST args
	map_t * const headers;
	map_t * const files;
	map_t * const cookies;
};

static request_t * request_new(void);
static void request_free(request_t *);