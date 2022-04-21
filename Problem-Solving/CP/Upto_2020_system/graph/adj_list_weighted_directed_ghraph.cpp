#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
typedef vector<pii>adj;

adj wadj[100];
void addEdge(int u,int v,int w)
{
    wadj[u].push_back(make_pair(v,w));
}
void DisplayGraphConnectivity(int v)
{
    cout<<endl<<"Displaying graph connectivity : "<<endl;
    int s;
    for(int i=0 ; i<=v ; i++)
    {
        s=wadj[i].size();
        cout<<i<<"->";
        for(int j=0 ; j<s ; j++)
        {
            cout<<wadj[i][j].first<<"("<<wadj[i][j].second<<") ";
        }
        cout<<endl;
    }
}
int main()
{
     int vertex,edge;
    cout<<"Enter number of vertex and edges : ";
    cin>>vertex>>edge;
    cout<<endl<<"Enter the edges of the graph with weight  : "<<endl;
    for(int i=0 ; i<edge ; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        addEdge(u,v,w);
    }
    DisplayGraphConnectivity(vertex);
}

