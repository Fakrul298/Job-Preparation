//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,out="";
    cin>>s;
    int si = s.size(), ic = 1;
    for(int i=0; i<si; i += ic)
    {
        if(s[i] == '.')
        {
           ic = 1;
           out += '0';
        }
        else
        {
            ic = 2;
            if(s[i+1] == '.') out += '1';
            else out += '2';
        }
    }
    cout<<out<<"\n";
    return 0;
}
