#include "../inc/libmx.h"

int mx_binary_search(char **array, int size, const char *target, int *counter) {
    int left, right;
    left = 0;
    right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        *counter += 1;

        int comparison_result = mx_strcmp(array[mid], target);

        if (comparison_result == 0) {
            return mid;
        } else if (comparison_result > 0) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    *counter = 0;
    return -1;
}



