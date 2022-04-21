#include<bits/stdc++.h>
using namespace std;
#define MX 10000000
#define s MX>>6
int is_prime[s];
#define check(n)(is_prime[n>>6] & (1<<((n>>1)&31)))
#define Set(n) (is_prime[n>>6] |= (1<<((n>>1)&31)))
void siv()
{
    unsigned int i,j,k,sq = sqrt(MX);
    for(i = 3; i<=sq; i+=2)
    {
        if(!check(i))
        {
            for(j = i*i,k = (i<<1); j<=MX; j+=k)
                Set(j);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n == 1)
    {
        printf("0\n");
        return 0;
    }

    int ans = 1;
    siv();
    for(int i=3; i<=n; i+=2)
    {
        if(!check(i))
            ans++;
    }
    printf("%d\n2 ",ans);
    for(int i=3; i<=n; i+=2)
    {
        if(!check(i))
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}
