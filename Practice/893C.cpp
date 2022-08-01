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
vector<ll> adj[100005];
ll c[100005]={0};
ll vis[100005]={0};
ll co=LONG_MAX;
void dfs(ll u)
{
    vis[u]=1;
    co=min(c[u], co);
    for(int it: adj[u])
    {
        if(!vis[it])
        {
            dfs(it);
        }
    }
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    forab(i,1,n)
    {
        cin>>c[i];
    }
    forab(i,1,m)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    ll ans=0;
    forab(i,1,n)
    {   
        co=INT_MAX;
        if(!vis[i])
        {
            dfs(i);
            ans+=co;
        }
        
    }
    cout<<ans<<"\n";
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
    // return 0;
}