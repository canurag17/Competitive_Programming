#include<bits/stdc++.h>
using namespace std;
bool dfs(int u,vector<vector<int>> &g, vector<int>& visited, vector<int> & color)
{
    visited[u]=1;
    for(int i: g[u])
    {
        if(!visited[i])
        {
            color[i]=!color[u];
            if(dfs(i,g,visited,color)==false)
            {
                return false;
            }
        }
        else
        {
            if(color[i]==color[u])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> g(n+1);
        vector<int> visited(n+1,0);
        vector<int> color(n+1,0);
        for(int j=1;j<=m;j++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        bool ans;
        for(int j=1;j<=n;j++)
        {
            ans=dfs(j,g,visited,color);
            if(ans==false)
            break;
        }
        cout<<"Scenario #"<<i<<":\n";
        if(ans==true)
        cout<<"No suspicious bugs found!"<<"\n";
        else
        cout<<"Suspicious bugs found!"<<"\n";
    }
    return 0;
}