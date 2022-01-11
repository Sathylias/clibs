#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "stddef.h"

typedef struct Node {
    void *data;
    struct Node *next;
} Node;

typedef struct List {
    struct Node *head, *tail;
    size_t size;
} List;

void list_init(struct List *list);
void list_add(struct List *list, void *data, size_t size);

#endif // LINKEDLIST_H
