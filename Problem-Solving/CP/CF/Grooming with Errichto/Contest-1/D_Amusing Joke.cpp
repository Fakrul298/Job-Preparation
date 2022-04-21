#include<bits/stdc++.h>
using namespace std;
int freq1[26], freq2[26];
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int l1 = s1.size(), l2 = s2.size(), l3 = s3.size();
    for(int i=0; i<l1; i++)
        freq1[s1[i]-'A']++;

    for(int i=0; i<l2; i++)
        freq1[s2[i]-'A']++;

    for(int i=0; i<l3; i++)
        freq2[s3[i]-'A']++;

    for(int i=0; i<26; i++)
    {
        if(freq1[i] != freq2[i])
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";

    return 0;
}
