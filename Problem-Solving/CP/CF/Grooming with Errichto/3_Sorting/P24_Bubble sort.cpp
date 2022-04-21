//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
        for(int k =0; k<n; k++)
        {
            printf("%d",a[k]);
            if(k != n-1) printf(" ");
            else printf("\n");
        }

    }
    return 0;
}
