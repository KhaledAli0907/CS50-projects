#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node node_t;

void print

int main()
{
    node_t n1, n2, n3;
    ndoe_t *head;

    n1.value = 32;
    n2.value = 16;
    n3.value = 5;

    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;

}