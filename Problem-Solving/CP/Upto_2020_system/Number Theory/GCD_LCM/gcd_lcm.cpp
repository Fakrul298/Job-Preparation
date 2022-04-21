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
ui64 gcd(ui64 a, ui64 b){ui64 mn = min(a,b), mx = max(a,b);if(mn == 0) RT mx;if(mx%mn == 0) RT mn;else gcd(mx%mn,mn);}
int main()
{
    ui64 a,b;
    INllu(a);
    INllu(b);
    ui64 g = gcd(a,b);
    ui64 l = (a*b)/g;
    cout<<"gcd = "<<g<<endl;
    cout<<"lcm = "<<l<<endl;
    RT 0;
}
