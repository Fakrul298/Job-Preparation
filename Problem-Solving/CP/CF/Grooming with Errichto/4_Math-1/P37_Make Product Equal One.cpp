//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,zero = 0;
    long long int ans = 0, productOne = 1;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        if(a[i] == -1 || a[i] == 1 || a[i] == 0)
        {
            if(a[i] != 0)
                productOne *= a[i];
            else
                zero++;
        }
        else
        {
            ans += min(fabs(a[i]-(-1)), fabs(a[i]-1));
            if(fabs(a[i]-(-1)) < fabs(a[i]-1))
                productOne *= (-1);
        }
    }
    if(productOne == -1)
    {
        if(zero == 0)
            ans += 2;
        else
            ans+=zero;
    }
    else
        ans += zero;
    cout<<ans<<"\n";
    return 0;
}
