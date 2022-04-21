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
#define mx 100000000//10^7
vector<int>primes;
bool is_prime[mx];//1->not prime || 0->prime/*initially guessing all are prime
void siv()
{
    memset(is_prime,true,sizeof(is_prime));
    //is_prime[1]=false;
    int i,j,k;
    //FNE(i,4,mx,2)
    //  is_prime[i]=0;//deleting all the even except 2;
    for(i = 3; i*i<=mx ; i+=2)
    {
        if(is_prime[i])
        {
            int k=i<<1;
            for(j = i*i; j<mx ; j+=k)
            {
                is_prime[j]=false;
            }
        }
    }
    primes.push_back(2);
    FNE(i,3,mx,2)
    {
        if(is_prime[i])
        {
            primes.push_back(i);
        }
    }
}
int main()
{
    siv();
    int q;
    INd(q);
    while(q--)
    {
        int n;
        INd(n);
        cout<<primes[n-1]<<endl;
    }
    RT 0;
}
