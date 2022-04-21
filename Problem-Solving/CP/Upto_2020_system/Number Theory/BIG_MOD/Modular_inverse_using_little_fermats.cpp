//not acc
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

#define EPS 0.000000001//10^(-9)
#define BIG 1000003
template<typename T> T gcd(T a, T b){T mn = min(a,b), mx = max(a,b);if(mn == 0) RT mx;if(mx%mn == 0) RT mn;else gcd(mx%mn,mn);}
template<typename T> T lcm(T a,T b){T lcm = (a*b)/gcd(a,b);RT lcm;}
template<typename T> T bigMod(T n, T p, T M) {if(p == 0) RT 1; else{if(p%2 == 0){T x=bigMod(n,p/2,M); RT ((x%M)*(x%M))%M;} else RT ((n%M)*(bigMod(n,p-1,M)%M))%M;}}
template<typename T>T ModInverse(T a,T M){RT bigMod(a,M-2,M);}
int main()
{
    ui64 a,m=1000003,ans;
    while(scanf("%llu",&a)!=EOF)
    {
        ans = ModInverse(a,m)%BIG;
        OUTllun(ans);
    }

    RT main();
}


