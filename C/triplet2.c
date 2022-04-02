
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,ans;
    cout<<"Enter the value of a,b,c : ";
    cin>>a>>b>>c;
    if(IsTri(a,b,c))
    {
        cout<<"Pythagoras Triplet";
    }
    else
    {
        cout<<"Not a pythagoras Triplet";
    }
}

