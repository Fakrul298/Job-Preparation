//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, two;
    scanf("%d",&n);
    printf("%d\n",n/2);
    if(n%2 == 0)
    {
        two = n/2;
        for(int i=0; i<two; i++)
        {
            printf("%d",2);
            if(i != two-1) printf(" ");
            else printf("\n");
        }
    }
    else
    {
        two = (n/2) - 1;
        for(int i=0; i<two; i++)
            printf("%d ",2);
        printf("3\n");
    }
    return 0;
}
