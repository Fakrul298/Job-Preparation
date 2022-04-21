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
#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return
#define N  1000000
int  sq = sqrt(N);
unsigned flag[N>>6];
#define check(i) ((flag[i>>6])&(1<<((i>>1)&31)))
#define Set(i) (flag[i>>6]=flag[i>>6] | (1<<((i>>1)&31)))
void bitsiv()
{
    unsigned i,j,k;
    for(i = 3; i<sq; i+=2)
    {
        if(!check(i))
        {
            for(j=i*i,k=(i<<1); j<N; j+=k)
                Set(j);
        }
    }
    /*FN(i,3,20,2)
    {
        if(!check(i))
            cout<<i<<" ";
    }*/
}
int main()
{
    bitsiv();
    int t;
    INd(t);
    FN(i,0,t,1)
    {
        int n;
        INd(n);
        if(n>2)
        {
            OUTdn(1);
            OUTdn(2);
        }
        FNE(j,3,n,2)
        {
            if(!check(j))
                OUTdn(j);
        }
        OUT("\n");
    }
    RT 0;
}


