#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define vii vector<vector<int>>
#define vll vector<vector<ll>>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define forn(i,n) for(int i=0;i<n;i++)
#define forab(i,a,b) for(int i=a;i<=b;i++)
#define pqi priority_queue<int>
#define pqd priority_queue<int,vector<int>,greater<int>>
#define NO cout<<"NO"<<"\n"
#define YES cout<<"YES"<<"\n"
#define MOD 1000000007
vector<int> adj[20001];
int vis[20001];
int dis[20001];
int powof2(int x)
{
    return x && !(x&(x-1));
}
void bfs(int u)
{
    vis[u]=1;
    dis[u]=0;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(int it: adj[v])
        {
            if(!vis[it])
            {
                vis[it]=1;
                dis[it]=dis[v]+1;
                q.push(it);
            }

        }
    }
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    if(m<n)
    {
        cout<<n-m<<"\n";
        return;
    }
    forab(i,1,10000)
    {
        if(i!=1)
        {
            adj[i].pb(i-1);
        }
        adj[i].pb(i*2);
    }
    bfs(n);
    cout<<dis[m]<<"\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    // {
    solve();

    // }
    return 0;
}