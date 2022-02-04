#include<bits/stdc++.h>
using namespace std;
class Graph
{
    private:
        int V;
        vector<int>* adj;
    public:
        Graph();
        Graph(int V);
        void addEdge(int u,int v);
        void DFS(int u,int* visited);
        void BFS(int u,int* visited);
};
Graph :: Graph()
{
    V=0;
    adj=NULL;
}
Graph :: Graph(int V)
{
    this->V=V;
    adj=new vector<int>[V+1];
}
void Graph :: addEdge(int u,int v)
{
    adj[u].push_back(v);
}
void Graph :: DFS(int u,int* visited)
{
    visited[u]=1;
    vector<int> :: iterator it;
    for(it=adj[u].begin();it!=adj[u].end();it++)
    {
        if(visited[*it]!=1)
        DFS(*it,visited);
    }

}
int main()
{
    int n,e,u,v;
    cin>>n>>e;
    Graph g(n);
    int visited[n+1]={0};
    for(int i=1;i<=e;i++)
    {
        cin>>u>>v;
        g.addEdge(u,v);
        g.addEdge(v,u);
    }
    int ctr=0;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            g.DFS(i,visited);
            ctr++;
        }
    }
    cout<<ctr<<"\n";
    return 0;
}