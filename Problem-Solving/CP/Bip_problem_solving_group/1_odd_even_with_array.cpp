#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i] % 2 == 0) printf("Even\n");
        else printf("Odd\n");
    }

    return 0;
}
