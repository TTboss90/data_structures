typedef struct Node
{
    void* data;
    struct Node* next;
} Node;

Node* Make_Linked_List();
void add_data_to_Linked_List(Node* list,void* data);
void print_Linked_List(Node* list);