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
            int z1=n-(i-1);
            int z2=n+(i-1);
            if(j>=z1 && j<=z2)
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