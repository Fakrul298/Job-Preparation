//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, positive = 0, negative = 0, zero = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++) scanf("%d",&arr[i]);


    for(int i = 0; i<n; i++)
    {
        if(arr[i] > 0) positive++;
        else if(arr[i] ==  0) zero++;
        else negative++;
    }
    double pr = (double)positive/(double)n;
    double nr = (double)negative/(double)n;
    double zr = (double)zero/(double)n;
    //cout<<positive<<" "<<negative<<" "<<zero<<endl;
    printf("%0.6f\n%0.6f\n%0.6f\n",pr,nr,zr);
    return 0;
}
