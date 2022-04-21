//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2 == 1)
    {
        printf("-1\n");
        return 0;
    }
    while(n>=1)
    {
        printf("%d ",n);
        n--;
    }
    printf("\n");
    return 0;
}
