#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int * arr;
};

int IsEmpty(struct stack* ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;

    }
}

int IsFull(struct stack* ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
        
    }
}
int main()
{
    /*struct stack s;
    s.size=80;
    s.top=-1;
    s.arr=(int *)malloc(s.size*sizeof(int));*/

    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr=(int *)malloc(s->size *sizeof(int));

    //pushing elements manually!
    s->arr[0]=7;
    s->top++;

    //checking the stack is empty??
    if(IsEmpty(s))
    {
        printf("The stack is empty");
    }
    else{
        printf("Full");
    }

    return 0;

}