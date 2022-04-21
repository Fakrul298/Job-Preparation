//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>ans;
    string s,s2 = "";
    cin>>s;
    int l = s.size();
    for(int i=0; i<l; i++)
    {
        if(s[i] != 'B') ans.push(s[i]);
        else if(!ans.empty() && s[i] == 'B') ans.pop();
    }

    while(!ans.empty())
    {
        char c = ans.top();
        s2 += c;
        ans.pop();
    }
    reverse(s2.begin(),s2.end());
    cout<<s2;
    return 0;
}
