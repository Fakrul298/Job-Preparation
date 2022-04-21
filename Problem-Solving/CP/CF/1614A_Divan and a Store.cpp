#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,l,r,k,ans = 0, cost = 0;
        cin>>n>>l>>r>>k;
        long long int c[n];
        for(int i=0; i<n; i++) cin>>c[i];
        sort(c,c+n);
        //cout<<"selected candies: ";
        for(int i=0 ; i<n; i++)
        {
            if(c[i]>=l && c[i]<=r)
            {

                cost += c[i];
                if(cost <= k)
                {
                    ans++;
                    //cout<<c[i]<<" ";
                }
            }

            if(cost>k) break;
        }
        //cout<<endl;
        cout<<ans<<"\n";
    }
    return 0;
}
