#pragma once

#include "request.h"
#include "response.h"
#include "http.h"

static const int APP_PORT_DEFAULT = 5000;
static const char * const APP_ADDR_DEFAULT = "127.0.0.1";

/**
 *  @brief Web application type
*/
typedef struct app_s app_t;

/**
*   http request user handler function pointer
*/
typedef void (*request_handler_fn)(app_t * app, request_t * req, response_t * res);

/**
*   @brief app_t instance contructor
*/
app_t * app_new(void);

/**
*   @brief app_t instance destructor
*/
void app_free(app_t * self);

/**
*   @brief Set pointer to context
*   @param ctx pointer to any user data
*   @return old context pointer
*
*   This pointer will be passed as a paramater to all route request handlers
*/
void * app_setContext(app_t * self, void * ctx);

/**
*   @brief Get context pointer from app_t instance
*/
void * app_getContext(app_t * self);

/**
*   set user handler function for uri request with defined methods
*/
void app_route(app_t * self, const char * uri, request_handler_fn handler, http_method_t methods);

/**
*   @brief struct of options to pass into app_run method
*/
typedef struct app_run_options_s {
    const char * ipAddress;
    unsigned int port;
} app_run_options_t;

/**
*   create initialized instance of run options struct
*/
app_run_options_t app_run_options_create(void);

/**
*   starts infinite loop with clients requests handling
*   opts - pass NULL for default port (5000) on localhost
*/
void app_run(app_t * self, app_run_options_t * opts);
