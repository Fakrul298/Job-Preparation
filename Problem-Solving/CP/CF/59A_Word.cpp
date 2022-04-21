//acc
#include<bits/stdc++.h>
using namespace std;
void toUpper(string s,int n)
{
    for(int i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z') printf("%c",s[i]-('a'-'A'));
        else printf("%c",s[i]);
    }
    printf("\n");
}

void toLower(string s,int n)
{
    for(int i=0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z') printf("%c",s[i]+('a'-'A'));
        else printf("%c",s[i]);
    }
    printf("\n");
}
int main()
{
    string s;
    cin>>s;
    int up = 0, low = 0, n = s.size();
    for(int i = 0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z') up++;
        else low++;
    }
    if(up>low) toUpper(s,n);
    else toLower(s,n);
    return 0;
}
