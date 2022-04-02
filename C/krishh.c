#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
   
   float r;
   printf("enter the radius r=");
   scanf("%f",&r);
   

   printf("the area of circle is %f",PI*pow(r,2));
   return 0;
}