#include "../inc/libmx.h"

t_list *mx_create_node(void *value) {
    t_list *newNode = (t_list *) malloc(sizeof(t_list));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}


