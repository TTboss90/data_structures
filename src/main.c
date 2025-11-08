#include "Linked_List.h"

int main(){
    single_Node* list = make_single_Linked_List();
    int x = 4, y = 16, z = 10,q = 43;
    add_data_to_Front_Linked_List(list,&x);
    add_data_to_Front_Linked_List(list,&y);
    add_data_to_Back_Linked_List(list,&z);
    add_data_add_index_Linked_list(list,&q,2);
    print_Linked_List(list);
}