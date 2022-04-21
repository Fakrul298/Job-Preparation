//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],ans,r,c;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>a[i][j];
            if(a[i][j] == 1){
                r = i;
                c = j;
            }
        }
    }
    ans = fabs(2-r) + fabs(2-c);
    cout<<ans<<"\n";
    return 0;
}
