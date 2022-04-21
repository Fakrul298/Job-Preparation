//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    string s;
    cin>>s;
    while(t--)
    {
        vector<int>cng;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'G' && s[i-1] == 'B')
                cng.push_back(i);
        }
        int sv = cng.size();
        for(int i=0; i<sv; i++)
        {
            int p = cng[i];
            s[p-1] = 'G';
            s[p] = 'B';
        }
        //cout<<s<<endl;
    }
    cout<<s<<"\n";
    return 0;
}
