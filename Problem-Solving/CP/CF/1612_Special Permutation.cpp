//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<int,int>left;
        map<int,int>right;
        int n,a,b,cnt = 1, sp;
        cin>>n>>a>>b;
        int arr[n];
        sp = n/2;
        right.insert(make_pair(b,1));
        for(int i=1; i<b && cnt<=sp-1; i++)
        {
            if(i != a)
            {
                right.insert(make_pair(i,1));
                cnt++;
            }
        }
        cnt = 1;
        left.insert(make_pair(a,1));
        for(int i = a+1; i<=n && cnt<=sp-1; i++)
        {
            if(right.find(i) == right.end())
            {
                left.insert(make_pair(i,1));
                cnt++;
            }
        }
        if(left.size() < sp || right.size()<sp)
            cout<<"-1\n";
        else
        {
            for(auto i = left.begin() ; i!=left.end(); i++)
                cout<<i->first<<" ";
            int cnt = 0;
            for(auto i = right.begin() ; i!=right.end(); i++)
                {
                    cout<<i->first;
                    cnt++;
                    if(cnt<sp)
                        cout<<" ";
                    else
                        cout<<endl;
                }
        }
    }
    return 0;
}
