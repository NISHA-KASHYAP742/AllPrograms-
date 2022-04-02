// program made by NISHA KASHYAP
// Linear Search
/*
#include<stdio.h>
int main()
{
    int a[10],n,x,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the %d elements : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to be searched :");
    scanf("%d",&x);
    int pos=LinearSearch(a,n,x);
    if (pos==-1)
    {
        printf("Element is not present : ");
    }
    else
    {
        printf("Elements present at position %d",pos+1 );
    }
    return 0;
}

int LinearSearch(int a[20],int n,int x)
{
    int j;
    j=0;
    while(j<n-1 && a[j]!=x)
    {
        j++;
    }
    if(a[j]==x)
    {
        return j+1;

    }
    else
    return 0;

}
*/

#include <stdio.h>
int a[100],i,n,key;
void set()
{
    printf("Enter the number of elements needed : ");
    scanf("%d", &n);
    printf("Enter the elemnts of array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the value here : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("key %d found at %d",key,i+1);
            break;
        }
        
    }
}
void display()
{
    printf("\nelements are : ");
    for (i=0;i<n;i++)
    {
        printf("%d \n",a[i]);

    }
}

int main()
{
    set();
    display();
    return 0; 
}
