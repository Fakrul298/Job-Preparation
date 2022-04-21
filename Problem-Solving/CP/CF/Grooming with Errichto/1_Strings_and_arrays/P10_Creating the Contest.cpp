//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    int check[n], prevEle;
    for(int i=0; i<n; i++) cin>>a[i];

    memset(check,0,n);
    for(int i=1; i<n; i++)
    {
        prevEle = a[i-1];
        if(a[i]<=(2*prevEle))
            check[i] = 1;
        else
            check[i] = 0;
    }

    int ans = 1, maxConsecutiveOne = 0, one = 0;

    for(int i=0; i<n; i++)
    {
       // printf("%d ",check[i]);
        if(check[i] == 1)
            one++;
        else
        {
            maxConsecutiveOne = max(one,maxConsecutiveOne);
            one = 0;
        }
    }
    //cout<<endl;
    maxConsecutiveOne = max(one,maxConsecutiveOne);
    printf("%d\n",maxConsecutiveOne+1);
    return 0;
}
