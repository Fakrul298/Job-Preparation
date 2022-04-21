#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l;
    string s;
    scanf("%d ",&t);
    while(t--)
    {
        cin>>s;
        l = s.size();
        if(s[0] == s[l-1])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
