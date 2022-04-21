#include<bits/stdc++.h>
using namespace std;
#define P insert
int main ()
{
    int n;
    cin>>n;
    multiset<int> mymultiset;
    for (int i=1; i<=n; i++)
    {
        int m;
        cin>>m;
        mymultiset.insert(m);
    }
    int x;
    cin>>x;
    //auto itlow = mymultiset.lower_bound (x);
    auto itup = mymultiset.upper_bound (x);
    auto it=mymultiset.begin();
    auto itend = mymultiset.end();
    itend--;
   /*cout<<"end is : "<<*itend<<endl;
    cout<<"itup is : "<<*(itup)<<endl;*/
    if((*(itup))>=(*itend))
    {
        mymultiset.insert(x);
    }
    else
    {
        mymultiset.erase(itup);
        mymultiset.insert(x);
    }
    // 10 20 50 60 70
    //mymultiset.erase(itup);
    cout << "mymultiset contains:";
    for ( ; it!=mymultiset.end(); it++)
        cout << ' ' << *it;
    cout << '\n';
    return main();
}
