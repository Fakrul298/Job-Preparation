
#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define ui64 unsigned long long int
#define FN(i,s,e) for(int i=s; i<e; i++)//loop not equal to end
#define FNE(i,s,e) for(int i=s; i<=e; i++)//loop equal to end
#define RF(i,s,e) for(int i=e; i>=e; i--)//reverse loop
#define IN scanf
#define OUT printf
#define SQ(a) (a)*(a)
#define RT return
#define PB push_back
#define MP make_pair
#define EPS 0.000000001//10^(-9)
#define BIG 10000007
//for geometrical
#define pi acos(-1.00)
#define rad pi/180.00
#define deg 180.00/pi
void intIN(int &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
    {
        number = number *10 + c - 48;
    }
    if (negative)
        number *= -1;
}
int main()
{
    int n;
    string s;
    intIN(n);
    stack<string>s1,s2;
    FN(i,0,n)
    {
        cin>>s;
        s1.emplace(s);
    }
    s2.swap(s1);
    while(!s2.empty())
    {
        cout<<"size : "<<s2.size()<<endl;
        cout<<s2.top()<<endl;
        s2.pop();
    }
    return 0;
}

