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
    int g;
    IN("%d",&g);
    while(g--)
    {
        int n,m,x;
        IN("%d %d %d",&n, &m, &x);
        int a[n],b[m];
        FN(i,0,n)
            IN("%d",&a[i]);
        FN(i,0,m)
            IN("%d",&b[i]);
        stack<int>s1,s2;
        RF(i,n-1,0)
            s1.push(a[i]);
        RF(i,m-1,0)
            s2.push(b[i]);
        /*while(!s1.empty()){
            cout<<s1.top()<<" ";
            s1.pop();
        }
        cout<<endl;
        while(!s2.empty()){
            cout<<s2.top()<<" ";
            s2.pop();
        }
        cout<<endl;*/
        int H = 0,c=0;
        while(1)
        {
            if(s1.empty() && s2.empty())
                break;
            if(H>=x)
                break;
            int t1=0,t2=0;
            if(!s1.empty())
                t1 = s1.top();
            if(!s2.empty())
                t2 = s2.top();
            //cout<<"t1 = "<<t1<<" t2 = "<<t2<<endl;
            if(t1<t2 || t2 == 0)
            {
                H+=t1;
                if(H<x)
                {
                    s1.pop();
                    c++;
                }
            }
            else if(t2<=t1 || t1 == 0)
            {
                H+=t2;
                if(H<x)
                {
                    s2.pop();
                    c++;
                }
            }
        }
        OUT("%d\n",c);
    }
    RT 0;
}

