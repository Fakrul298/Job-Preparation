//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n1 = s1.size(), n2 = s2.size();

    for(int i=0; i<n1; i++) s1[i] = tolower(s1[i]);

    for(int i=0; i<n2; i++) s2[i] = tolower(s2[i]);

    //cout<<s1<<" "<<s2<<endl;
    if(s1>s2) printf("1\n");
    else if(s1 == s2) printf("0\n");
    else printf("-1\n");
    return 0;
}
