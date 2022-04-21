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
int ncr(int n,int r)
{
    r = min(r,n-r);
    //(n)c(r) = (n)c(n-r)
    //as (n)c(r) = n*(n-1)*.....*(n-r+1) / r*(r-1)*(r-2)...*1
               //= (n-r+1)/1* (n-r)/2 * (n-r-1)/3...* ((n-1)/(r-1)) * (n/r)
    int ans = 1;
    int up = n-r+1;//initially
    FNE(i,1,r,1)
    {
        ans *= up;
        ans /= i;
        up++;
    }
    RT ans;
}
int main()
{
    int n,k;
    INd2(n,k);
    int ans = ncr(n,k);
    OUTdn(ans);
    RT 0;
}


