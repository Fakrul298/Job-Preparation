//not acc(TLE)
#include<bits/stdc++.h>
using namespace std;
#define llu unsigned long long int
int main()
{
    int n,a;
    cin>>n>>a;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    llu x = pow(2,n), ans = 0,sum,avg,cnt;

    for(llu i=1; i<x; i++)
    {
        bitset<50>bit(i);
        cnt = 0;
        sum = 0;
        avg = 0;
        for(int j=0; j<n; j++)
        {
            if(bit[j] == 1)
            {
                cnt++;
                sum += arr[j];
                //cout<<arr[j];
            }
        }
        //cout<<endl;
        avg = sum/cnt;

        if((double)((double)sum/(double)cnt) == a)
        {
            //cout<<"s: "<<sum<<" c:"<<cnt<<" avg:"<<avg<<endl;
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
