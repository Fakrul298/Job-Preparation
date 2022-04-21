#include<bits/stdc++.h>
using namespace std;
int vis[100010];
vector<int>G[100010];
void dfs(int s)
{
    if(vis[s]==0)
    {
        stack<int>st;
        st.push(s);
        vis[s]=1;

        while(!st.empty())
        {
            int u=st.top();
            st.pop();
            cout<<u<<" ";
            int l=G[u].size();
            for(int i=0 ; i<l ; i++)
            {
                int v=G[u][i];
                if(vis[v]==0)
                {
                    vis[v]=1;
                    st.push(v);
                }
            }
        }
    }


}
int main()
{
    int n,e;
    cin>>n>>e;
    G[n+1];
    for(int i=0 ; i<e ; i++)
    {
        int u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dfs(1);
    return 0;
}
