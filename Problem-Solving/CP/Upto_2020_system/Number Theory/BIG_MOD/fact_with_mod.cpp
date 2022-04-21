//not acc
#include<bits/stdc++.h>
using namespace std;
#define OUT printf
#define IN scanf
#define ui64 unsigned long long int//%llu
#define INllu(d) scanf("%llu",&d);
#define OUTllun(d) printf("%llu\n",d);
#define OUTllu(d) printf("%llu ",d);
#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return
ui64 fact(ui64 a, ui64 M)
{
    ui64 f = 1%M;
    FNE(i,1,a,1)
    {
        f = ((f%M) * (i%M))%M;
    }
    RT f;
}
int main()
{
    ui64 n,M;
    INllu(n);
    INllu(M);
    OUTllun(fact(n,M));
    RT 0;
}
