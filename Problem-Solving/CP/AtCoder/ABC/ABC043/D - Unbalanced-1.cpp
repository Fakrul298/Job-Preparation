//acc
#include<bits/stdc++.h>
using namespace std;
int fa[26];
int main()
{
    string s;
    char c;
    cin>>s;
    int l = s.size(), left = -1, right = -1;
    for(int i=1; i<l; i++)
    {
        if(s[i] == s[i-1])
        {
            cout<<i<<" "<<i+1<<"\n";
            return 0;
        }
    }

    for(int i=2; i<l; i++)
    {
        if(s[i] == s[i-2])
        {
            cout<<i-1<<" "<<i+1<<"\n";
            return 0;
        }
    }

    cout<<left<<" "<<right<<"\n";
    return 0;
}
