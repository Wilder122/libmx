#include "../inc/libmx.h"

char* mx_strnew(const int size) {
    if (size < 0)
        return NULL;

    char* str = (char *)malloc(sizeof(char) * (size + 1));
    if (!str)
        return str;

    for (int i = 0; i <= size; i++)
        str[i] = '\0';

    return str;
}


