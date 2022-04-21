//not acc
#include<bits/stdc++.h>
using namespace std;
#define OUT printf
#define IN scanf
#define INd(a) scanf("%d",&a);
#define INd2(a,b) scanf("%d %d",&a,&b);
#define INd3(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define OUTdn(d) printf("%d\n",d);
#define OUTd(d) printf("%d ",d);

#define i64 long long int//%lld
#define INlld(a) scanf("%lld",&a);
#define INlld2(a,b) scanf("%lld %lld",&a,&b);
#define INlld3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);
#define OUTlldn(d) printf("%lld\n",d);
#define OUTlld(d) printf("%lld ",d);

#define ui64 unsigned long long int//%llu
#define INllu(a) scanf("%llu",&a);
#define INllu2(a,b) scanf("%llu %llu",&a,&b);
#define INllu3(a,b,c) scanf("%llu %llu %llu",&a,&b,&c);
#define OUTllun(d) printf("%llu\n",d);
#define OUTllu(d) printf("%llu ",d);

#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return

#define PB push_back
#define MP make_pair
#define MT make_tuple
#define VALL(v) v.begin(),v.end()

#define Fs first
#define Sc second
typedef pair<int,int> pii;
typedef pair<char,int>pci;
typedef pair<string,int>psi;
int vis[1000];
vector<int>G[1000];
ifstream f("input.txt");
void dfs(int s)
{
    if(vis[s])
        RT;
    OUTd(s);
    vis[s] = 1;
    for(auto i: G[s])
        dfs(i);
}
void make_Adlist(int v,int e)
{
    //OUT("Insert edges : \n");
    FN(i,0,e,1)
    {
        //OUT("u-v : ");
        int u,v;
        //INd2(u,v);
        f>>u>>v;
        G[u].PB(v);
        G[v].PB(u);
    }
}
void see_graph(int v,int e)
{
    FNE(i,1,v,1)
    {
        OUT("%d -> ",i);
        for(auto j:G[i])
        {
            OUTd(j);
        }
        OUT("\n");
    }
}
int main()
{
    int v,e;
    //OUT("Enter number of nodes & edges : ");
    //INd2(v,e);
    f>>v>>e;
    make_Adlist(v,e);
    see_graph(v,e);
    dfs(1);
    FNE(i,1,v,1)
    {
        if(!vis[i])
        {
            OUT("\nNot connected!!\n");
            RT 0;
        }
    }
    OUT("\nconnected!!");
    RT 0;
}


