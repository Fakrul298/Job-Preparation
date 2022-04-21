//not acc
#include<bits/stdc++.h>
using namespace std;
#define OUT printf
#define IN scanf
#define INd(d) scanf("%d",&d);
#define OUTdn(d) printf("%d\n",d);
#define OUTd(d) printf("%d ",d);
#define i64 long long int//%lld
#define INlld(d) scanf("%lld",&d);
#define OUTlldn(d) printf("%lld\n",d);
#define OUTlld(d) printf("%lld ",d);
#define ui64 unsigned long long int//%llu
#define INllu(d) scanf("%llu",&d);
#define OUTllun(d) printf("%llu\n",d);
#define OUTllu(d) printf("%llu ",d);
#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return
ui64 bigMod(ui64 n, ui64 p, ui64 M)
{
    if(p == 0) RT 1;
    else
    {
        if(p%2 == 0)
        {
            ui64 x = bigMod(n,p/2,M);
            RT ((x%M)*(x%M))%M;
        }
        else
            RT ((n%M)*(bigMod(n,p-1,M)%M))%M;
    }
}
int main()
{
    ui64 n,p,M;
    INllu(n);
    INllu(p);
    INllu(M);
    ui64 ans = bigMod(n,p,M);
    OUTllun(ans);
    RT 0;
}
