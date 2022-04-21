//not acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxPos, minPos, mx,mn;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    mx = a[0], mn = a[0];

    for(int i = n-1; i>=0; i--)
    {
        if(a[i]>=mx)
        {
            maxPos = i;
            mx = a[i];
        }
    }

    for(int i = 0; i<n; i++)
    {
        if(a[i]<=mn)
        {
            minPos = i;
            mn = a[i];
        }
    }
    //printf("max = %d, maxpos = %d || min = %d, minPos = %d\n",mx, maxPos, mn, minPos);
    int ans = (n - 1) + (maxPos - minPos);
    if(minPos < maxPos) ans = ans - 1;
    cout<<ans<<"\n";
    return 0;
}
