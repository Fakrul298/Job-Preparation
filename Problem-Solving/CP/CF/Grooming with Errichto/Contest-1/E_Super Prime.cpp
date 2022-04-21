#include<bits/stdc++.h>
using namespace std;
#define MX 100000000
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
    siv();
    int n,ans = 0;
    scanf("%d",&n);
    for(int i=5; i<=n; i+=2)
    {
        if(check(i) == 0 && check(i-2) == 0)
        {
            //cout<<i<<" ";
            ans++;
        }
    }
    //cout<<endl;
    printf("%d\n",ans);
    return 0;
}
