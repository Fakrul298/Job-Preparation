//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b,c, sure=0;
        cin>>a>>b>>c;
        if(a==1) sure++;
        if(b==1) sure++;
        if(c==1) sure++;
        if(sure>=2) ans++;
    }
    cout<<ans<<"\n";
    return 0;
}
