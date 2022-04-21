//acc
#include<bits/stdc++.h>
using namespace std;
#define PB push_back
int a[16];
int ans = 0;
vector<int>b1,b2;
int thanosSort(int s, int e)
{
    b1.clear(), b2.clear();
    if(s==e) return max(ans,1);
    for(int i=s; i<=e; i++)
    {
        b1.PB(a[i]);
        b2.PB(a[i]);
    }
    sort(b2.begin(),b2.end());
    if(b1 == b2)
    {
        return max(ans, ((e-s)+1));
    }
    int mid = s + (e-s)/2;
    ans = max(ans,thanosSort(s,mid));
    ans = max(ans,thanosSort(mid+1,e));
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    ans = thanosSort(0,n-1);
    cout<<ans<<"\n";
    return 0;
}
