#include <stdlib.h>
#include <stdio.h>
#include "Linked_List.h"

void print_Linked_List(single_Node* list){
    if (list == NULL) {
        fprintf(stderr, "List is NULL\n");
        return;
    }

    single_Node* next_node = list->next;
    while (next_node != NULL){
        printf("%d\n",*(int*)next_node->data);
        next_node = next_node->next;
    }
}

void free_Linked_List(single_Node* list) {
    if (list == NULL) {
        fprintf(stderr, "List is NULL\n");
        return;
    }
    single_Node* current = list;
    while (current != NULL) {
        single_Node* next = current->next;
        free(current);
        current = next;
    }
}
