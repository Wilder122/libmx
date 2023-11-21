#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
    if (list == NULL) {
        return 0;
    }

    int length = 0;

    while (list) {
        list = list->next;
        length++;
    }

    return length;
}


