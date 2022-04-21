#include<bits/stdc++.h>
using namespace std;
int visited[1000];
vector<int>G[10000];
void bfs(int s)
{
    visited[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        cout<<u<<" ";
        q.pop();
        for(int i=0 ; i<G[u].size() ; i++)
        {
            int v=G[u][i];
            if(visited[v]==0)
            {
                q.push(v);
                visited[v]=1;
            }
        }
    }
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
    bfs(1);

    return 0;
}
