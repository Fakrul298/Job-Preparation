//acc
#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 n;
    cin>>n;

    i64 minPerimeter = 9999999999999, sq = sqrt(n), a, b;

    //cout<<minPerimeter<<endl;

    for(int i=1; i<=sq; i++)
    {
        if(n%i == 0)
        {
            a = i, b = n/i;
            minPerimeter = min(minPerimeter, (2*(a+b)));
        }
    }

    cout<<minPerimeter<<"\n";

    return 0;
}
