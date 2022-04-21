#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int x;
    cin>>n>>x;
    long long int a[n];
    for(int i=0; i<n;i++) cin>>a[i];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i != j && a[i] + a[j] == x)
            {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";

    return 0;
}
