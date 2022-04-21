//acc
#include<bits/stdc++.h>
using namespace std;
#define PB push_back
int main()
{
    int n,x,s,index;
    cin>>n;
    vector<int>a;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.PB(x);
        s = a.size();
        sort(a.begin(),a.end(),greater<int>());
        for(int j = s-1; j>=0; j--)
        {
            if(a[j] == x)
            {
                index = j;
                break;
            }
        }
        cout<<index+1<<"\n";
    }

    for(int i = 0; i<n; i++)
    {
        cout<<a[i];
        if(i == n-1) cout<<"\n";
        else cout<<" ";
    }

    return 0;
}
