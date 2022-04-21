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
#define ui64 unsigned long long int//%llu
#define INllu(a) scanf("%llu",&a);
#define INllu2(a,b) scanf("%llu %llu",&a,&b);
#define INllu3(a,b,c) scanf("%llu %llu %llu",&a,&b,&c);
#define OUTllun(d) printf("%llu\n",d);
#define OUTllu(d) printf("%llu ",d);
#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define RT return
int main()
{
    int t;
    ui64 w;
    INd(t);
    FNE(i,1,t,1)
    {
        INllu(w);
        if(w&1)
        {
            OUT("Case %d: Impossible\n",i);
        }
        else
        {
            ui64 evm = (1<<1),odm = (w>>1),l=1;//test = (evm<<l);
            while(evm<=w)
            {
                //cout<<evm<<" "<<odm<<endl;
                if(odm&1) break;
                l++;
                odm = (w>>l);
                evm = (evm<<1);
                //test = (test<<l);
            }
            OUT("Case %d: %llu %llu\n",i,odm,evm);
        }
    }
    RT 0;
}


