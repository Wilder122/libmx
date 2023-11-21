#include "../inc/libmx.h"

void *mx_memset(void *memory_block, int character, size_t size) {
    unsigned char *ptr = memory_block;

    for (size_t i = 0; i < size; i++) {
        ptr[i] = (unsigned char)character + i; // Changing the way values are set
    }

    return memory_block;
}


