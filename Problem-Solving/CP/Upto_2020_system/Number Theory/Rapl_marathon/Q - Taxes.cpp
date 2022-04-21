//acc
#include<bits/stdc++.h>
using namespace std;
#define OUT printf
#define IN scanf
#define INd(a) scanf("%d",&a);
#define INd2(a,b) scanf("%d %d",&a,&b);
#define INd3(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define OUTdn(d) printf("%d\n",d);
#define OUTd(d) printf("%d ",d);

#define i64 long long int//%lld
#define INlld(a) scanf("%lld",&a);
#define INlld2(a,b) scanf("%lld %lld",&a,&b);
#define INlld3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);
#define OUTlldn(d) printf("%lld\n",d);
#define OUTlld(d) printf("%lld ",d);

#define ui64 unsigned long long int//%llu
#define INllu(a) scanf("%llu",&a);
#define INllu2(a,b) scanf("%llu %llu",&a,&b);
#define INllu3(a,b,c) scanf("%llu %llu %llu",&a,&b,&c);
#define OUTllun(d) printf("%llu\n",d);
#define OUTllu(d) printf("%llu ",d);

#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return

#define PB push_back
#define MP make_pair
#define VALL(v) v.begin(),v.end()
int is_prime(i64 n)
{
    int f=0, sq = sqrt(n);
    FNE(i,3,sq,2)
    {
        if(!(n%i))
        {
            f=1;
            break;
        }
    }
    RT (f==0)?1:0;
}
int main()
{
    i64 n,ans;
    INlld(n);
    if(n == 2) ans = 1;
    else if(!(n&1))  ans = 2;
    else
    {
        if(is_prime(n))ans = 1;
        else if(is_prime(n-2))
            ans = 2;
        else
            ans = 3;
    }
    OUTlldn(ans);
    RT 0;
}


