#include "../inc/libmx.h"

void *mx_memcpy(void *restrict destination, const void *restrict source, size_t size) {
    for (size_t index = 0; index < size; index++) {
        ((unsigned char *)destination)[index] = ((unsigned char *)source)[index];
    }

    return destination;
}


