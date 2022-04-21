//acc
#include<bits/stdc++.h>
using namespace std;
int freq[26];
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0; i<n; i++)
        freq[s[i]-'a']++;
    for(int i=0; i<26; i++)
    {
        if(freq[i] %2 == 1)
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
