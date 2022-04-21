//not acc
#include<bits/stdc++.h>
using namespace std;
#define i64 long long int//%lld
#define ui64 unsigned long long int//%llu
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
typedef pair<int,int> pii;
int main()
{
    int n1,n2,n3;
    IN("%d %d %d",&n1, &n2, &n3);
    int a1[n1],a2[n2],a3[n3];
    FN(i,0,n1)
        IN("%d",&a1[i]);
    FN(i,0,n2)
        IN("%d",&a2[i]);
    FN(i,0,n3)
        IN("%d",&a3[i]);
    stack<pii>s1,s2,s3;
    int h1=0,h2=0,h3=0;
    RF(i,n1-1,0)
    {
        int e = a1[i];
        h1+=a1[i];
        s1.push(MP(e,h1));
    }
    RF(i,n2-1,0)
    {
        int e = a2[i];
        h2+=a2[i];
        s2.push(MP(e,h2));
    }
    RF(i,n3-1,0)
    {
        int e = a3[i];
        h3+=a3[i];
        s3.push(MP(e,h3));
    }
    int mxheight=0;
    while(1)
    {
        int h1=s1.top().second;
        int h2=s2.top().second;
        int h3=s3.top().second;
        if(h1==h2 && h2==h3)
        {
            mxheight = h1;
            break;
        }
        if(h1>=h2 && h1>=h3)
            s1.pop();
        if(s1.empty())
        {
            mxheight = 0;
            break;
        }
        else if(h2>=h1 && h2>=h3)
            s2.pop();
        if(s2.empty())
        {
            mxheight = 0;
            break;
        }
        else if(h3>=h1 && h3>=h2)
            s3.pop();
        if(s3.empty())
        {
            mxheight = 0;
            break;
        }
    }
    cout<<mxheight<<endl;
    RT 0;
}
