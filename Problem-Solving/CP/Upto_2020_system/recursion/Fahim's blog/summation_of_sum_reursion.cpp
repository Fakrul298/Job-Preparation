#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
   if(n==0) return 0;
   else return n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    int s=sum(n);
    cout<<s<<endl;
    return 0;
}