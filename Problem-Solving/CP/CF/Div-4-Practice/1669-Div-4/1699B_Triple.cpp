//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        multiset<int>ms;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            int tv = a[i];
            ms.insert(tv);
        }
        int found = 0;
        for(auto i=ms.begin(); i!=ms.end(); i++)
        {
            if(ms.count(*i)>=3)
            {
                cout<<(*i)<<"\n";
                found = 1;
                break;
            }
        }
        if(found == 0) cout<<-1<<"\n";

    }
    return 0;
}
