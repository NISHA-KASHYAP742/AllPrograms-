#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    printf("%d",head->data);

    struct node *current=malloc(sizeof(struct node));
    current->data=85;
    current->link=NULL;
    head->link=current;
    printf(" : %d",current->data);

    current=malloc(sizeof(struct node));
    current->data=95;
    current->link=NULL;
    printf(" : %d",current->data);

    head->link->link=current;
    return 0;
}
