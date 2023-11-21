#include "../inc/libmx.h"

char* mx_itoa(int number) {
    int num_digits = 1;
    int temp = number;

    while (temp / 10 != 0) {
        temp /= 10;
        num_digits++;
    }

    if (number < 0) {
        num_digits++; 
    }

    char* result_str = (char*)malloc(num_digits + 1);

    if (result_str == NULL) {
        return NULL;
    }

    int index = 0;

    if (number < 0) {
        result_str[index++] = '-';
        number = -number;
    }

    while(number != 0) {
        result_str[index++] = '0' + (number % 10);
        number /= 10;
    }

    result_str[index] = '\0';

    int start = (result_str[0] == '-') ? 1 : 0;
    int end = index - 1;

    while (start < end) {
        char temp_char = result_str[start];
        result_str[start] = result_str[end];
        result_str[end] = temp_char;
        start++;
        end--;
    }

    return result_str;
}


