#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>s;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s.push_back(s1), s.push_back(s2), s.push_back(s3);
    /*for(int i=0; i<3; i++)
    {
        for(int j=0; j<s[i].size(); j++)
        {
            cout<<s[i][j];
        }
        cout<<" ";
    }*/
    int i=0, aj=0, bj=-1, cj=-1,j=aj, la=s[0].size(), lb=s[1].size(), lc=s[2].size();
    while(aj<la && bj<lb && cj<lc)
    {
        //cout<<i<<","<<j<<" : "<<s[i][j]<<endl;
        if(aj == la || bj == lb || cj == lc)
            break;

        if(s[i][j] == 'a')
        {
            i = 0;
            aj++;
            j = aj;
        }
        else if(s[i][j] == 'b')
        {
            i = 1;
            bj++;
            j = bj;
        }
        else
        {
            i = 2;
            cj++;
            j = cj;
        }
    }
    //cout<<"Last: "<<i<<","<<j<<endl;
    if(i == 0) cout<<"A\n";
    else if(i == 1) cout<<"B\n";
    else cout<<"C\n";
    return 0;
}
