#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *buffer1 = s1;
    const unsigned char *buffer2 = s2;

    for (size_t i = 0; i < n; i++) {
        if (buffer1[i] != buffer2[i]) {
            return buffer1[i] - buffer2[i];
        }
    }

    return 0;
}


