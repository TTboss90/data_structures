#include "Linked_List.h"

int main(){
    Node* list = Make_Linked_List();
    int x = 4, y = 16, z = 10;
    add_data_to_Linked_List(list,&x);
    add_data_to_Linked_List(list,&y);
    add_data_to_Linked_List(list,&z);
    print_Linked_List(list);
}