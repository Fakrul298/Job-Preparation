#include<bits/stdc++.h>
using namespace std;
int vis[10005];
vector<int>G[10005];
bool dfs(int node,int parent)
{
    vis[node]  = 1;
    for(auto child:G[node])
    {
        if(vis[child] == 0)
        {
            if(dfs(child,node))
                return true;
        }
        else
            if(child != parent)
                return true;
    }
    return false;
}
int main()
{
    int n,e,s=0;
    //cout<<"Enter the number of vertex and edges : ";
    scanf("%d %d",&n,&e);
    //G[n+1];
    for(int i=0 ; i<e ; i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        if(s==0) s = u;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    /*cout<<"Adjacency List : "<<endl;
    for(int i=1 ; i<=n ; i++)
    {
        cout<<i<<"--";
        for(int j=0 ; j<G[i].size() ; j++)
        {
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }*/
    //cout<<s<<endl;
    if(dfs(s,-1))
        printf("NO\n");
    else
        printf("YES\n");
    /*for(int i=1 ; i<=n ; i++)
    {
        if(visited[i]==0)
        {
            dfs(i);
            for(int i=1 ; i<=n ; i++)
            {
                cout<<visited[i]<<" ";
            }
            cout<<endl;
        }

    }*/

    return 0;
}


