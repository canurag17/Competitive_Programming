#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000001];
int vis[1000001];
bool dfs(int u,int v)
{
    vis[u]=1;
    for(int i: adj[u])
    {
        if(!vis[i])
        {
            if(dfs(i,v)==true)
            return true;
        }
        else
        {
            if(i==v || u==v)
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n;i++) adj[i].clear(), vis[i]=0;
        string op;
        vector<pair<int,int>> v;
        for(int i=1;i<=k;i++)
        {
            int a,b;
            cin>>a>>op>>b;
            if(op=="=") adj[a].push_back(b), adj[b].push_back(a);
            else
            v.push_back({a,b});
        }
        bool d;
        for(auto it: v)
        {
            int a=it.first;
            int b=it.second;
            d=dfs(a,b);
            if(d==false)
            break;
        }
        if(d)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
    }
    return 0;
}