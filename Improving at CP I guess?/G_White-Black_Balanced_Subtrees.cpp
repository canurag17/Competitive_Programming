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
vector<int> adj[4005];
int vis[4005];
vector<int> ans;
pii dfs(int u,string s)
{
    int w=0,b=0;
    vis[u]=1;
    pii p={0,0};
    if(s[u-1]=='W')
        w++;
    else
        b++;
    for(int it: adj[u])
    {
        if(!vis[it])
        {
            p=dfs(it,s);
            w+=p.first;
            b+=p.second;
        }
    }
    if(w==b)
    {
        ans.pb(u);
    }
    return mp(w,b);

}
void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    a[1]=1;
    forab(i,2,n)
    cin>>a[i];
    string s;
    cin>>s;
    forab(i,2,n)
    {
        adj[i].pb(a[i]);
        adj[a[i]].pb(i);
    }
    dfs(1,s);
    cout<<ans.size()<<"\n";
    ans.clear();
    for(int i=0;i<=n;i++)
    {
        adj[i].clear();
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