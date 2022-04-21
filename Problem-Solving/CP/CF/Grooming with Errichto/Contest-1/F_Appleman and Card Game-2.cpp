#include<bits/stdc++.h>
using namespace std;
int cntC[26];
int main()
{
    int n,k;
    scanf("%d %d ",&n,&k);
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        cntC[s[i]-'A']++;
    }
    vector<pair<int,char>>NewV;
    for(int i=0; i<26; i++)
    {
        if(cntC[i]!=0)
        {
           // OUT("%c->%d\n",i+'A',cntC[i]);
            NewV.push_back({cntC[i],i+'A'});
        }
    }
    sort(NewV.begin(),NewV.end(),greater<pair<int,char>>());
    int l = NewV.size();
    string ts="";
    for(int i=0; i<l; i++)
    {
        char c = NewV[i].second;
        int cnt = NewV[i].first;
        while(cnt--)
        {
            if(ts.size()==k) break;
            ts += c;
        }
    }
    cout<<ts<<endl;
    int freq2[26];
    long long int coin = 0;
    memset(freq2,0,sizeof(freq2));
    for(int i=0; i<k; i++)
    {
        freq2[ts[i]-'A']++;
    }
    //for(int i=0; i<26; i++) cout<<freq2[i]<<" ";
    for(int i=0; i<26; i++)
    {
        if(freq2[i]!=0)
        {
            //OUT("%c->%d\n",i+'A',freq2[i]);
            long long int x = freq2[i];
            coin += (x*x);
        }
    }
    cout<<coin<<endl;
    return 0;
}
