//not acc
#include<bits/stdc++.h>
using namespace std;
#define MP make_pair
#define PB push_back
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d",&n);
        vector<int>a,b;
        int poses[n];
        map<int,int>freq;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            a.PB(x);
            b.PB(x);
        }
        sort(b.begin(),b.end(),greater<int>());
        int k = 1;
        //multimap<int,int>M;
        //cout<<"ita: ";
        auto ita = a.begin();
        int posIna,same = 0;
        for(int i=0; i<n; i++)
        {
            ita = find(a.begin(),a.end(),b[i]);
            posIna = (ita)-a.begin();
            if(freq.find(posIna) == freq.end())
            {
                same = 0;
                freq.insert(MP(posIna,1));
            }
            else
            {
                same++;
                posIna += same;
                freq.insert(MP(posIna,1));
            }
            //posIna = (ita)-a.begin();
            if(i%2 == 0)
            {
                //M.insert(MP(b[i],k));
                poses[posIna] = k;
            }
            else
            {
                //M.insert(MP(b[i], k*-1));
                poses[posIna] = k*-1;
                k++;
            }
            //cout<<posIna<<" ";
        }
        //cout<<endl;
        int e;
       // cout<<"ita : ";
       int ans = 0;
        for(int i=0; i<n; i++)
        {
            ans += fabs(poses[i]) * 2 *a[i];
            //cout<<poses[i]<<" ";
        }
        cout<<ans<<"\n0 ";
        for(int i=0; i<n; i++)
        {
            //ans += fabs(poses[i]) * 2 *a[i];
            cout<<poses[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
