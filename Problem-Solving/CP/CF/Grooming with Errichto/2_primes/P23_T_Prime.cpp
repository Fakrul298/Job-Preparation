//acc
#include<bits/stdc++.h>
using namespace std;
#define mx 10000000//10^7
bool is_prime[mx];//1->prime || 0->not prime/*initially guessing all are prime
void siv()
{
    memset(is_prime,true,sizeof(is_prime));
    is_prime[1]=false;
    int i,j,k;
    for(int i=4; i<=mx; i+=2)
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
}
int main()
{
    siv();
    int n;
    long long int x, sq;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        sq = sqrt(x);
        if(is_prime[sq]==1 && sq*sq == x)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
