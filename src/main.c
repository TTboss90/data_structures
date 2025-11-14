#include "Linked_List.h"
#include <stdlib.h>

int main(){
    sll_Node* list = sll_create();

    int x = 4, y = 16, z = 10,q = 43;

    sll_push_back(list,&x);
    sll_push_front(list,&y);
    sll_push_back(list,&z);
    sll_add_at(list,&q,2);

    // for (int i = 0; i < 100000; i++){
    //     int* x = malloc(sizeof(int)); 
    //     *x = i;
    //     sll_push_front(list,x);
    // }
    
    sll_print(list);

    sll_free(list);
}