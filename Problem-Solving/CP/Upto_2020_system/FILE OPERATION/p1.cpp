#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    fstream f1("testing.txt",ios::in);
    fstream f2("file2.txt",ios::out);
    vector<string>s1;
    if(f1.is_open() && f2.is_open())
    {
        while(getline(f1,s))
        {
            s1.push_back(s);
            //cout<<s<<"\n";
            //f2<<s<<"\n";
        }

    }
    for(int i=0; i<s1.size(); i+=2)
    {
        f2<<s1[i];
        cout<<s1[i]<<endl;
        if(i != s1.size())
            f2<<", ";
    }
    f1.close();
    f2.close();
    return 0;
}
