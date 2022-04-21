//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tempI,temp;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n-1; i++)
    {
        tempI = i;
        for(int j = i+1; j<n; j++)
        {
            if(a[j]<a[tempI])
            {
                tempI = j;
            }
        }
        if(tempI != i)
        {
            temp = a[i];
            a[i] = a[tempI];
            a[tempI] = temp;
        }


        for(int k=0; k<n; k++)
        {
            cout<<a[k];
            if(k == n-1) printf("\n");
            else printf(" ");
        }
    }

    return 0;
}
