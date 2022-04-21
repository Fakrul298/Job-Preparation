#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
int vis[1000],p[1000];
void addEdge(int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void displayGraphConnectivity(int n)
{
    cout<<"Connectivity of the Graph : "<<endl;
    for(int i=1 ; i<=n ; i++)
    {
        cout<<i<<"->";
        for(int j=0 ; j<adj[i].size() ; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void bfs(int n,int s)
{
    queue<int>q;
    vis[s]=1;
    p[s]=s;
    q.push(s);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        int l=adj[u].size();
        for(int i=0 ; i<l; i++)
        {
            int v = adj[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                p[v]=u;
                q.push(v);
            }
        }
    }
    cout<<endl;
}
void displayVisArray(int n)
{
    cout<<"Dis array : "<<endl;
    for(int i=1 ; i<=n ; i++)
    {
        cout<<vis[i]<<" ";
    }
    cout<<endl;
}
void displayPArray(int n)
{
    cout<<"p array : "<<endl;
    for(int i=1 ; i<=n ; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
void displayPathOfGivenNodes(int s,int t)
{
    vector<int>path;
    path.push_back(t);
    int now = t;
    while(now!=s)
    {
        now=p[now];
        path.push_back(now);
    }
    reverse(path.begin(),path.end());
    cout<<"Shortest Path of "<<t<<" from "<<s<<" is : ";
    for(int i=0 ; i<path.size() ; i++)
        cout<<path[i]<<" ";
}
int main()
{
    int n,s,t;

    cout<<"Enter the number of edges : ";
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        int s,e;
        cin>>s>>e;
        addEdge(s,e);
    }

    displayGraphConnectivity(n);

    cout<<"Enter the node from where you want to start : ";
    cin>>s;
    bfs(n,s);

    displayVisArray(n);
    displayPArray(n);

    cout<<endl<<"Enter the destination of node's path you want to find : ";
    cin>>t;
    cout<<endl;
    displayPathOfGivenNodes(s,t);
    return 0;
}
