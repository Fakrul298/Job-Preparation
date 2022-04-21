#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
i64 bigMod(i64 b,i64 p,i64 m)
{
    if(p == 0) return 1;
    else
    {
        if(p%2 ==0)
        {
            i64 x = bigMod(b,p/2,m);
            return ((x%m)*(x%m))%m;
        }
        else
            return ((b%m)*(bigMod(b,p-1,m))%m)%m;
    }
}
int main()
{
    i64 b,p,m;
    while(scanf("%lld %lld %lld",&b,&p,&m)!=EOF)
    {
        printf("%lld\n",bigMod(b,p,m));
    }
    return 0;
}
