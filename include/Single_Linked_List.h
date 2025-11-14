typedef struct sll_Node
{
    void* data;
    struct sll_Node* next;
} sll_Node;

void sll_free(sll_Node* list);
void sll_print(sll_Node* list);
sll_Node* sll_create();
void sll_push_front(sll_Node* list,void* data);
void sll_push_back(sll_Node* list,void* data);
void sll_add_at(sll_Node* list,void* data,int index);
