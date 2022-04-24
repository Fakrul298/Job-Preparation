//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,fop, fep, ok;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        ok = 1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        fep = a[0] % 2;
        fop = a[1] % 2;
        for(int j= 2; j<n; j+=2)
        {
            if(a[j]%2 != fep)
            {
                ok = 0;
                break;
            }
        }
        if(ok == 1)
        {
            for(int j= 3; j<n; j+=2)
            {
                if(a[j]%2 != fop)
                {
                    ok = 0;
                    break;
                }
            }
        }
        if(ok == 1)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
