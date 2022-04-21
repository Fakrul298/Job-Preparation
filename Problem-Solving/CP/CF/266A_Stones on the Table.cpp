//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>stc;
    int n;
    scanf("%d ",&n);
    string s;
    cin>>s;
    int same = 0;
    stc.push(s[0]);
    for(int i=1; i<n; i++)
    {
        char top = stc.top();
        //cout<<top;
        if(s[i] == top) same++;
        else stc.push(s[i]);
    }
    //cout<<endl;
    printf("%d\n",same);
    return 0;
}
