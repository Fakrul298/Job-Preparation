//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, ans = 0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d",&a[i]);

    for(int i=0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if((a[i] + a[j]) % k == 0)
                ans++;
        }
    }

    printf("%d\n",ans);
    return 0;
}
