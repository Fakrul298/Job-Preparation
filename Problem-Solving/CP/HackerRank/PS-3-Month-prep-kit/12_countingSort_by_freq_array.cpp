#include<bits/stdc++.h>
using namespace std;
int freq[100];
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++)
    {
         scanf("%d",&a[i]);
         freq[a[i]]++;
    }

    for(int i=0; i<100; i++)
    {
            cout<<freq[i]<<" ";
    }

    return 0;
}
