//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,V;
    scanf("%d %d",&H,&V);
    int a[H][V];

    for(int i=0; i<H; i++)
    {
        for(int j=0; j<V; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int satisfied = 1;

    for(int i=0; i<H-1; i++)
    {
        for(int j=0; j<V-1; j++)
        {
            if((a[i][j] + a[i+1][j+1]) > (a[i+1][j]+a[i][j+1]))
            {
                satisfied = 0;
                break;
            }
        }
        if(satisfied == 0) break;
    }

    if(satisfied == 1) printf("Yes\n");
    else printf("No\n");

    return 0;
}
