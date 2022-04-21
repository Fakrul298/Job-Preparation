//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n1,n2,n3;
    cin>>n1>>n2;
    int s = n1.size();
    for(int i=0; i<s; i++)
    {
        if(n1[i] != n2[i])
            n3+='1';
        else
            n3+='0';
    }
    cout<<n3<<"\n";
    return 0;
}
