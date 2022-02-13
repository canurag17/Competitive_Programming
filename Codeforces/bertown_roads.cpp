#include<bits/stdc++.h>
using namespace std;
#define M 100000
int vis[M+1];
int in[M+1],low[M+1];
int timer=0;
bool brid=false;
vector<pair<int,int>> edge;
void dfs(int u,int par,vector<int> adj[])
{
    vis[u]=1;
    in[u]=low[u]=timer++;
    for(int child : adj[u])
    {
        if(child==par) continue;
        if(vis[child])
        {
            low[u]=min(low[u],in[child]);
            if(in[u]>in[child])
            {
                edge.push_back({u,child});
            }
        }
        else
        {
            dfs(child,u,adj);
            if(low[child]>in[u])
            {
                brid=true;
                return;
            }
            edge.push_back({u,child});
            low[u]=min(low[u],low[child]);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,-1,adj);
    if(brid==true)
    cout<<0<<"\n";
    else
    {
        for(auto it: edge)
        {
            cout<<it.first<<" "<<it.second<<"\n";
        }
    }
    return 0;
}