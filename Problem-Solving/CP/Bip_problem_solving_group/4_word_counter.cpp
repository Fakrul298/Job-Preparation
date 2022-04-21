#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int l = s.size(), word = 0;
    for(int i = 1; i<l; i++)
    {
        if(s[i] == ' ' && s[i-1] != ' ')
            word++;
        if(i == l-1 && s[i] != ' ')//for last word like "_xyz__xyz"
            word++;
    }
    cout<<word<<endl;
    return 0;
}
