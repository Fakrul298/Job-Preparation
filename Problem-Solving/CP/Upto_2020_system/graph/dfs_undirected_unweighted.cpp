#include<bits/stdc++.h>
using namespace std;
int visited[1000];
vector<int>G[10000];
void dfs(int s)
{
    if(visited[s]==1) return ;
    visited[s]=1;
    cout<<s<<" ";
    for(int i=0 ; i<G[s].size() ; i++)
        dfs(G[s][i]);
}
int main()
{
    int n,e;
    cout<<"Enter the number of vertex and edges : ";
    cin>>n>>e;
    G[n+1];
    for(int i=0 ; i<e ; i++)
    {
        int u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    cout<<"Adjacency List : "<<endl;
    for(int i=1 ; i<=n ; i++)
    {
        cout<<i<<"--";
        for(int j=0 ; j<G[i].size() ; j++)
        {
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }
    dfs(1);
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

