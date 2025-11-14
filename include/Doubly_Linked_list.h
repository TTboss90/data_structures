typedef struct dll_Node
{
    void* data;
    struct dll_Node* next;
    struct dll_Node* back;
} dll_Node;