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
vector<int> adj[1001];
int vis[1001];
int dfsvis[1001];
int dfs(int u)
{
    vis[u]=1;
    dfsvis[u]=1;
    for(int it: adj[u])
    {
        if(!vis[it])
        {
            return dfs(it);
        }
        else
        {
            if(dfsvis[it])
            {
                return it;
            }
        }
    }
    dfsvis[u]=0;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int p[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
        adj[i].push_back(p[i]);
    }
    forab(i,1,n)
    {
        cout<<dfs(i)<<" ";
        memset(dfsvis,0,sizeof(dfsvis));
        memset(vis,0,sizeof(vis));
    }    
    return 0;
}