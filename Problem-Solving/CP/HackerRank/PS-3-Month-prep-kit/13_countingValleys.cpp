//ACC
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d ",&n);
    int la[n];
    for(int i=0; i<n; i++) la[i] = 0;
    string s;
    getline(cin,s);
    int down = 0, up = 0, level = 0;

    for(int i=0; i<n; i++)
    {
        if(s[i] == 'U') level++;
        else level--;

        la[i] = level;
    }

    /*for(int i=0; i<n; i++)
        cout<<la[i];*/
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        if((la[i] == -1 && la[i-1] == 0) || (la[i] == -1 && i == 0))
        {
            for(int j = i+1; ; j++)
            {
                if(la[j] == 0)
                {
                    ans++;
                    i = j-1;
                    break;
                }
            }
        }
    }

    printf("%d\n",ans);
    return 0;
}
