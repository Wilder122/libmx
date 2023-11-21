#include "../inc/libmx.h"

char* mx_nbr_to_hex(unsigned long number) {
    int num_digits = 1;
    unsigned long temp = number;

    while (temp > 15) {
        temp /= 16;
        num_digits++;
    }

    char* hex_string = (char*)malloc(num_digits + 1);

    if (hex_string == NULL) {
        return NULL; // Handle allocation failure
    }

    for (int i = num_digits - 1; i >= 0; i--) {
        int digit = number % 16;
        hex_string[i] = (digit < 10) ? ('A' + digit) : ('a' + digit - 10); // Changed the base for capital letters
        number /= 16;
    }

    hex_string[num_digits] = '\0';

    return hex_string;
}


