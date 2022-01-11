#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linkedlist.h"
#include "../utils.h"

int main(void)
{ 
    List char_list;

    char *char_data[] = { "Hello World", "Biggus Dickus", "Flanders" };

    // Instead of calling linkedlist_init, we could set all members to 0 at
    // initialization, like this: List list = { 0 };
    list_init(&char_list);  

    for (int i = 0; i < ARRAY_SIZE(char_data); i++) {
        list_add(&char_list, char_data[i], sizeof(char_data[i]));
    }

    for (Node *tmp = char_list.head; tmp != NULL; tmp = tmp->next) {
        printf("Value: %s\n", (char*)tmp->data);
    }
    
    return 0;
}
