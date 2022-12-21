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
#define revs(n) for(int i=n-1;i>=0;i--)
#define pql priority_queue<ll>
#define pqd priority_queue<ll,vector<ll>,greater<ll>>
#define NO cout<<"NO"<<"\n"
#define YES cout<<"YES"<<"\n"
#define read(a) cin>>a
#define wrt(a) cout<<a<<"\n"
#define wrts(a) cout<<a<<" "
#define MOD 1000000007


void dfs(ll u, vector<ll> adj[],int vis[],set<ll> ans[101])
{
    vis[u] = 1;
    for(ll it : adj[u])
    {
        if(!vis[it])
            dfs(it,adj,vis,ans);
        for(ll it2 : ans[it])
            ans[u].insert(it2);
    }
    
    ans[u].insert(u+1);
    

}
void solve()
{
    ll n;
    cin>>n;
    vector<ll> adj[n+1];
    int vis[101]={0};
    set<ll> ans[101];
    forn(i,n)
    {
        string s;
        cin>>s;
        forn(j,n)
        {
            if(s[j]=='1')
            {
                adj[j].pb(i);
            }
        }
    }
    forn(i,n)
    {
        dfs(i,adj,vis,ans);
    }
    forn(i,n)
    {
        cout<<ans[i].size()<<" ";
        for(auto it: ans[i])
        {
            cout<<it<<" ";
        }
        cout<<"\n";
        ans[i].clear();
        vis[i]=0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}