//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase,rating;
    scanf("%d",&testCase);
    for(int i=0; i<testCase; i++)
    {
        scanf("%d",&rating);
        if(rating>=1900)
            printf("Division 1\n");
        else if(rating >=1600 && rating <=1899)
            printf("Division 2\n");
        else if(rating >=1400 && rating<=1599)
            printf("Division 3\n");
        else
            printf("Division 4\n");
    }
    return 0;
}
