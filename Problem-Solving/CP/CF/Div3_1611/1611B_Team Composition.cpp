#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a,b,ans = 0;
    scanf("%d",&t);
    while(t--)
    {
        cin>>a>>b;

        if(fabs(a-b)<=3)
        {
            if(fabs(a-b)<=1) ans = min(a,b)/2;
            else
            {
                int mn = min(a,b);
                ans = ceil((double)mn/(double)2);
            }
        }
        else
        {
            int mx, before = 0, after;
            mx = max(a,b);
            if(mx == a)
            {
                while(fabs(a-b)>3 && a>=3 && b>=1)
                {
                    a-=3;
                    b--;
                    before++;
                }
                if(fabs(a-b)<=1) after = min(a,b)/2;
                else
                {
                    int mn = min(a,b);
                    after = ceil((double)mn/(double)2);
                }
            }
            else
            {
                while(fabs(a-b)>3 && b>=3 && a>=1)
                {
                    b-=3;
                    a--;
                    before++;
                }
                if(fabs(a-b)<=1) after = min(a,b)/2;
                else
                {
                    int mn = min(a,b);
                    after = ceil((double)mn/(double)2);
                }
            }
            //cout<<a<<" "<<b<<endl;
            ans = before + after;
        }

        cout<<ans<<"\n";

    }
    return 0;
}
