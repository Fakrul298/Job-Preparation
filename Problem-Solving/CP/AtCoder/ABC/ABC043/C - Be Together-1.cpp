//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sum = 0,avgD;
    int n,N,ans = 0, avgI;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += (double)a[i];
    }
    avgD = sum/(double)n;
    avgI = sum/n;

    //cout<<avgI<<" "<<avgD<<endl;
    if(fabs(avgI - avgD)>0.5)
        N = avgI+1;
    else
        N = avgI;

    for(int i=0; i<n; i++)
    {
        ans += pow((fabs(a[i] - N)),2);
    }

    cout<<ans<<"\n";
    return 0;
}
