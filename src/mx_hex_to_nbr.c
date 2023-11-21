#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    int length = 0;
    unsigned long result = 0;
    unsigned long base = 1;

    if (hex != NULL) {
        while (hex[length]) {
            length++;
        }
    } else {
        return result;
    }

    for (int i = length - 1; i >= 0; i--) {
        if (hex[i] >= 48 && hex[i] <= 57) {
            result += (hex[i] - 48) * base;
        } else if (hex[i] >= 65 && hex[i] <= 70) {
            result += (hex[i] - 55) * base;
        } else if (hex[i] >= 97 && hex[i] <= 102) {
            result += (hex[i] - 87) * base;
        } else {
            return 0;
        }
        base *= 16;
    }

    return result;
}


