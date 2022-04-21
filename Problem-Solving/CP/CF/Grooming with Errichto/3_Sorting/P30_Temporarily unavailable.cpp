//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a,b,c,r,s,e,rs,re,ans;
    cin>>t;
    while(t--)
    {
       cin>>a>>b>>c>>r;
       s = min(a,b), e = max(a,b), rs = c-r, re = c+r;

       if(rs<=s && re>=e) ans = 0;
       else if((rs>=e && re>e) || (s>=re && e>re)) ans = e-s;
       else if(rs>=s && re<=e) ans = (rs-s) + (e - re);
       else if(rs<=e && re>e) ans = rs -s;
       else if(re>=s && re<e) ans = e-re;
       else if((rs == s && rs<e) || (rs == e && rs>s)) ans = e-s;

       cout<<ans<<"\n";

    }
    return 0;
}
