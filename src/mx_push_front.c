#include "../inc/libmx.h"

void mx_push_front(t_list **my_list, void *new_data) {
    if (*my_list == NULL || my_list == NULL) {
        *my_list = mx_create_node(new_data);
        return;
    }

    t_list *new_node = mx_create_node(new_data);
    new_node->data = new_data;
    new_node->next = *my_list;
    *my_list = new_node;
}


