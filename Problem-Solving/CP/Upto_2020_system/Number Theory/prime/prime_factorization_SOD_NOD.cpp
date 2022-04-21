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
#define FN(i,s,e,d) for(ui64 i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(ui64 i=s; i<=e; i+=d)
#define RT return
void prime_factorization(ui64 n)
{
    ui64 a=0,SOD=1,NOD=1;
    for(ui64 i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
                a++;
            }
            cout<<i<<"^"<<a<<",";
            NOD *= (a+1);
            ui64 m = 1;
            FNE(j,1,a+1,1)
                m *= i;
            SOD *= ((m-1)/(i-1));
            a=0;
        }
    }
    if(n>1)
    {
        cout<<n<<"^"<<1<<endl;
        NOD *= 2;
        SOD *= ((n*n)-1)/(n-1);
        n/=n;
    }
    OUT("\nNOD = ");
    OUTllu(NOD);
    OUT("\nSOD = ");
    OUTllun(SOD);
}
int main()
{
    ui64 n;
    INllu(n);
    prime_factorization(n);
    RT 0;
}
