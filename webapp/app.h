#pragma once

#include "request.h"
#include "response.h"
#include "http.h"

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
//
// default port (5000) on localhost
void app_run(app_t * self); 
void app_run_port(app_t * self, int port);
void app_run_ip_port(app_t * self, const char * ipAddr, int port);