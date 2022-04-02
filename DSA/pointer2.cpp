#include<iostream >
using namespace std;
int main()
{
    //int arr[10]={10,2,3,4,5,6};
    /*cout<<"address of first memory block is : "<<arr<<endl;
    cout<<"address of first memory block is : "<<&arr[0]<<endl;
    cout<<"Value at starting address : "<<*arr<<endl;
    cout<<"5th : "<<*arr+1<<endl;
    cout<<"5th : "<<(*arr)+1<<endl;
    cout<<"6th : "<<*(arr+2)<<endl;
    cout<<"7th : "<<arr[2]<<endl;
    cout<<"8th : "<<2[arr]<<endl;*/
/*
    int temp[10]={1,2,3};
    cout<<sizeof(temp)<<endl;

    int *ptr=&temp[0];
    cout<< " 1st : "<<sizeof(ptr)<<endl;
    cout<<" 2nd : "<< sizeof(*ptr)<<endl;
    cout<<" 3rd : "<<sizeof(&ptr)<<endl;
    cout<<" 4th : "<<sizeof(*temp)<<endl;
    cout<<" 5th : "<<sizeof(&temp)<<endl;


    //Using (&)and operator 
    int a[10]={10,20,30,40,50};
    
    cout<<"->"<<&a[0]<<endl;//address of 1st index
   // cout<<&a<<endl;
   // cout<<a<<endl;

    int *p=&a[0];
    //cout<<p<<endl;
    //cout<<*p<<endl;
    cout<<"->"<<&p<<endl;// address of pointer
*/

    int arr[5]={1,2,3,4};
    //  Error!
     //arr= arr+1

    int *ptr=&arr[0];
    cout <<ptr<<endl;
    ptr=ptr+1;
    cout <<ptr<<endl;


     
    


    return 0;

}