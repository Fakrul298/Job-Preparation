//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    if(s[0]>='a' && s[0]<='z') s[0] = toupper(s[0]);
    cout<<s<<"\n";
    return 0;
}
