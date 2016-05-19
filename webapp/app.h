#pragma once

#include "request.h"
#include "response.h"
#include "http.h"

const int APP_PORT_DEFAULT = 5000;
const char * const APP_ADDR_DEFAULT = "127.0.0.1";
//
// web server app type
typedef struct app_s app_t;

//
// http request user handler function pointer
typedef void (*request_handler_fn)(app_t * app, request_t * req, response_t * res);

app_t * app_new(void);
void app_free(app_t * self);
//
// returns old user context
void * app_setContext(app_t * self, void * ctx);
void * app_getContext(app_t * self);
//
// set user handler function for uri request with defined methods
void app_route(app_t * self, const char * uri, request_handler_fn handler, http_method_t methods);

typedef struct app_run_options_s {
    const char * ipAddress;
    unsigned int port;
} app_run_options_t;

// create initialized instance of run options struct
app_run_options_t app_run_options_create(void);
//
// starts infinite loop with clients requests handling
// opts - pass NULL for default port (5000) on localhost
void app_run(app_t * self, app_run_options_t * opts);
