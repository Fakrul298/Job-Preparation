#include<bits/stdc++.h>
using namespace std;
int vis[1000];
   vector<int>adj[100];
int bfs(int n,int s)
{
    queue<int>q;
    q.push(s);
    vis[s]=1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        //cout<<u<<"\t";
        for(int i=0 ; i<adj[u].size() ; i++)
        {
            if(vis[adj[u][i]]==0)
            {
                int v=adj[u][i];
                vis[v]=1;
                q.push(v);
            }
        }
    }
    cout<<endl;
    for(int i=1 ; i<10 ; i++)
    {
        cout<<vis[i]<<" ";
    }
    cout<<endl;

    return 0;
}

void addEdge(int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void display(int n)
{
     for(int i=1 ; i<=n ; i++)
    {
        cout<<i<<"  ->  ";
        for(int j=0 ; j<adj[i].size() ; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of edges : ";
    cin>>n;

    for(int i=0 ; i<n ; i++)
    {
        int u,v;
        cin>>u>>v;
        addEdge(u,v);
    }
    cout<<"Connectivity of the graph : "<<endl;
    display(n);
    int s;
    cout<<"Staring point : ";
    cin>>s;
    bfs(n,s);

    return 0;
}
