#ifndef UTILS_H
#define UTILS_H

#include <stddef.h>

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0])) 

#endif

void *safe_malloc(size_t n);

#endif // UTILS_H
