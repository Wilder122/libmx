#include "../inc/libmx.h"

char *mx_replace_substr(const char *original_str, const char *substring, const char *replacement) {
    if (!original_str || !substring || !replacement) {
        return NULL;
    }

    int modified_len = mx_strlen(original_str) - (mx_count_substr(original_str, substring) * mx_strlen(substring)) + (mx_strlen(replacement) * mx_count_substr(original_str, substring));

    char *temp = mx_strdup(original_str);
    char *modified_result = mx_strnew(modified_len);

    int i = 0;
    while (*temp) {
        if (!mx_strncmp(temp, substring, mx_strlen(substring))) {
            mx_strcat(modified_result, replacement);
            i += mx_strlen(replacement);
            temp += mx_strlen(substring);
        } else {
            modified_result[i++] = *temp++;
        }
    }
    modified_result[modified_len] = '\0';

    return modified_result;
}


