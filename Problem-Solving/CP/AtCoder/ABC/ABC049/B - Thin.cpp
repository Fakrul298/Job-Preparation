#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,K;
    scanf("%d %d ",&H,&K);
    char a[H][K];
    for(int i=0; i<H; i++)
        for(int j=0; j<K; j++)
            cin>>a[i][j];

    for(int i=0; i<H; i++)
    {
        for(int k=0; k<2; k++)
        {
            for(int j=0; j<K; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
