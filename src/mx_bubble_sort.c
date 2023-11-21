#include "../inc/libmx.h"

int mx_bubble_sort(char **array, int size) {
    int swap_counter = 0;
    int is_sorted = 0;

    while (!is_sorted) {
        is_sorted = 1;

        for (int i = 0; i < size - 1; i++) {
            if (mx_strcmp(array[i], array[i + 1]) > 0) {
                char *temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swap_counter++;
                is_sorted = 0;
            }
        }
    }

    return swap_counter;
}


