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
#define FNE(i,s,e,d) for(i64 i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return
#define PB push_back
#define VALL(v) v.begin(),v.end()
#define N 10000000
unsigned flag[N>>6];
vector<i64>primes;
//set<int>pset;
#define check(n) (flag[n>>6]&(1<<((n>>1)&31)))//flag[n/64]&(2*((n/2)%32))
                                              //as we are considering only odd numbers
                                              //we at first divide and then multiply it by 2
                                              // and for unsigned(64) flag array
                                              //so for mapping in 64 bit and and checking in 64 bit position
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
//    pset.insert(2);
    FN(i,3,N,2)
    {
        if(!check(i))
            {
                primes.PB(i);
             //   pset.insert(i);
            }
    }
}
int main()
{

    sieve();
    while(1)
    {
        int n;
        cin>>n;
        if(!check(n))
        {
            printf("prime\n");
        }
        else
            printf("not prime\n");
    }
   /* while(1)
    {
        int n;
        cin>>n;
        auto it = pset.begin();
        it = pset.find(n);
        if(it!=pset.end()) cout<<"pri\n";
        else cout<<"not pri\n";
    }

    cout<<primes[5000000-1]<<endl;
    int q;
    INd(q);
    while(q--)
    {
        int n;
        INd(n);
        OUTlldn(primes[n-1]);
    }*/
    RT 0;
}

