//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,hi;
    scanf("%d %d",&n,&h);
    int ans = n;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&hi);
        if(hi>h)
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}
