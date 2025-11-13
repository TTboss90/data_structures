typedef struct Doubly_Node
{
    void* data;
    struct Doubly_Node* next;
    struct Doubly_Node* back;
} Doubly_Node;