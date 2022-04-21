//ACC
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int luckyNumbers[14] = {4,44,444,7,77,777,47,477,74,744,474,447,774,747};
    int n;
    sort(luckyNumbers,luckyNumbers+14);
    //for(int i=0; i<14; i++) cout<<i+1<<"."<<luckyNumbers[i]<<"\n";
    //cout<<endl;
    scanf("%d",&n);
    for(int i = 0;i<14; i++)
    {
        if(n%luckyNumbers[i] == 0)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
