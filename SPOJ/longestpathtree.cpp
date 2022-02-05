#include<bits/stdc++.h>
using namespace std;
int maxdist=-1,far;
void dfs(int u,int dist,int visited[],vector<int> adj[])
{
    visited[u]=1;
    if(dist>maxdist)
    {
        maxdist=dist;
        far=u;
    }
    for(int it: adj[u])
    {
        if(!visited[it])
        {
            dfs(it,dist+1,visited,adj);
        }
    }
}
int main()
{
    int n;
    vector<int> adj[10001];
    int visited[10001]={0};
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int dist=0;
    dfs(1,dist,visited,adj);
    maxdist=-1;
    for(int i=0;i<=n;i++)
    visited[i]=0;
    dfs(far,dist,visited,adj);
    cout<<maxdist<<"\n";
    return 0;
}