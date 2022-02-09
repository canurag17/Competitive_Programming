#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000001];
int vis[1000001],cc[1000001];
int c;
void dfs(int u)
{
    vis[u]=1;
    cc[u]=c;
    for(int i: adj[u])
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        c=0;
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
        bool d=true;
        for(int i=1;i<=n;i++)
        {
            c++;
            dfs(i);

        }
        for(auto it: v)
        {
            int a=it.first;
            int b=it.second;
            if(cc[a]==cc[b])
            {
                d=false;
                break;
            }
        }
        if(!d)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
    }
    return 0;
}