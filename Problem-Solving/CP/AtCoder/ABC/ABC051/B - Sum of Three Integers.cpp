#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s,ans = 0,r;
    cin>>k>>s;
    for(int x=0; x<=k; x++)
    {
        for(int y=0; y<=k; y++)
        {
            r = s-x-y;
            if(r>=0 && r<=k)//else is possible in [0,k]
            {
                ans++;
                //printf("----%d %d %d\n",x,y,r);
            }
            //else
              //  printf("%d %d %d\n",x,y,r);
        }
    }
    cout<<ans;
    return 0;
}
