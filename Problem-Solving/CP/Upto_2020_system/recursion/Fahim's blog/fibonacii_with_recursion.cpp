#include<bits/stdc++.h>
using namespace std;
int a[10];
int fib(int n)
{
    if((n==0 || n==1) && a[n]==0)
    {
        a[n]=1;
    }
    else if(a[n]==0)
    {
        a[n]=fib(n-1)+fib(n-2);
    }
    return a[n];
}
int main()
{
    for(int i=0 ; i<10 ; i++)
    {
       a[i]= fib(i);
       cout<<a[i]<<" ";
    }
    return 0;
}