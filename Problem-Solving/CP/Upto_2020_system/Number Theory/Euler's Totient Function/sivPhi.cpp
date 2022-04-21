//not acc
#include<bits/stdc++.h>
using namespace std;
#define OUT printf
#define IN scanf
#define INd(d) scanf("%d",&d);
#define OUTdn(d) printf("%d\n",d);
#define OUTd(d) printf("%d ",d);
#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define RT return
#define PB push_back
#define mx 10000000
int prime[mx],phi[mx];
void sivPhi()
{
    FNE(i,1,mx,1) phi[i] = i;
    prime[1] = 1;
    //from 2 for
    //every prime
    //we'll go to all its multiples and
    //divide and multiply it by that prime
    FNE(i,2,mx,1)
    {
        if(!prime[i])
        {
            FNE(j,i,mx,i)
            {
                prime[j]= 1;
                phi[j] = phi[j]/i*(i-1);
            }
        }
    }
}
int main()
{
    sivPhi();
    int x;
    INd(x);
    cout<<"phi("<<x<<") = "<<phi[x];
    RT 0;
}

