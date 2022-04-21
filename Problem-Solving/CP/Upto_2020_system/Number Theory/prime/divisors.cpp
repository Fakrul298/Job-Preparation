//not acc
#include<bits/stdc++.h>
using namespace std;
#define OUT printf
#define IN scanf
#define INd(d) scanf("%d",&d);
#define OUTdn(d) printf("%d\n",d);
#define OUTd(d) printf("%d ",d);
#define ui64 unsigned long long int//%llu
#define INllu(d) scanf("%llu",&d);
#define OUTllun(d) printf("%llu\n",d);
#define OUTllu(d) printf("%llu ",d);
#define FN(i,s,e,d) for(ui64 i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(ui64 i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return
#define PB push_back
#define MP make_pair
#define VALL(v) v.begin(),v.end()
typedef pair<int,int> pii;
vector<ui64>divisors[1000002];
void divisor_of_n(ui64 n)
{
    ui64 i,j,c=0;
    FNE(i,1,n,1)
    {
        FNE(j,i,n,i)
        {
            divisors[j].PB(i);
            c++;
        }
    }
    cout<<c<<endl;
}
int main()
{
    cout<<"Range ? ";
    ui64 n;
    INllu(n);
    divisor_of_n(n);
    /*FNE(i,1,n,1)
    {
        cout<<i<<"->";
        FN(j,0,divisors[i].size(),1)
           cout<<divisors[i][j]<<" ";
        cout<<endl;
    }*/
    cout<<"Divisor of ? ";
    ui64 x;
    INllu(x);
    ui64 s = divisors[x].size();
    FN(i,0,s,1)
        cout<<divisors[x][i]<<" ";
    RT 0;
}
