#pragma once

/**
*   A type for string\string dictionary
*/
typedef struct map_s map_t;

map_t * map_new(void);
void map_free(map_t * self);

void map_put(map_t * self, const char * key, const char * value);
const char * map_get(map_t * self, const char * key);
const char * map_remove(map_t * self, const char * key);

int map_isEmpty(map_t * self);
int map_getSize(map_t * self);
int map_contains(map_t * self, const char * key);

