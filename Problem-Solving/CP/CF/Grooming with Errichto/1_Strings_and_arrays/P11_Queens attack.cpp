//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int ifreq[n], jfreq[n], iPjfreq[2*n];
    map<int,int>iMjfreq;
    memset(ifreq,0,n);
    memset(jfreq,0,n);
    memset(iPjfreq,0,2*n);


    for(int i=0; i<n; i++) ifreq[i] = 0;
    for(int i=0; i<n; i++) jfreq[i] = 0;
    for(int i=0; i<2*n; i++) iPjfreq[i] = 0;


    /*for(int i=0; i<n; i++) cout<<ifreq[i]<<" "; cout<<endl;
    for(int i=0; i<n; i++) cout<<jfreq[i]<<" "; cout<<endl;
    for(int i=0; i<2*n; i++) cout<<iPjfreq[i]<<" "; cout<<endl;*/



    while(q--)
    {
        int i,j;
        cin>>i>>j;
        //int mnij = min(i,j), mxij = max(i,j);
        auto it = iMjfreq.find(i-j);
        if(ifreq[i-1] >= 1 || jfreq[j-1] >= 1 || iPjfreq[i+j-2] >= 1 || it != iMjfreq.end()) printf("NO\n");
        else
        {
            printf("YES\n");
            ifreq[i-1]++;
            jfreq[j-1]++;
            iPjfreq[i+j-2]++;
            iMjfreq.insert(make_pair(i-j,1));
        }

        /*for(int i=0; i<n; i++) cout<<ifreq[i]<<" ";
        cout<<endl;
        for(int i=0; i<n; i++) cout<<jfreq[i]<<" ";
        cout<<endl;
        for(int i=0; i<2*n; i++) cout<<iPjfreq[i]<<" ";
        cout<<endl;*/

    }

    return 0;
}
