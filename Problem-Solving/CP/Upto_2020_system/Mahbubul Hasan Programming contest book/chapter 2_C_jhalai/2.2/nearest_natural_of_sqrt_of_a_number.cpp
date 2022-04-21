//kono ekti songkha r borgomuler nearest purnosonkha nirnoy
#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define degree (180/pi)
#define radian (1/degree)
int main()
{
    double n,sq,dis,ans,ceiln,floorn,temp;
    cin>>n;
    sq=sqrt(n);
    ceiln=ceil(sq);
    floorn=floor(sq);
    temp=sq-floorn;
    if(temp<=0.5) ans=floorn;
    else ans = ceiln;
    cout<<ans<<endl;
    return 0;
}