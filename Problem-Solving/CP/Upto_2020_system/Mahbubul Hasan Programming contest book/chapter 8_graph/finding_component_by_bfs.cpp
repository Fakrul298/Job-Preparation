#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
int vis[1000];
void addEdge(int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void display(int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        cout<<i<<"->";
        for(int j=0 ; j<adj[i].size() ; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
void bfs(int n,int s)
{
    queue<int>Q;
    Q.push(s);
    vis[s]=1;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        for(int i=0 ; i<adj[u].size() ; i++)
        {
            int v=adj[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                Q.push(v);
            }
        }
    }

}
void seeVisArray(int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        cout<<i<<"->"<<vis[i]<<endl;
    }
}
int main()
{
    int n,s,i,comp=0;
    cout<<"Enter number of edges : ";
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        int start,finish;
        cin>>start>>finish;
        addEdge(start,finish);
    }

    cout<<endl<<"The adjacency list is : "<<endl;
    display(n);

    for(i=1 ; i<=n ; i++)
    {
        if(vis[i]==0)
        {
            comp++;
            bfs(n,i);
        }
    }

    cout<<"component of the graph : "<<comp<<endl;

    seeVisArray(n);
    return 0;
}
