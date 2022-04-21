//not acc
#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long int//%llu
#define INllu(d) scanf("%llu",&d);
#define OUTllun(d) printf("%llu\n",d);
#define OUTllu(d) printf("%llu ",d);
#define RT return

/*=====================================FORMULA====================*/
/*           if the prime factorization of n is,
                n = (p1^a1)*(p2^a2)........(pn^an)
           phi(n) = n*(1-(1/p1))*(1-(1/p2)).....(1-(1/pn))

*/
#define FNE(i,s,e,d) for(ui64 i=s; i<=e; i+=d)
#define mx 10000000
vector<ui64>is_prime(mx,1);//0->not prime || 1->prime/*initially guessing all are prime
void siv()
{

    is_prime[1]=0;
    ui64 sq = sqrt(mx);
    FNE(i,4,mx,2)
        is_prime[i]=0;//deleting all the even except 2;
    FNE(i,3,sq,2)
    {
        if(is_prime[i])
        {
            FNE(j,(i*i),mx,i)
            {
                is_prime[j]=0;
            }
        }
    }
}
#define Fphi(i,s,e,d) for(ui64 i=s; i*i<=e; i+=d)
ui64 phi(ui64 n)
{
    ui64 ans=n;
    Fphi(i,2,n,1)
    {
        if(n%i == 0)
        {
            while(n%i == 0)
                n/=i;
            ans -= ans/i;
        }
    }
    if(n>1)
        ans -= ans/n;
    RT ans;
}
int main()
{
    siv();
    ui64 n;
    INllu(n);
    if(is_prime[n] != 1){
        OUTllun(phi(n));
    }
    else//if prime ans = n-1(n<=10^7)
        OUTllun(n-1);
    RT 0;
}

