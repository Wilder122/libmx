#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    int file_descriptor = open(file, O_RDONLY);

    if (file_descriptor == -1) {
        close(file_descriptor);
        return NULL;
    }

    int file_length = 0, temp;
    char buffer;

    for (temp = read(file_descriptor, &buffer, 1); temp > 0; file_length++) {
        temp = read(file_descriptor, &buffer, 1);
    }

    close(file_descriptor);

    int new_file_descriptor = open(file, O_RDONLY);

    if (file_length == 0) {
        return NULL;
    }

    char* result = mx_strnew(file_length);
    temp = read(new_file_descriptor, result, file_length);
    close(new_file_descriptor);

    return result;
}


