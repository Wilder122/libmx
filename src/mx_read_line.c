#include "../inc/libmx.h"

int mx_read_line(char **custom_lineptr, size_t buf_size, char custom_delim, const int custom_fd) {
    if (buf_size == 0 || custom_fd < 0) {
        return -2; // Invalid arguments
    }

    size_t bytes = 0;
    char buf;
    size_t capacity = buf_size;

    if (*custom_lineptr == NULL) {
        *custom_lineptr = (char *)malloc(buf_size);
    } else {
        if ((size_t)mx_strlen(*custom_lineptr) >= capacity) {
            capacity = (size_t)mx_strlen(*custom_lineptr) + buf_size;
            *custom_lineptr = (char *)mx_realloc(*custom_lineptr, capacity);
        }
    }

    while (read(custom_fd, &buf, 1) == 1) {
        if (buf == custom_delim) {
            break;
        }

        if (bytes >= capacity - 1) {
            capacity *= 2;
            *custom_lineptr = (char *)mx_realloc(*custom_lineptr, capacity);
        }

        (*custom_lineptr)[bytes] = buf;
        bytes++;
    }

    if (bytes == 0 && buf == 0) {
        return -1; // End of file
    }

    (*custom_lineptr)[bytes] = '\0';

    return bytes;
}

