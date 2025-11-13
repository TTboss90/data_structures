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
        free(current->data);
        free(current);
        current = next;
    }
}


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

    single_Node* next_node = list;
    while (next_node->next != NULL){
        next_node = next_node->next;
    }
    add_data_to_Front_Linked_List(next_node,data);
}

void add_data_add_index_Linked_list(single_Node* list,void* data,int index){
    single_Node* next_node = list;
    for(int i = 0;i < index;i++){
        if(next_node->next == NULL){
            fprintf(stderr, "no %d index in linkt list\n",index);
            return;
        }
        next_node = next_node->next;
    }
    add_data_to_Front_Linked_List(next_node,data);
}