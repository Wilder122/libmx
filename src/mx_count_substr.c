#include "../inc/libmx.h"

int mx_count_substr(char const *str, char const *sub) {
    int count = 0;

    if (str == NULL || sub == NULL)
        return -1;

    if (mx_strlen(str) >= mx_strlen(sub)) {
        while (*str) {
            if (!mx_strncmp((char *)str, (char *)sub, mx_strlen(sub))) {
                count++;
            }
            str++;
        }
    }

    return count;
}


