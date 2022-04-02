#include<stdio.h>
#include<conio.h>
#include<math.h>
int IsEven(int m)
{
    return (m%2==0 ? 1 : 0);
}
int main()
{
    int a[10];
    int i;
    for(i=0 ; i<9 ;i++)
    {
        a[i]=i+1;
    }
    for(i=0 ; i<9;i++)
    {
        if(IsEven(i+1))
        {
            printf("%f\n",pow((float)a[i],2));
        }
    }
    getch();
}

