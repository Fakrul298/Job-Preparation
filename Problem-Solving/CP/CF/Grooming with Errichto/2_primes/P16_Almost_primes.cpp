//acc
#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int sq = sqrt(n);
    for(int i=2; i<=sq; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}
bool almostPrime(int n)
{
    int sq = sqrt(n), p = 0;
    for(int i = 2; i<=sq; i++)
    {
        if(n%i == 0)
        {
            if(prime(i) == true) p++;
            if(i != n/i)
            {
                if(prime(n/i) == true) p++;
            }
        }
    }

    if(p == 2) return true;
    return false;
}
int main()
{
    int n, ans = 0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(almostPrime(i) == true) ans++;
    }
    printf("%d\n",ans);
    return 0;
}
