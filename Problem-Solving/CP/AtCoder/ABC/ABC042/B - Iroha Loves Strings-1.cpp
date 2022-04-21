//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>sv;
    int n,l;
    cin>>n>>l;
    cin.ignore();
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        sv.push_back(s);
    }
    sort(sv.begin(), sv.end());
    int svL = sv.size();
    string ans = "";
    for(int i=0; i<svL; i++)
    {
        ans += sv[i];
    }
    cout<<ans<<"\n";
    return 0;
}
