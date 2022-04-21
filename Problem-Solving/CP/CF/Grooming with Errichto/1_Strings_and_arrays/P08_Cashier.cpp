//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,l,sbreak,tbreak=0;
    cin>>n>>l>>sbreak;
    long c[n][2];
    for(int i=0; i<n; i++)
    {
        cin>>c[i][0]>>c[i][1];
    }
    int ibreak = 0;

    if(n == 0)
    {
        tbreak += (l/sbreak);
        cout<<tbreak<<"\n";
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        if(i==0) ibreak = c[i][0];
        else ibreak = c[i][0] - (c[i-1][0]+c[i-1][1]);

        tbreak += (ibreak/sbreak);

    }

    ibreak = l - (c[n-1][0]+c[n-1][1]);
    tbreak += (ibreak/sbreak);

    cout<<tbreak<<"\n";
    return 0;
}
