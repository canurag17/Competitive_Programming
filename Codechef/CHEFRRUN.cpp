#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100001];
vector<int> tg[100001];
int vis[100001];
vector<int> order;
vector<int> scc;
void dfs(int u)
{
    vis[u]=1;
    for(int i: adj[u])
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    order.push_back(u);
}
void dfs2(int u)
{
    vis[u]=1;
    for(int i : tg[u])
    {
        if(!vis[i])
        {
            dfs2(i);
        }
    }
    scc.push_back(u);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int val[n];
        for(int i=0;i<n;i++)
        adj[i].clear(), tg[i].clear(), vis[i]=0, cin>>val[i];
        order.clear();
        for(int i=0;i<n;i++)
        {
            adj[i].push_back((i+val[i]+1)%n);
            tg[(i+val[i]+1)%n].push_back(i);
        }
        for(int i=0;i<n;i++)
        if(!vis[i]) dfs(i);
        reverse(order.begin(),order.end());
        for(int i=0;i<n;i++) vis[i]=0;
        int res=0;
        for(int i: order)
        {
            
            if(!vis[i])
            {
                scc.clear();
                dfs2(i);
                if(scc.size()==1 && scc[0]!=adj[scc[0]][0]) continue;
                res+=scc.size();
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}