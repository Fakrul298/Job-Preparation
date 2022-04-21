//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx = 0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] > mx) mx = a[i];
    }

    int freq[mx+1];
    for(int i=0; i<=mx; i++) freq[i] = 0;
    for(int i=0; i<n; i++) freq[a[i]]++;

    /*for(int i=0; i<mx; i++)
    {
        printf("%d -> %d\n",a[i],freq[a[i]]);
    }*/

    for(int i=0; i<=mx; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
