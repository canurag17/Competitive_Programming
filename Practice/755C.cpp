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
vector<int> adj[10001];
int vis[10001];
void dfs(int u)
{
    vis[u]=1;
    for(int it: adj[u])
    if(!vis[it])
    dfs(it);
}
void solve()
{
    ll n;
    cin>>n;
    ll a;
    int ans=0;
    set<int> s;
    forab(i,1,n)
    {
        cin>>a;
        if(a==i)
        {
            ans++;
        }
        else
        {
            s.insert(a);
        }
    }
    cout<<ans+s.size()/2;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}