#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node node_t;

void printlist(node_t* head)
{
    node_t *temporary = head;
    while (temporary != NULL)
    {
        printf("%d - ", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}

node_t CreateNewNode(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return *result;
}

node_t InsertAtHead(node_t *head, node_t* NodeToInsert)
{
    NodeToInsert->next = head;
    return *NodeToInsert;
}

int main()
{
    node_t *tmp;
    node_t *head;
    for (int i = 0; i < 25; i++)
    {
        tmp = CreatNewNode(i);
        head = InsertAtHead(head, tmp);
    }
    printlist(head);
    return 0;

}