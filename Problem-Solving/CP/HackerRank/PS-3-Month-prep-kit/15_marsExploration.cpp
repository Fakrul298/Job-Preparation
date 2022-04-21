//ACC
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,re;
    getline(cin,s);
    int n = s.size();
    int ans = 0;

    re = "SOS";
    for(int i=0; i<n; i+=3)
    {
        if(s[i] != 'S') ans++;
        if(s[i+1] != 'O') ans++;
        if(s[i+2] != 'S') ans++;
    }

    printf("%d\n",ans);
    return 0;
}
