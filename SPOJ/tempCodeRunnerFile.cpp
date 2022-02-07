#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10001];
int dist[10001],visited[10001];
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
bool isValid(int a,int b)
{
    int cnt=0;
    while(a>0)
    {
        int r1=a%10;
        int r2=b%10;
        if(r1==r2)
        cnt++;
        a=a/10;
        b=b/10;
    }
    if(cnt==3)
    return 1;
    else
    return 0;
}
void bfs(int u)
{
    queue<int> q;
    visited[u]=1;
    q.push(u);
    dist[u]=0;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int it: adj[x])
        {
            if(!visited[it])
            {
                visited[it]=1;
                dist[it]=dist[x]+1;
                q.push(it);
            }
        }
    }
}
void makegraph()
{
    vector<int> primes;
    for(int i=1000;i<=9999;i++)
    {
        if(isPrime(i))
        primes.push_back(i);
    }
    for(int i=0;i<primes.size();i++)
    {
        for(int j=i+1;j<primes.size();j++)
        {
            int a=primes[i];
            int b=primes[j];
            if(isValid(a,b))
            {
                adj[a].push_back(b);
                adj[b].push_back(a);
            }

        }
    }

}
int main()
{
    int t;
    cin>>t;
    makegraph();
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=1000;i<=9999;i++) visited[i]=0, dist[i]=-1;
        bfs(n);
        if(dist[m]==-1)
        cout<<"Impossible"<<"\n";
        else
        cout<<dist[m]<<"\n";
    }
    return 0;
}