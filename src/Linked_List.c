#include <stdlib.h>
#include <stdio.h>
#include "Linked_List.h"

Node* Make_Linked_List(){
    Node* first_node = malloc(sizeof(Node));
    if (!first_node) {
        perror("Failed to allocate memory for head node");
        exit(EXIT_FAILURE);
    }
    first_node->data = NULL;
    first_node->next = NULL;
    return first_node;
}

void add_data_to_Linked_List(Node* list,void* data){
    if (list == NULL) {
        fprintf(stderr, "List is NULL\n");
        return;
    }

    Node* new_node = malloc(sizeof(Node));
    if (new_node == NULL) {
        perror("Failed to allocate memory for new node");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = list->next;
    list->next = new_node;
}

void print_Linked_List(Node* list){
    if (list == NULL) {
        fprintf(stderr, "List is NULL\n");
        return;
    }

    Node* next_node = list->next;
    while (next_node != NULL){
        printf("%d\n",*(int*)next_node->data);
        next_node = next_node->next;
    }
}

void free_Linked_List(Node* list) {
    if (list == NULL) {
        fprintf(stderr, "List is NULL\n");
        return;
    }
    Node* current = list;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }
}
