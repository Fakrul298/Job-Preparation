#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a,a+n);

    if(n<4) cout<<"0\n";
    else
    {
        cout<<a[n-4]*a[n-4]<<"\n";
    }

    return 0;
}
