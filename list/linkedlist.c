#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "linkedlist.h"
#include "../utils.h"

void list_init(struct List *list) 
{ 
    list->size = 0; 
    list->head = list->tail = NULL;
} 

void list_add(struct List *list, void *data, size_t size)
{
    struct Node *new_node = safe_malloc(sizeof(struct Node));
    new_node->data = safe_malloc(size);
    new_node->data = data;

    if ((list->size)++ < 1) {
        list->head = list->tail = new_node;  
    } else {
        list->tail = list->tail->next = new_node; 
    }
}
