#include<stdio.h>
#include<conio.h>
#include<math.h>
double ArrayAdd(double array[],int start,int finish,int flag)
{
    int i=start;
    double sum = 0;
    if (flag==0)
    {
        for(;i<=finish;i++)
        {
            sum+=array[i];
        }
    }
    if(flag==1)
    {
        if(start%2==0)
        i=start;
        
        else
        i=start+1;
        
        for( ;i<=finish;i=i+2)
        {
            sum=sum+array[i];
        }
        
    }
    if(flag==2)
    {
        if(start%2!=0)
        i=start;
        else
        i=start+1;
        for( ;i<=finish;i=i+2)
        sum=sum+array[i];
    }
	return sum;
}

int main()
{
    double arr[]={0,10,20,30,40,50,60};
    double x=ArrayAdd(arr,2,4,2);
    printf("%lf",x);
    
}

