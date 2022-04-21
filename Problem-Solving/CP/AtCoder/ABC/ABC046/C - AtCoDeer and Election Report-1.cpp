#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,r1,r2,nextr1,nextr2,diva,divb,div;
    cin>>n;
    cin>>r1>>r2;
    for(int i=1; i<n; i++)
    {
        cin>>nextr1>>nextr2;
        //cout<<a<<" "<<b<<endl;
        diva = ceil((long double)((long double)r1/(long double)nextr1));
        divb = ceil((long double)((long double)r2/(long double)nextr2));
        //cout<<"mx(a,b): "<<mxab<<" min(r1,r2): "<<mn<<endl;
        div = max(diva,divb);
        r1 = nextr1 * div;
        r2 = nextr2 * div;
        //cout<<r1<<" "<<r2<<endl<<endl;
    }
    cout<<r1+r2;
    return 0;
}
