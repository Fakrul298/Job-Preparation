#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t[n],tp[n];
    for(int i=0; i<n; i++) cin>>t[i];
    int m,pNo,xi,sum;
    cin>>m;
    for(int j=0; j<m; j++)
    {
        cin>>pNo>>xi;
        sum = 0;
        for(int i=0; i<n; i++)
        {
            tp[i] = t[i];
        }
        tp[pNo - 1] = xi;
        for(int i=0; i<n; i++)
            sum += tp[i];
        cout<<sum<<endl;
    }
    return 0;
}
