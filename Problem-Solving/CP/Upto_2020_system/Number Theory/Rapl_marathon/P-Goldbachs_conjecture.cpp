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

#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return

#define PB push_back
#define MP make_pair
#define N 10000000
unsigned int flag[N>>6];
vector<int>primes;
#define check(n) (flag[n>>6]&(1<<((n>>1)&31)))//flag[n/64]&(2*((n/2)%32))
//as we are considering only odd numbers
//we at first divide and then multiply it by 2
// and for unsigned(64) flag array
//so for mapping in 64 bit and and checking in 64 bit position
//for composite number where we have already set 1 and for prime 0 by the inner loop of sieve
#define Set(n) (flag[n>>6] |= (1<<((n>>1)&31)))//flag[n/64] = flag[n/64]|(2*((n/2)%32))
void sieve()
{
    unsigned i,j,k,sq = sqrt(N) ;
    for(i = 3; i<sq; i+=2)//considering only odd numbers and their odd multiples
    {
        if(!check(i))
        {
            for(j = i*i, k = i<<1; j<N; j+=k)// deleting odd multiples
                Set(j);
        }
    }
    primes.PB(2);
    FN(i,3,N,2)
    {
        if(!check(i))
            primes.PB(i);
    }
}
int main()
{
    sieve();
    int t=1;
    INd(t);
    FNE(c,1,t,1)
    {
        int n,j=1,h,ans=0;
        INd(n);
        h = n/2;
        int p = primes[j];
        if(n == 4)
            ans = 1;
        else
        {
            while(p<=h)
            {
                //cout<<p<<" ";
                if((check(p))==0 && (check(n-p))==0)
                {
                    ans++;
                //    cout<<"("<<p<<","<<n-p<<")"<<endl;
                }
                j++;
                p = primes[j];
            }
        }
        OUT("Case %d: ",c);
        OUTdn(ans);
        //cout<<endl<<endl;
    }
    return 0;
}
