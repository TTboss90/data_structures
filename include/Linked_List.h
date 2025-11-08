typedef struct single_Node
{
    void* data;
    struct single_Node* next;
} single_Node;

single_Node* make_single_Linked_List();
void add_data_to_Front_Linked_List(single_Node* list,void* data);
void add_data_to_Back_Linked_List(single_Node* list,void* data);
void add_data_add_index_Linked_list(single_Node* list,void* data,int index);
void print_Linked_List(single_Node* list);