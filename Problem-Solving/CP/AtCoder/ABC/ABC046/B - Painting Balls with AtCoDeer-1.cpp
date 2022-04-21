#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    unsigned long long int ans = k*pow(k-1,n-1);
    cout<<ans<<"\n";
    return 0;
}
