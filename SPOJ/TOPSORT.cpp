#include<bits/stdc++.h>
using namespace std;
vector<int> res;
vector<int> adj[10001];
int indeg[10001];
bool kahn(int n)
{
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=1;i<=n;i++)
    {
        if(indeg[i]==0)
        pq.push(i);
    }
    while(!pq.empty())
    {
        int u=pq.top();
        res.push_back(u);
        pq.pop();
        for(int child : adj[u])
        {
            indeg[child]--;
            if(indeg[child]==0)
            {
                pq.push(child);
            }
        }
    }
    return res.size()==n;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        indeg[y]++;
    }
    if(!kahn(n))
    cout<<"Sandro fails.";
    else
    {
        for(int i: res)
        cout<<i<<" ";
    }
    return 0;
}