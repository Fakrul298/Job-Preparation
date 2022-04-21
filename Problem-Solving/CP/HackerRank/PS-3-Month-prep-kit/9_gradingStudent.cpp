//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] % 5 >= 3 && a[i]>=38)
            a[i] = a[i] + (5 - (a[i]%5));
    }

    for(int i=0; i<n; i++) printf("%d\n",a[i]);
    return 0;
}
