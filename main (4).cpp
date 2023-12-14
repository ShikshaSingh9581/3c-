// write a program to find greatest number of the given number
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a number";
    cin>>a;
    cout<<"enter a number";
    cin>>b;
    cout<<"enter a number";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greatest";
        }
        else
        {
            cout<<"c is greatest";   
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"b is greatest";
        }
        else
        {
            cout<<"c is greatest";
        }
    }
    return 0;
}
