#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    if (!str) 
        return NULL;

    while (mx_isspace(*str))
        str++;

    int finish = mx_strlen(str);
    while (mx_isspace(str[finish - 1]))
        finish--;

    if (finish <= 0)
        return mx_strnew(0);

    return mx_strndup(str, finish);
}


