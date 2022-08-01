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
map<ll,set<ll>> adj;
set<ll> a,b;
int col[100001];
int vis[100001];
void dfs(int u, int c)
{
    vis[u]=1;
    col[u]=c;
    if(c==0)
    a.insert(u);
    else
    b.insert(u);
    for(int it: adj[u])
    {
        if(!vis[it])
        {
            dfs(it,c^1);
        }
    }
}
void solve()
{
    ll n;
    cin>>n;
    ll u,v;
    ll x=0,y=0;
    forn(i,n-1)
    {
        cin>>u>>v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    dfs(1,0);
    ll ans=0;
    for(auto it: a)
    {
        ans+=b.size()-adj[it].size();
    }
    cout<<ans<<"\n";

    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}