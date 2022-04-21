//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,mark,ans = 0;
    scanf("%d %d",&n,&p);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&mark);
        if(mark<p) ans++;
    }

    printf("%d\n",ans);

    return 0;
}
