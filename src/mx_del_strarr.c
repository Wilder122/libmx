#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    if (arr == NULL || *arr == NULL) {
        return;
    }

    char** temp_arr = *arr;

    for (int i = 0; temp_arr[i] != NULL; i++) {
        mx_strdel(&temp_arr[i]);
    }

    free(*arr);
    *arr = NULL;
}


