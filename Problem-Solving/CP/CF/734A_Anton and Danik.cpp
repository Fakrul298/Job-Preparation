//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,an=0, dn=0;
    scanf("%d ",&n);
    string rs;
    cin>>rs;
    for(int i=0; i<n; i++)
    {
        if(rs[i] == 'A') an++;
        else dn++;
    }
    if(an>dn) printf("Anton\n");
    else if(an<dn) printf("Danik\n");
    else printf("Friendship\n");
    return 0;
}
