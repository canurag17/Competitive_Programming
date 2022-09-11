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
void dfs(int u,vector<int> adj[],int vis[])
{
    vis[u]=1;
    for(int it: adj[u])
    {
        if(!vis[it])
        {
            dfs(it,adj,vis);
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int depth=0;
    int rundepth=0;
    int ans=n;
    forn(i,2*n)
    {
        if(s[i]=='(')
        {
            depth++;
            if(rundepth>=depth)
            {
                ans--;
            }
            rundepth=depth;
        }
        else
        {
            depth--;
        }
    }
    cout<<ans<<"\n";
    
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