//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,cx,cy,s;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        s = x+y;
        if(s%2 == 0)
        {
            s/=2;
            if(x>=s)
            {
                cx = x-s;
                cy = y;
            }
            else
            {
                cx = x;
                cy = y-s;
            }
            printf("%d %d\n",cx,cy);
        }
        else
            printf("-1 -1\n");
    }
    return 0;
}
