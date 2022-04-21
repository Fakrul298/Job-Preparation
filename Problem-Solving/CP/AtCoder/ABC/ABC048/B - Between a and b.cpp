#include<bits/stdc++.h>
using namespace std;
#define lld long long int
int main()
{
    lld a,b,x,ldiv,rdiv,ans;
    cin>>a>>b>>x;
    if(a == b)
    {
        if(a%x == 0)
            cout<<1;
        else
            cout<<0;
        return 0;
    }
    ldiv = a/x + 1;
    rdiv = b/x + 1;
    ans = rdiv - ldiv;
    if(a%x == 0) ans++;
    //printf("ldiv: %lld , rdiv: %lld\n",ldiv,rdiv);
    cout<<ans;
    return 0;
}
