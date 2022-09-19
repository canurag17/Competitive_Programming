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
vector<int> adj[100001];
int vis[100001];
int level[100001];
int nlevels[100001];
void bfs(int u, int l)
{
    vis[u]=1;
    level[u]=1;
    nlevels[1]=1;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(int it: adj[node])
        {
            if(!vis[it])
            {
                level[it]=level[node]+1;
                nlevels[level[it]]++;
                vis[it]=1;
                q.push(it);
            }
        }
    }
}
void solve(int i)
{
    int n,q;
    cin>>n>>q;
    int e=n-1;
    forn(j,e)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    bfs(1,1);
    int ans=0;
    int j=1;
    while(j<=q)
    {
        int x;
        cin>>x;
        j++;
    }
    int t=q;
    for(int k=1;k<=n;k++)
    {
        //cout<<nlevels[i]<<" ";
        if(nlevels[k]==0)
            break;
        if(t>=nlevels[k])
        {
            ans+=(nlevels[k]);
            t-=nlevels[k];
        }
        else
            break;
    }
    
    cout << "Case #" << i << ": "<<ans;
    cout<<"\n";
    for(int k=0;k<=100000;k++)
    {
        vis[k]=0;
        level[k]=0;
        nlevels[k]=0;
        adj[k].clear();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int i=1;
    while(i<=t)
    {
        solve(i);
        ++i;
    }
    return 0;
}