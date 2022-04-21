//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    long long int n;
    while(t--)
    {
        cin>>n;
        int r,it = 1, maxEvenPos = 0;

        if(n%2 == 0)
        {
            printf("0\n");
            continue;
        }

        while(n)
        {
            r = n%10;

            if(r%2 == 0)
            {
                maxEvenPos = max(it,maxEvenPos);
            }
            n/=10;
            it++;
        }

        if(maxEvenPos == 0)
        {
            printf("-1\n");
            continue;
        }

        int ans;

        if(maxEvenPos == it-1) ans = 1;
        else ans = 2;

        printf("%d\n",ans);

    }
    return 0;
}
