#include "../inc/libmx.h"

char* mx_strdup(const char *s1) {
    if (!s1)
        return NULL;

    char *str = mx_strnew(mx_strlen(s1));
    if (!str) {
        return NULL;
    }

    mx_strcpy(str, s1);
    return str;
}


