//acc
#include<bits/stdc++.h>
using namespace std;
bool composite(int n)
{
    int sq = sqrt(n);
    for(int i = 2; i<=sq; i++)
    {
        if(n%i==0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n, x = 1;
    scanf("%d",&n);
    int a = n+1, b=1;
    while(1)
    {
        if(composite(a) == 1 && composite(b) == 1)
            break;
        a++;
        b++;
    }
    printf("%d %d\n",a,b);
    return 0;
}
