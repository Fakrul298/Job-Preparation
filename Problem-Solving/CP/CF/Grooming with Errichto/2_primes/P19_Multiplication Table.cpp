//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,sq;
    scanf("%I64d %I64d",&n,&x);

    sq = sqrt(x);

    int l = min(sq,n), ans = 0;

    for(int i=1; i<=l; i++)
    {
        if(x % i == 0)
        {
            if((x/i)<=n)
            {
                if((x/i) == i) ans++;
                else ans+=2;
            }

        }
    }
    printf("%d\n",ans);
    return 0;
}
