#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    char ch[6]={"abcde"};

    cout<<arr<<endl;//for integer array it is giving the address 
    cout<<ch<<endl;//for character array it is giving the whole content
    char *c=&ch[0];
    cout<<c;//this will also give the entire content so the output will be abcde


    //char *i="abncjj"; NEVER DO THIS!!
    


}