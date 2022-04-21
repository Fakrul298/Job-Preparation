#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l = s.size(), diff = 1;
    sort(s.begin(), s.end());
    for(int i=1; i<l; i++)
    {
        if(s[i] != s[i-1])
            diff++;
    }
    if(diff%2 == 0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";
    return 0;
}
