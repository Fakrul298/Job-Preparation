//acc
#include<bits/stdc++.h>
using namespace std;
int freq[26];
int main()
{
    string s1;
    getline(cin,s1);

    int n = s1.size();
    for(int i=0; i<n; i++)
    {
        if(s1[i] != ' ')
        {
            int c = tolower(s1[i]) - 'a';
            //cout<<s1[i]<<"->"<<c<<"\n";
            freq[c]++;
        }
    }

    //cout<<endl;
    bool pangram = true;
    for(int i=0; i<26; i++)
    {
        //cout<<freq[i]<<" ";
        if(freq[i] == 0)
        {
            pangram = false;
            break;
        }
    }
    //cout<<endl;
    if(pangram == true) printf("pangram\n");
    else printf("not pangram\n");
    return 0;
}
