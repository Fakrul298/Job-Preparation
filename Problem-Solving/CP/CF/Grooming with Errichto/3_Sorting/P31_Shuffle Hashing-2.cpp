#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        int ls, hs, left = -1, right = -1;
        string s,h;
        cin>>s>>h;
        ls = s.size(), hs = h.size();
        int freq1[26], freq2[26];
        memset(freq1,0,sizeof(freq1));
        memset(freq2,0,sizeof(freq2));

        for(int i=0; i<ls; i++)
        {
            freq1[s[i]-'a']++;
        }

        for(int i=0; i<hs; i++)
        {
            freq2[h[i]-'a']++;
        }

        sort(freq1,freq1+26);
        sort(freq2,freq2+26);

        int yes0 = 1;

        for(int i=0; i<26; i++)
        {
            if(freq1[i] > freq2[i])
            {
                yes0 = 0;
                break;
            }
        }
        if(yes0 == 1)
        {

        }
        else
            printf("NO\n");

    }
    return 0;
}
