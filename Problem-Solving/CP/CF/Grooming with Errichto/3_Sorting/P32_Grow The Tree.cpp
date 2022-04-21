//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x=0, y=0;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    for(int i=n-1; i>=(n/2); i--)
        x+=a[i];

    for(int i=0; i<(n/2); i++)
        y+=a[i];

    long long int ans = (x*x) + (y*y);
    cout<<ans<<"\n";

    return 0;
}
