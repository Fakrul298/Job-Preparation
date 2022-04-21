#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int n1,n2;
    cin>>n1>>n2;
    cout<<fabs(n1-n2)<<endl;
    return 0;*/
    int n;
    scanf("%d",&n);
    int a[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);

    int leftToRight = 0, rightToLeft = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
                leftToRight += a[i][j];
            if(i+j == n-1)
                rightToLeft += a[i][j];
        }
    }
    //cout<<leftToRight<<" "<<rightToLeft<<endl;
    int ans = fabs(leftToRight - rightToLeft);
    printf("%d\n",ans);
    return 0;
}
