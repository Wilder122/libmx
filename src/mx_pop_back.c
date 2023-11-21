#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
    if (head == NULL || *head == NULL) {
        return;
    }

    t_list *current = *head;
    t_list *previous = NULL;

    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }

    if (previous == NULL) {
        // If there was only one element in the list
        free(*head);
        *head = NULL;
    } else {
        free(current);
        previous->next = NULL;
    }
}


