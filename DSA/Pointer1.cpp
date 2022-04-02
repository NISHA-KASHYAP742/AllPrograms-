#include<iostream>
using namespace std;
int main()
{
    int b = 5,a=10;
    int *p1=&b;//stores the address of b
    cout<<b<<endl;//5
    cout<<"address of b : "<<&b<<endl;//here & is known as address of operator(which means address of variabke a) 

    int *ptr=0;
    ptr=&a;
    cout<<"address of a : "<<ptr<<endl;
    cout<<"value is  : "<<*ptr<<endl;
    cout<<"Size of integer is  : "<<sizeof(a)<<endl;
    cout<<"size of pointer is : "<<sizeof(*ptr)<<endl;

    /*int num=100;
    int x=num;
    x++;
    cout<<"Before : "<<num<<endl;

    int *p2=&num;
    (*p2)++;
    cout<<"After : "<<(num)<<endl;

//Copying a pointer
    int *p=p2;
    cout<<p<<"------"<<p2 <<endl;
    cout<<*p<<"------"<<*p2 <<endl;
//important concept ..
    int i = 8;
    int *t = &i;
    *t = *t+1;
    cout<<"--------------------"<<endl;
    cout<<*t<<endl;
    cout<< "before t"<<t<< endl;
    t=t+1;
    cout<<*t<<endl;
    cout<< "after t"<<t<< endl;
    

    int a1 = 7;
    int b1 = 17;
    int *c1 = &b1; 
    a1 = *c1;
    *c1 = *c1 + 1;
    cout  << a << "  " << b << endl;*/

    /*int a[6] = {1, 2, 3};
    cout << (a + 2);
    cout << (a + 1);*/
    return 0;


}