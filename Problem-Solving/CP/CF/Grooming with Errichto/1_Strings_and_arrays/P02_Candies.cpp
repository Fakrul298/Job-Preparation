//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d",&a[i]);

    long long int candies = 0;
    int p1,p2;
    scanf("%d %d",&p1,&p2);

    for(int i=p1; i<=p2; i++)
        candies += a[i];

    cout<<candies<<"\n";
    return 0;
}
