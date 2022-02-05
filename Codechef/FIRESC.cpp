#include <bits/stdc++.h>
using namespace std;
int ctr=0;
const unsigned int M = 1000000007;
void dfs(int u,int vis[],vector<int> adj[])
{
    vis[u]=1;
    ctr++;
    for(int i:adj[u])
    {
        if(!vis[i])
        {
            dfs(i,vis,adj);
        }
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<int> adj[n+1];
        for(int i=0;i<=n;i++)
        adj[i].clear();
	    for(int i=1;i<=m;i++)
	    {
	        int x,y;
	        cin>>x>>y;
	        adj[x].push_back(y);
	        adj[y].push_back(x);
	    }
	    long long int x=0,c=1;
	    int vis[n+1]={0};
	    for(int i=1;i<=n;i++)
	    {
	        ctr=0;
	        if(!vis[i])
	        {
	            x++;
	            dfs(i,vis,adj);
	            c=(c*ctr)%M;
	        }
	    }
	    cout<<x<<" "<<c<<"\n";
	}
	return 0;
}