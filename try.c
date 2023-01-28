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
    return result;
}

node_t insert(node_t *head, node_t* NodeToInsert)
{
    NodeToInsert->next = head;
    return NodeToInsert;
}

int main()
{
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 32;
    n2.value = 16;
    n3.value = 5;

    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;
    CreateNewNode(72);

    printlist(head);
    return 0;

}