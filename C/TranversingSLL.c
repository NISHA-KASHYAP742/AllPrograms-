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
    //printf("%d",head->data);

    struct node *current=malloc(sizeof(struct node));
    current->data=85;
    current->link=NULL;
    head->link=current;
    //printf(" : %d",current->data);

    current=malloc(sizeof(struct node));
    current->data=95;
    current->link=NULL;
    //printf(" : %d",current->data);

    head->link->link=current;
    count_of_node(head);
    return 0;

}
void count_of_node(struct node *head)
{
    //int count=0;
    if(head == NULL)
        printf("Linked list is empty !");
    struct node *ptr = NULL;
    ptr=head;
    while(ptr != NULL)
    {
        //count++;
        printf("\n%d",ptr->data);
        ptr = ptr->link;
       

    }
    //printf("\n %d",count);
     
}

