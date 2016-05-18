#pragma once

#include "http.h"

typedef struct request_s request_t;

http_method_t request_getMethod(request_t * self);
const char * request_getURI(request_t * self);
const char * request_getURIParam(request_t * self, const char * paramName);
const char * request_getHeader(request_t * self, const char * headerName);
const char * request_getFormField(request_t * self, const char * fieldName);