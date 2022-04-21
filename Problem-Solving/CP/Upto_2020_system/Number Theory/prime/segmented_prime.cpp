//acc
#include<bits/stdc++.h>
using namespace std;
#define i64 long long int//%lld
#define ui64 unsigned long long int//%llu
#define OUT printf
#define IN scanf
#define INd(d) scanf("%d",&d);
#define INlld(d) scanf("%lld",&d);
#define INllu(d) scanf("%llu",&d);
#define OUTdn(d) printf("%d\n",d);
#define OUTd(d) printf("%d",d);
#define OUTlldn(d) printf("%lld\n",d);
#define OUTlld(d) printf("%lld",d);
#define OUTllun(d) printf("%llu\n",d);
#define OUTllu(d) printf("%llu",d);
#define FN(i,s,e,d) for(i64 i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(i64 i=s; i<=e; i+=d)
#define RT return
#define mx 100000//10^7
#define seg 32000
vector<i64>primes;
vector<i64>is_prime(mx,1);//0->not prime || 1->prime/*initially guessing all are prime
void siv()
{

    is_prime[1]=0;
    i64 sq = sqrt(mx);
    FNE(i,4,sq,2)
    is_prime[i]=0;//deleting all the even except 2;
    FNE(i,3,sq,2)
    {
        if(is_prime[i])
        {
            FNE(j,(i*i),mx,i)
            {
                is_prime[j]=0;
            }
        }
    }
    FNE(i,1,seg,1)
    {
        if(is_prime[i])
            primes.push_back(i);
    }
}
void segmented_siv(i64 l,i64 r)
{
    i64 segSize = r-l+1;
    bool segPrimes[segSize];
    //i64 sq = sqrt(segSize);
    FN(i,0,segSize,1)
    segPrimes[i] = true;
    if(l==1)
        segPrimes[0]=false;
    //int mx = sqrt(r);
    for(i64 i=0; primes[i]*primes[i] <= r ; i++)
    {
        i64 currentPrime = primes[i];
        i64 base = (l/currentPrime)*currentPrime;
        if(base<l)
            base+=currentPrime;
        for(i64 j=base; j<=r; j+=currentPrime)
        {
            segPrimes[j-l]=false;
        }
        if(base == currentPrime)
            segPrimes[base-l] = true;
    }
    FNE(i,l,r,1)
    {
        if(segPrimes[i-l])
            OUTlldn(i);
    }
    OUT("\n");

}
int main()
{
    siv();
    int t;
    INd(t);
    while(t--)
    {
        i64 l,r;
        INlld(l);
        INlld(r);
        segmented_siv(l,r);
    }
    RT 0;
}

