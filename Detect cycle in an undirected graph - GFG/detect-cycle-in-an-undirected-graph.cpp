// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int u, int par,int v[],vector<int> adj[])
    {
        v[u]=1;
        for(int link: adj[u])
        {
            if(!v[link])
            {
                if(dfs(link,u,v,adj)==true)
                return true;
            }
            else
            {
                if(link!=par)
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[])
    {
        int visited[V]={0};
        bool ans;
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                ans=dfs(i,-1,visited,adj);
                if(ans==true)
                return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends