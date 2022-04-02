#include<stdio.h>
int GCD(int a,int b)
{
    if(a==0 && b==0 )//a b=0
        return 0;
    if(a==b)//equal
     return a;
    if(a!=0)
    {
        if(b!=0)
            {
                if(a%2==0 && b%2==0)//both even
                    return (2*(GCD(a/2,b/2)));
                if(a%2==0 && b%2 !=0)// a even
                    return GCD(a/2,b);
                if(a%2!=0 && b%2 ==0)// b even
                    return GCD(a,b/2);
                if(a%2!=0 && b%2 !=0)//both odd
                {
                    if(a>b)
                        return GCD(a-b,b);
                    if(b>a)
                        return GCD(b-a,a);
                }     
            }
    }
}
int main()
{
    int a,b;
    printf("enter two numbers :");
    scanf("%d %d",&a,&b);
    int f=GCD(a,b);
    printf("The GCD is : %d",f);
    return 0;
}