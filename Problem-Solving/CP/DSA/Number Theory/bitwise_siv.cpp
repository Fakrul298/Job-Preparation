#include<iostream>
#include<math.h>
using namespace std;
#define MX 100000000
int is_prime[MX>>6];
#define check(n)(is_prime[n>>6] & (1<<((n>>1)&31)))
#define Set(n) (is_prime[n>>6] |= (1<<((n>>1)&31)))

void siv()
{
    unsigned int i,j,k,sq = sqrt(MX);
    for(i = 3; i<=sq; i+=2)
    {
        if(!check(i))
        {
            k = (i<<1);
            for(j = i*i; j<=MX; j+=k)
                Set(j);
        }
    }
}

int main()
{
    siv();
    printf("Enter a number to see the primes upto thar number : ");
    int n;
    cin>>n;
    printf("2 ");
    for(int i = 3; i<=n; i+=2)
    {
        if(!check(i))
            printf("%d ",i);
    }
    return 0;
}
