//acc
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, sumX = 0, sumY = 0, sumZ = 0, a,b,c;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d%d%d",&a,&b,&c);
        sumX += a;
        sumY += b;
        sumZ += c;
    }

    //cout<<sum<<endl;
    //this is same as (sumX == 0 && sumY ==0 && sumZ == 0)
    if((sumX + sumY + sumZ == 0) && (fabs(sumX) == fabs(sumY) && fabs(sumY) == fabs(sumZ) )) printf("YES\n");
    else printf("NO\n");
    return 0;
}
