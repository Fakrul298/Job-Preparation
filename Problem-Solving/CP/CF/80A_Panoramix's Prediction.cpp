//acc
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int sq = sqrt(n);
    for(int i = 2; i<=sq; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = n+1; i<m; i++)
    {
        if(isPrime(i) == true)
        {
            printf("NO\n");
            return 0;
        }
    }
    if(isPrime(m))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
