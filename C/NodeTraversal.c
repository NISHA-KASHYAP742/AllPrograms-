#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};
void NodeTrav(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements are : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 78;
    second->next = third;

    third->data = 73;
    third->next = NULL;

    NodeTrav(head);
    return 0;
}