#include "../inc/libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    if (!dst || !src)
        return NULL;

    for (int i = 0; i < len; i++) {
        if (src[i] == '\0') {
            return dst;
        }
        dst[i] = src[i];
    }
    return dst;
}


