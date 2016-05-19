#include <stdlib.h>

#include "app.h"

// @todo move to separate module
typedef struct list_s list_t;

struct app_s {
    list_t * routes;
	/* smth */
	void * userContext;
};

app_t * app_new(void) {
    app_t * self = malloc(sizeof(struct app_s));
    self->userContext = NULL;
    return self;
}

void app_free(app_t * self) {
    free(self);
}

void * app_setContext(app_t * self, void * ctx) {
    void * oldContext = self->userContext;
    self->userContext = ctx;
    return oldContext;
}

void * app_getContext(app_t * self) {
    return self->userContext;
}

void app_route(app_t * self, const char * uri, request_handler_fn handler, http_method_t methods) {
    // @todo add data to routes

}

void app_run(app_t * self, app_run_options_t * opts) {
    // @todo
}

app_run_options_t app_run_options_create(void) {
    app_run_options_t opts = {
        .ipAddress = APP_ADDR_DEFAULT,
        .port = APP_PORT_DEFAULT
    };
    return opts;
}
