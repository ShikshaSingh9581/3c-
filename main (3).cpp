// write a program to given year is leap year or not
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter  a year";
    cin>>year;
    if(year%4==0 and year%100!=0)
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Not Leap year";
    }
    return 0;
}
