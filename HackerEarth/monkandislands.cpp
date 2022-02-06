#include<bits/stdc++.h>
using namespace std;
int bfs(int u,int vis[],vector<int> adj[],int dist[],int n)
{
    queue<int> q;
    vis[u]=1;
    q.push(u);
    dist[u]=0;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(int child: adj[v])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=1;
                dist[child]=dist[v]+1;
            }
        }

    }
    return dist[n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> adj[n+1];
        int visited[n+1]={0};
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int dist[n+1]={0};
        int x=bfs(1,visited,adj,dist,n);
        cout<<x<<"\n";
    }
    return 0;
}