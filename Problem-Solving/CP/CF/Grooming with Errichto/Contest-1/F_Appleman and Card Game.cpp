#include<bits/stdc++.h>
using namespace std;
vector<unsigned long long int>freq(26,0);
int main()
{
    int n,k,fs;
    scanf("%d %d ",&n,&k);
    string s;
    cin>>s;
    for(int i=0; i<n; i++) freq[s[i]-'A']++;
    unsigned long long int ans = 0,nd;
    fs = freq.size();
    sort(freq.begin(),freq.end(),greater<int>());

    for(int i=0; i<fs && freq[i] != 0; i++)
    {
        if(k<=0) break;
        nd = freq[i];

        if(k>=nd)
        {
            k-=nd;
            ans += pow(nd,2);
        }
        else
        {
            ans += pow(k,2);
            k=0;
        }
    }

    cout<<ans<<"\n";
    return 0;
}
