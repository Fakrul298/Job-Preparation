#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, odd = 0, even = 0;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1; i<=n; i+=2)
    {
        a[i] = 1;//making all odd 1
    }
    for(int i=0; i<=n; i+=2)
    {
        a[i] = 0;//making all even 0
    }
    for(int i=0; i<=n; i++)
    {
        if(a[i] == 0) even++;
        else odd++;
    }
    printf("Even Number = %d ans Odd Number = %d\n",even,odd);

    return 0;
}
