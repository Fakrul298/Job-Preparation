//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,m,ans;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        ans = ((23-h)*60) + (60-m);
        cout<<ans<<"\n";
    }
    return 0;
}
