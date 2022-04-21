#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,x;
    long long int ans=0;
    cin>>N>>x;
    int a[N],b[N];
    for(int i=0; i<N; i++) cin>>a[i];
    b[0] = min(a[0],x);
    for(int i=1; i<N; i++)
    {
        if(a[i] + b[i-1] > x)
        {
            b[i] = a[i] - (a[i]+b[i-1] - x);
            b[i] = max(0,b[i]);
        }
        else
            b[i] = a[i];
    }

    for(int i=0; i<N; i++)
    {
        //cout<<b[i]<<" ";
        ans+= (fabs(a[i] - b[i]));
    }
    //cout<<endl;
    cout<<ans;
    return 0;
}
