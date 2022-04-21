/*
B - Increment Decrement
easy and tricky
initialize the value of x = 0
just iterate over the string and
if the character is 'I' the increase the value of x
    ................ 'D' then decrease the value of x
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0,N,ans = 0;
    char c;
    scanf("%d ",&N);
    string s;
    cin>>s;
    for(int i =0; i<N; i++)
    {
        c = s[i];
        if(c == 'I') x++;
        else if(c == 'D') x--;
        ans = max(ans,x);
    }
    printf("%d\n",ans);

    return 0;
}


