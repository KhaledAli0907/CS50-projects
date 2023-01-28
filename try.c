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

node_t *CreateNewNode(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}

node_t *InsertAtHead(node_t **head, node_t* NodeToInsert)
{
    NodeToInsert->next = *head;
    *head = NodeToInsert;
    return NodeToInsert;
}

void InsertAfterNode (node_t *NodeToInsertAfter, node_t *NewNode)
{
    NewNode->next = NodeToInsertAfter->next;
    NodeToInsertAfter = NewNode;
}

node_t *Find(node_t *head, int value)
{
    node_t *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->value == value) return tmp;
        tmp = tmp->next;
    }
    return NULL;
}

int main()
{
    node_t *tmp;
    node_t *head = NULL;
    for (int i = 0; i < 25; i++)
    {
        tmp = CreateNewNode(i);
        InsertAtHead(&head, tmp);
    }
    printlist(head);


    tmp = Find(head, 15);
    printf("Found Number: %d \n", tmp->value);

    InsertAfterNode(tmp, CreateNewNode(75));
    return 0;

}