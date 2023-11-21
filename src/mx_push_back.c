#include "../inc/libmx.h"

void mx_push_back(t_list **my_list, void *new_data) {
    if (*my_list == NULL || my_list == NULL) {
        *my_list = mx_create_node(new_data);
        return;
    }

    t_list *current_node = *my_list;
    while (current_node->next) {
        current_node = current_node->next;
    }

    current_node->next = mx_create_node(new_data);
}


