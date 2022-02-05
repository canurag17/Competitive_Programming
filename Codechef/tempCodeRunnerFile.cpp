#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;
void dfs(int u,int vis[],vector<int> adj[],int* ctr)
{
    vis[u]=1;
    for(int i:adj[u])
    {
        if(!vis[i])
        {
            (*ctr)++;
            dfs(i,vis,adj,ctr);
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
	    for(int i=1;i<=m;i++)
	    {
	        int x,y;
	        cin>>x>>y;
	        adj[x].push_back(y);
	        adj[y].push_back(x);
	    }
	    int x=0,ctr,c=1;
	    int vis[n+1]={0};
	    for(int i=1;i<=n;i++)
	    {
	        ctr=1;
	        if(!vis[i])
	        {
	            x++;
	            dfs(i,vis,adj,&ctr);
	            c=(c*ctr)%M;
	        }
	    }
	    cout<<x<<" "<<c<<"\n";
	}
	return 0;
}