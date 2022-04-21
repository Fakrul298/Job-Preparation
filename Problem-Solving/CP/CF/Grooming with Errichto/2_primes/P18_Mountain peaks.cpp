#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    bool p[n];
    for(int i=0; i<n; i++) p[i] = 0;
    for(int i=0; i<n; i++)
        scanf("%I64d",&a[i]);

    for(int i=1; i<n-1; i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
            p[i] = 1;
    }

    /*for(int i=0; i<n; i++)
        cout<<a[i]<<"->"<<p[i]<<"\n";*/
    int mxdPeak = 0, peak=0;
    for(int i=1; i<n; i++)
    {
        if(p[i] == 1)
        {
            //printf("present peak: %d || prev peak: %d\n",i,peak);
            mxdPeak = max((i-peak),mxdPeak);
            peak = i;
        }
    }
    int ans = mxdPeak;
    if(ans != 0)
    {
        if(n % ans == 0)
            printf("%d\n",ans);
        else
            printf("0\n");
    }
    else
        printf("%d\n",ans);

    return 0;
}
