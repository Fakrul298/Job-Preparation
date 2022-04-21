#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    cout<<year;
    if(year%400==0 || (year%100!=0 && year%4==0))
       cout<<" is a leap year"<<endl;
    else cout<<" is not leap year"<<endl;
    return 0;
}