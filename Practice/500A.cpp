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
int vis[30001]={0};
vector<int> adj[30001];
int dfs(int u,int to)
{
    vis[u]=1;
    if(u==to)
    return 1;
    for(int it: adj[u])
    {
        if(vis[it]==0)
        {
            if(dfs(it,to)==1)
            return 1;
        }
    }
    return 0;
}
void solve()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    int a[n];
    for(int i=1;i<n;i++)
    cin>>a[i];
    forab(i,1,n-1)
    {
        adj[i].push_back(i+a[i]);
    }
    if(dfs(1,t))
    YES;
    else
    NO;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // while(t--)
    // {
        solve();

    // }

    return 0;
}