#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10001];
int vis[10001],low[10001],in[10001];
int timer=0;
set<int> ans;
void dfs(int u,int par)
{
    vis[u]=1;
    low[u]=in[u]=timer++;
    int children=0;
    for(int child: adj[u])
    {
        if(child==par) continue;
        if(vis[child])
        {
            low[u]=min(low[u],in[child]);
        }
        else
        {
            dfs(child,u);
            low[u]=min(low[u],low[child]);
            if(low[child]>=in[u] && par!=0)
            {
                ans.insert(u);
            }
            ++children;
        }
    }
    if(par==0 && children>1)
    ans.insert(u);
}
int main()
{
    while(1)
    {
        int n,m;
        ans.clear();
        cin>>n>>m;
        if(n==0 && m==0)
            break;
        for(int i=1;i<=n;i++)
        vis[i]=0, adj[i].clear(),low[i]=0,in[i]=0;
        for(int i=1;i<=m;i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for(int i=1;i<=n;i++)
        if(!vis[i]) dfs(i,0);
        cout<<ans.size()<<"\n";
    }
    return 0;
}