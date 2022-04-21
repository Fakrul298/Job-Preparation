//acc
#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define ui64 unsigned long long int
#define FN(i,s,e) for(int i=s; i<e; i++)//loop not equal to end
#define FNE(i,s,e) for(int i=s; i<=e; i++)//loop equal to end
#define RF(i,s,e) for(int i=s; i>=e; i--)//reverse loop
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
typedef pair<int, int> pii;
int main()
{
    stack<pii>s;
    int N,mx=0,i=0;
    IN("%d",&N);
    while(N--)
    {
        int c;
        IN("%d",&c);
        if(c == 1)
        {
            int x;
            IN("%d",&x);
            if(!s.empty()) mx = s.top().second;
            if(x>mx)
                mx = x;
            s.push(MP(x,mx));
        }
        else if(c == 2)
        {
            s.pop();
            if(s.empty())
                mx = 0;
        }
        else
        {
            int t = s.top().second;
            OUT("%d\n",t);
        }
        i++;
    }
    RT 0;
}
