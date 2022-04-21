//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,y,cost;
    cin>>n>>k>>x>>y;
    if(n>k) cost = (k*x) + ((n-k) * y);
    else cost = n*x;
    cout<<cost<<"\n";
    return 0;
}
