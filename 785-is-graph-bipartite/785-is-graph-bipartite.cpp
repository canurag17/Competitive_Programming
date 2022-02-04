class Solution {
public:
    bool DFS(int u,vector<vector<int>>& graph,vector<int> & visited,vector<int> & color)
    {
        visited[u]=1;
        for(int it: graph[u])
        {
            if(!visited[it])
            {
                color[it]= !(color[u]);
                if(DFS(it,graph,visited,color)==false)
                    return false;
            }
            else
                if(color[it]==color[u])
                    return false;
            
        }
        return true;
        
    }
    bool isBipartite(vector<vector<int>>& graph)
    {
        vector<int> visited(graph.size(),0);
        vector<int> color(graph.size(),0);
        bool ans;
        for(int i=0;i<graph.size();i++)
        {
            if(!visited[i])
            ans=DFS(i,graph,visited,color);
            if(ans==false)
                return false;
        }
        return ans;
    }
};