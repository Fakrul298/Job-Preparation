#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
void addEdge(int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void DisplayGraphConnectivity(int v)
{
    cout<<endl<<"Graph connectivity : "<<endl;
    int l;
    for(int i=0 ; i<=v ; i++)
    {
        l=adj[i].size();
        cout<<i<<" -> ";
        for(int j=0 ; j<l ; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int vertex,edge;
    cout<<"Enter number of vertex and edges : ";
    cin>>vertex>>edge;
    cout<<endl<<"Enter the edges of the graph : "<<endl;
    for(int i=0 ; i<edge ; i++)
    {
        int u,v;
        cin>>u>>v;
        addEdge(u,v);
    }
    DisplayGraphConnectivity(vertex);
}
