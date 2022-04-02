#include<iostream>
using namespace std;

void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;
       
    }
    cout<<"Printing Done !"<<endl;
}

int main()
{
    int F[5]={1,2,3};
    PrintArray(F,5);
    
    return 0;
}
