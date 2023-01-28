#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
    struct node *prev;
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
    result->prev = NULL;
    result->next = NULL;
    return result;
}

node_t *InsertAtHead(node_t **head, node_t* NodeToInsert)
{
    NodeToInsert->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = NodeToInsert;
    }
    *head = NodeToInsert;
    NodeToInsert->prev = NULL;
    return NodeToInsert;
}

void InsertAfterNode (node_t *NodeToInsertAfter, node_t *NewNode)
{
    NewNode->next = NodeToInsertAfter->next;
    if (NewNode->Next != NULL)
    {
        NewNode->next->prev = NodeToInsertAfter;
    }
    NewNode->prev = NodeToInsertAfter;
    NodeToInsertAfter->next = NewNode;
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

    tmp = Find(head, 15);
    printf("Found Number: %d \n", tmp->value);

    InsertAfterNode(tmp, CreateNewNode(75));

    printlist(head);
    return 0;

}