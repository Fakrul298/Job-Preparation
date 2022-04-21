//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n,ans = 0;
    cin>>n;
    unsigned int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int mn = a[0];
    for(int i=1; i<n; i++)
    {
      if(a[i]<mn)
      {
          ans = i;
          mn = a[i];
      }
    }

    cout<<ans<<"\n";

    return 0;
}
