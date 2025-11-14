#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "Linked_List.h"

void sll_print(sll_Node* list){
    assert(list != NULL && "list is NULL");

    sll_Node* next_node = list->next;
    while (next_node != NULL){
        printf("%d\n",*(int*)next_node->data);
        next_node = next_node->next;
    }
}

void sll_free(sll_Node* list) {
    assert(list != NULL && "list is NULL");

    sll_Node* current = list;
    while (current != NULL) {
        sll_Node* next = current->next;
        free(current->data);
        free(current);
        current = next;
    }
}


sll_Node* sll_create(){
    sll_Node* first_node = malloc(sizeof(sll_Node));

    assert(first_node && "Failed to allocate memory for head node");

    first_node->data = NULL;
    first_node->next = NULL;
    return first_node;
}

void sll_push_front(sll_Node* list,void* data){
    assert(list != NULL && "list is NULL");

    sll_Node* new_node = malloc(sizeof(sll_Node));
    assert(new_node != NULL && "Failed to allocate memory for new node");
    
    new_node->data = data;
    new_node->next = list->next;
    list->next = new_node;
}

void sll_push_back(sll_Node* list,void* data){
    assert(list != NULL && "list is NULL");


    sll_Node* next_node = list;
    while (next_node->next != NULL){
        next_node = next_node->next;
    }
    sll_push_front(next_node,data);
}

void sll_add_at(sll_Node* list,void* data,int index){
    assert(list != NULL && "list is NULL");
    
    sll_Node* next_node = list;
    for(int i = 0;i < index;i++){
        if(next_node->next == NULL){
            fprintf(stderr, "no %d index in linkt list\n",index);
            return;
        }
        next_node = next_node->next;
    }
    sll_push_front(next_node,data);
}