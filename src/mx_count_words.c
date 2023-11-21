#include "../inc/libmx.h"

int mx_count_words(const char *str, char delimiter) {
    if (str == NULL) {
        return -1;
    }

    int index = 0, word_count = 0;
    bool is_delimiter = true, is_available = false;

    while (str[index]) {
        if (str[index] == delimiter) {
            is_delimiter = true;
            is_available = true;
        } else if (is_delimiter == true) {
            word_count++;
            is_delimiter = false;
        }
        index++;
    }

    if (is_available) {
        return word_count;
    } else {
        return word_count - 1;
    }
}


