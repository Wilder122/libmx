#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *list, bool (*comparator)(void *, void *)) {
    if (list == NULL || comparator == NULL) {
        return list;
    }

    int length = mx_list_size(list);

    t_list *current;
    for (int i = 0; i < length; i++) {
        current = list;
        for (int j = 0; j < length - i - 1; j++) {
            if (comparator(current->data, current->next->data)) {
                void *temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
            }
            current = current->next;
        }
    }
    return list;
}


