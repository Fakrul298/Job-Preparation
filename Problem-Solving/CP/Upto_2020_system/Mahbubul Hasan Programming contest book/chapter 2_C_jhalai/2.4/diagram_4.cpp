#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,range;
    cin>>n;
    range=(2*n)-1;
    for(int i=1 ; i<=n ; i++)
    {
        int d=1;
        for(int j=1 ; j<=range ; j++)
        {
            if(j>=i && j<=(range-i)+1)
            {
                cout<<d;
                if(j<n) d++;
                else d--;
            }
            else cout<<".";
        }
        cout<<endl;
    }
    return 0;
}