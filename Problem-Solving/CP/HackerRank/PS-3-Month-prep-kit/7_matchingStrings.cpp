#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>input,query;

    int n,q;
    scanf("%d ",&n);
    string s1;
    for(int i=0; i<n; i++)
    {
        getline(cin,s1);
        input.push_back(s1);
    }

    scanf("%d ",&q);
    for(int i=0; i<q; i++)
    {
        getline(cin,s1);
        query.push_back(s1);
    }

    int ans[q];
    for(int i=0; i<q; i++) ans[i] = 0;



    for(int i = 0; i<q; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(query[i] == input[j])
                ans[i]++;
        }
    }

    for(int i=0; i<q; i++) printf("%d\n",ans[i]);
    return 0;
}
