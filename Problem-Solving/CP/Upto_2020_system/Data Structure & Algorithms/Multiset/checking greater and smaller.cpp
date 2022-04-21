//not acc
#include<bits/stdc++.h>
using namespace std;
#define i64 long long int//lld
#define ui64 unsigned long long int//llu
#define FN(i,s,e) for(int i=s ; i<e ; i++)//normal loop
#define FR(i,s,e) for(int i=s ; i>=e ; i--) //reverse loop
#define IN scanf
#define OUT printf
#define RT return
#define pb push_back
#define mp make_pair
#define EPS 0.000000001//10^(-9)
#define BIG 10000007
//for geometrical
#define pi acos(-1.00)
#define rad pi/180.00
#define deg 180.00/pi
void addingarray(int *p, int *q,int Size)
{
    FN(i,0,Size)
    {
        *q=(*p)+5;
        *p++;
        *q++;
    }
}
int main()
{

    int n;
    cout<<"How many numbers to enter : ";
    cin>>n;
    multiset<int,greater<int>>m1;

    FN(i,0,n)
    {
        int x;
        cin>>x;
        m1.insert(x);
    }
    cout<<"Printing the elements of m1 using greater: "<<endl;
    multiset<int,greater<int>>::iterator it;
    for(it = m1.begin() ; it!=m1.end() ; ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    multiset<int>m2(m1.begin(), m1.end());
    multiset<int>::iterator it2;
    cout<<"Elements of m1 after using this \"multiset<int>m2(m1.begin(), m1.end())\": "<<endl;
    for(it2 = m2.begin() ; it2!=m2.end() ; it2++)
    {
        cout<<*it2<<" ";
    }
    RT 0;
}

