//not acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,s,in;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        s = 2*n;
        vector<vector<int>> a;
        vector<int>temp;
        for(int i=0; i<s; i++)
        {
            for(int j=0; j<s; j++)
            {
                scanf("%d",&in);
                temp.push_back(in);
            }
            a.push_back(temp);
            temp.clear();
        }

        for(int i=0; i<s; i++)
        {
            sort(a[i].begin(), a[i].end(), greater<int>());
        }

        for(int i=0; i<s; i++)
        {
            for(int j=0; j<s; j++)
                printf("%4d",a[i][j]);
            cout<<endl;
        }

    }
    return 0;
}
