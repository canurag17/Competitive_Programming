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
#define pqd priority_queue<pll,vector<pll>,greater<ll>> 
//<distance, vertice> in a min heap
#define NO cout<<"NO"<<"\n"
#define YES cout<<"YES"<<"\n"
#define read(a) cin>>a
#define wrt(a) cout<<a<<"\n"
#define wrts(a) cout<<a<<" "
#define MOD 1000000007
#define INF 10e8

void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<pll> adj[100001];
    vector<ll> dist(n+1,INF);
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    forab(i,1,m)
    {
        ll a,b,w;
        cin>>a>>b>>w;
        adj[a].pb({b,w});
        adj[b].pb({a,w});   //remove for directed
    }
    dist[1]=0; //asuming 1 as the source vertex
    pq.push({0,1});
    //initialization done
    while(!pq.empty())
    {
        ll curr=pq.top().second;
        ll curr_d=pq.top().first;
        pq.pop();
        for(pll edge: adj[curr])
        {
            if(curr_d+edge.second<dist[edge.first])
            {
                dist[edge.first]=curr_d+edge.second;
                pq.push({dist[edge.first],edge.first});
            }
        }
    }
    forab(i,1,n)
    {
        cout<<dist[i]<<" ";
    }
    cout<<"\n";


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while(t--)
    {
        solve();

    }
    return 0;
}