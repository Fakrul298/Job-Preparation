#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define INd(d) scanf("%d",&d)
#define INlld(d) scanf("%lld",&d)
#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define mx 10000000//10^7
vector<int>primes;
bool is_prime[mx];//1->not prime || 0->prime/*initially guessing all are prime
void siv()
{
    memset(is_prime,true,sizeof(is_prime));
    is_prime[1]=false;
    int i,j,k;
    FNE(i,4,mx,2)
      is_prime[i]=false;//deleting all the even except 2;
    for(i = 3; i*i<=mx ; i+=2)
    {
        if(is_prime[i])
        {
            int k=i*2;
            for(j = i*i; j<mx ; j+=k)//instead of using "j+=i" we've used "j+=(2*i)" because j&i are odd, for that j+i will be even and even are already excluded
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
    while(1)
    {
        int n;
        INd(n);
        if(is_prime[n]==1)
        {
            printf("%d is prime\n",n);
        }
        else
            printf("%d is not prime\n",n);
    }
    return 0;
    //cout<<is_prime[1000003]<<endl;
    //i64 n=1000000;
    //INlld(n);
    FNE(i,3,100,2)
    {
        if(is_prime[i])
            cout<<i<<" ";
    }
    cout<<endl;
   /* FN(i,0,100,1)
    {
        cout<<i+1<<"."<<primes[i]<<"\n";
    }*/
    return 0;
}
