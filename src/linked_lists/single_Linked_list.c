#include <stdlib.h>
#include <stdio.h>
#include "Linked_List.h"

single_Node* make_single_Linked_List(){
    single_Node* first_node = malloc(sizeof(single_Node));
    if (!first_node) {
        perror("Failed to allocate memory for head node");
        exit(EXIT_FAILURE);
    }
    first_node->data = NULL;
    first_node->next = NULL;
    return first_node;
}

void add_data_to_Front_Linked_List(single_Node* list,void* data){
    if (list == NULL) {
        fprintf(stderr, "List is NULL\n");
        return;
    }

    single_Node* new_node = malloc(sizeof(single_Node));
    if (new_node == NULL) {
        perror("Failed to allocate memory for new node");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = list->next;
    list->next = new_node;
}

void add_data_to_Back_Linked_List(single_Node* list,void* data){
    if (list == NULL) {
        fprintf(stderr, "List is NULL\n");
        return;
    }

    single_Node* new_node = malloc(sizeof(single_Node));
    if (new_node == NULL) {
        perror("Failed to allocate memory for new node");
        exit(EXIT_FAILURE);
    }
    new_node->next = NULL;

    single_Node* next_node = list->next;
    while (next_node->next != NULL){
        next_node = next_node->next;
    }
    new_node->data = data;
    next_node->next = new_node;
}

void add_data_add_index_Linked_list(single_Node* list,void* data,int index){
    single_Node* next_node = list;
    for(int i = 0;i < index;i++){
        if(next_node->next == NULL){
            perror("no next in this linked list");
            return;
        }
        next_node = next_node->next;
    }
    add_data_to_Front_Linked_List(next_node,data);
}