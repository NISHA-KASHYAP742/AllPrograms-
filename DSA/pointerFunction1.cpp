#include<iostream>
using namespace std;
void Display(int *p)
{
    cout<<"Value : "<<*p<<endl;
    cout<<"address : "<<p<<endl;
    
}
//pass by value ..
void Update(int *p)
{
    //p=p+1;
    //cout<<"inside : "<<p<<endl;
    *p=*p+1;
}

int GetSum(int arr[],int n)//this recieve a pointer only(int *arr)
{
    cout<<"Size : "<<sizeof(arr);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        
        sum=arr[i]+sum;

    }
    return sum;
}
int main()
{
    /*int i = 10;
    int *p = &i;
    Display(p);
    cout<<"before : "<<*p<<endl;
    Update(p);
    cout<<"after : "<<*p<<endl;
    */

   int arr[5]={1,2,3,4,5};

   cout<<"Sum is : "<<GetSum(arr,5)<<endl;
   return 0 ;

}