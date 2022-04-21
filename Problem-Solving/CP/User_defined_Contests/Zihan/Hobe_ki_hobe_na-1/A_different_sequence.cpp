//acc
#include<bits/stdc++.h>
using namespace std;
#define MP make_pair
#define PB push_back
int main()
{
    int n,L;
    scanf("%d",&n);
    map<vector<int>,int>seqs;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&L);
        int ele;
        vector<int>eles;
        for(int j=0; j<L; j++)
        {
            scanf("%d",&ele);
            eles.PB(ele);
        }

        seqs.insert(MP(eles,L));
    }
    printf("%d\n",seqs.size());

    return 0;
}
