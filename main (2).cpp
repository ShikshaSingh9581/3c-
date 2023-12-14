// write a program to play even -odd game
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number";
    cin>>a;
    if(a%2==0)
    {
        cout<<"oponent won";
    }
    else
    {
        cout<<"you won";
    }
    return 0;
}