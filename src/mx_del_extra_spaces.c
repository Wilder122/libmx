#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
    if (!str) {
        return NULL;
    }

    char* result_buffer = mx_strnew(mx_strlen(str));
    int result_index = 0;
    int original_index = 0;

    while (str[original_index] != '\0') {
        if (!mx_isspace(str[original_index])) {
            result_buffer[result_index] = str[original_index];
            result_index++;
        }

        if (!mx_isspace(str[original_index]) && mx_isspace(str[original_index + 1])) {
            result_buffer[result_index] = ' ';
            result_index++;
        }

        original_index++;
    }

    char *result = mx_strtrim(result_buffer);
    mx_strdel(&result_buffer);

    return result;
}


