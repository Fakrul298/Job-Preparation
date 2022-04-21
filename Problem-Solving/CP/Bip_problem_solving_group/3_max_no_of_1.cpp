#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int maxOne = 0, one = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 1)
            one++;
        else
        {
            maxOne = max(one,maxOne);
            one = 0;
        }
    }
    maxOne = max(one,maxOne);
    printf("%d\n",maxOne);
    return 0;
}
