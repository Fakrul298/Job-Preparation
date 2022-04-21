//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,eight = 0;
    scanf("%d ",&n);
    string s;
    cin>>s;
    if(n<11)
    {
        printf("0\n");
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i] == '8') eight++;
    }
    /*if(eight == 0)
    {
        printf("0\n");
        return 0;
    }*/

    int ans = min((n/11),eight);
    printf("%d\n",ans);
    return 0;
}
