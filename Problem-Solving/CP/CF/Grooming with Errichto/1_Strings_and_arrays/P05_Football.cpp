//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size(), zero = 0, one = 0;

    for(int i=0;i<n; i++)
    {
        if(s[i] == '0')
        {
            if(one<7) one = 0;
            zero++;
        }
        else
        {
            if(zero<7) zero = 0;
            one++;
        }
        if(one >= 7 || zero>=7) break;
    }
    if(zero>=7 || one>=7)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
