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
#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return
void prime_fact(int n)
{
    OUT("%d: ",n);
    for(int i=2; i*i<=n; i++)
    {
        if(!(n%i))
        {
            while(!(n%i))
            {
                n/=i;
            }
            OUTd(i);
        }
    }
    if(n)
    {
        if(n!=1)
            OUTd(n);
        n/=n;
        //cout<<1<<endl;
    }
    OUT("\n");
}
int main()
{
    int n = 100000;
    FNE(i,2,n,1)
    {
        prime_fact(i);
    }
    RT 0;
}


