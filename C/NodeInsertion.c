#include <stdio.h>
#include<stdlib.h>

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
//Insert at first
struct Node*InsertAtFirst(struct Node *head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}


//Insert At Any Index

struct Node*InsertAtIndex(struct Node *head,int data,int index ){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
}
// Insert at End
struct Node*InsertAtEnd(struct Node*head,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
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
    //head=InsertAtFirst(head,45);
    //head=InsertAtEnd(head,67);
    head=InsertAtIndex(head,80,2);
    printf("After calling function : \n");
    NodeTrav(head);
    
    
    return 0;
}