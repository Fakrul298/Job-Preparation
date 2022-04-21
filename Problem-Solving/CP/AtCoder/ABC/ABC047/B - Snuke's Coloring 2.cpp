#include<bits/stdc++.h>
using namespace std;
int main()
{
    int W,H,N,x,y,a,x1,x2,y1,y2,aw,ah;
    cin>>W>>H>>N;
    x1 = 0, x2 = W, y1 = 0, y2 = H;
    while(N--)
    {
        cin>>x>>y>>a;
        if(a == 1)
        {
            x1 = max(x,x1);
        }
        else if(a == 2)
        {
            x2 = min(x,x2);
        }
        else if(a == 3)
        {
            y1 = max(y,y1);
        }
        else
        {
           y2 = min(y,y2);
        }
        //printf("xmax:%d xmin:%d ymax:%d ymin:%d\n",xmax,xmin,ymax,ymin);
    }
    aw = max(0,(x2-x1));
    ah = max(0,(y2-y1));
    cout<<aw*ah<<"\n";

    return 0;
}
