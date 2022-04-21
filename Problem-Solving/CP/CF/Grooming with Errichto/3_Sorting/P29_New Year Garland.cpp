//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int r,g,b;
    long long int c[3];
    cin>>t;
    while(t--)
    {
        cin>>c[0]>>c[1]>>c[2];
        sort(c,c+3);
        //printf("c[0] = %lld , c[1] = %lld , c[2] = %lld\n",c[0],c[1],c[2]);
        if(c[0] + c[1]>=(c[2]-1))
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
    return 0;
}
