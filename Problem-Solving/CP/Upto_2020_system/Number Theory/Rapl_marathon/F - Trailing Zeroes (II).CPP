//acc
#include<bits/stdc++.h>
using namespace std;
#define OUT printf
#define IN scanf
#define INd(a) scanf("%d",&a);
#define INd2(a,b) scanf("%d %d",&a,&b);
#define INd4(a,b,c,d) scanf("%d %d %d %d",&a,&b,&c,&d);
#define OUTdn(d) printf("%d\n",d);
#define OUTd(d) printf("%d ",d);

#define i64 long long int//%lld
#define INlld(a) scanf("%lld",&a);
#define INlld2(a,b) scanf("%lld %lld",&a,&b);
#define INlld3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);
#define OUTlldn(d) printf("%lld\n",d);
#define OUTlld(d) printf("%lld ",d);

#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return
#define PB push_back
#define mx 10000
int spf[10];
template<typename T>T power(T n,T p){T ans = 1; FNE(i,1,p,1) ans *= n; RT ans;}
void prime_fact(int n, int p)
{
    memset(spf,0,sizeof(spf));
    for(int i=2;i*i<=n; i++)
    {
        while(!(n%i))
        {
            n/=i;
            if(i == 2 || i == 5)
            {
             spf[i] += p;
            }
        }
    }
    if(n>1 && (n==2 || n == 5))
    {
            spf[n]+=p;
    }
}
int count2(int n)
{
   int two = 0, i=1;
    while((n/power(2,i))>0)
    {
        two += (n/power(2,i));
        i++;
    }
    RT two;
}
int count5(int n)
{
    int five = 0, i=1;
    while((n/power(5,i))>0)
    {
        five += (n/power(5,i));
        i++;
    }
    RT five;
}
int main()
{
    int t;
    INd(t);
    FNE(c,1,t,1)//10^4
    {
        int n,r,p,q;//10^6
        INd4(n,r,p,q);
        int n2 = count2(n), n5 = count5(n), r2 = count2(r) , r5 = count5(r), nr2 = count2(n-r), nr5 = count5(n-r);
        int f2 = n2-(r2+nr2), f5 = n5 -(r5+nr5);
        prime_fact(p,q);
        int p2 = spf[2], p5 = spf[5];
        int t2 = f2+p2, t5 = f5+p5;
        i64 ans = min(t2,t5);
        OUT("Case %d: %lld\n",c,ans);
    }
    RT 0;
}


