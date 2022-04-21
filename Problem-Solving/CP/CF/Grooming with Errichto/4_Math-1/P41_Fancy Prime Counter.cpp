#include<bits/stdc++.h>
using namespace std;
#define MX 300001
int is_prime[MX>>6];
#define check(n)(is_prime[n>>6] & (1<<((n>>1)&31)))
#define Set(n) (is_prime[n>>6] |= (1<<((n>>1)&31)))

void siv()
{
    unsigned int i,j,k,sq = sqrt(MX);
    for(i = 3; i<=sq; i+=2)
    {
        if(!check(i))
        {
            k = (i<<1);
            for(j = i*i; j<=MX; j+=k)
                Set(j);
        }
    }
}

int main()
{
    siv();

    int countP[300001];
    countP[0] = 0, countP[1] = 0, countP[2] = 1;

    for(int i=3; i<=300001; i++)
    {
        if(i%2 == 0)
            countP[i] = countP[i-1];
        else
        {
            if(!check(i))
                countP[i] = countP[i-1] + 1;
            else
                countP[i] = countP[i-1];
        }
    }

    int t,a,b,ans, ans2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ans2 = countP[b] - countP[a-1];
        cout<<ans2<<endl;

    }
}
