#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    scanf("%d",&q);
    long long int n;
    for(int i = 0; i<q; i++)
    {
        scanf("%lld",&n);
        bitset<32>toFlip(n);
        toFlip.flip();
        n = toFlip.to_ulong();
        printf("%lld\n",n);
    }
    return 0;
}
