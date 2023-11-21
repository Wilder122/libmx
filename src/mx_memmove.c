#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *buffer = malloc(len);

    if (buffer == NULL) {
        return NULL; // Handle allocation failure
    }

    mx_memcpy(buffer, src, len);
    mx_memcpy(dst, buffer, len);
    
    free(buffer);

    return dst;
}


