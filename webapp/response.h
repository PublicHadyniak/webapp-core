#pragma once

#include <stdlib.h>

/**
*   A type for HTTP Response objects
*/
typedef struct response_s response_t;

void response_setStatus(response_t * self, int statusCode);
void response_setHeader(response_t * self, const char * key, const char * value);
void response_setCookie(response_t * self, const char * key, const char * value);
void response_setContent(response_t * self, const char * contentBytes, size_t contentLength);
void response_redirect(response_t * self, const char * redirectUrl);
