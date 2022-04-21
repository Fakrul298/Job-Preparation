//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d",&a[i]);

    int maxBreak = 0, minBreak = 0, mn = a[0], mx = a[0];

    for(int i=0; i<n; i++)
    {
        if(a[i] > mx)
        {
            maxBreak++;
            mx = a[i];
        }

        if(a[i] < mn)
        {
            minBreak++;
            mn = a[i];
        }
    }

    printf("%d %d\n",maxBreak, minBreak);
    return 0;
}
