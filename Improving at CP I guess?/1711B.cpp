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
#define MAXN 100010
int x[MAXN],y[MAXN],a[MAXN],degree[MAXN];
int n,m;
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll a[MAXN];
    ll d[MAXN]={0};
    forab(i,1,n)
    cin>>a[i];
    //vector<pll> v;
    //map<ll,ll> mt;
    ll x[MAXN]={0},y[MAXN]={0};
    forab(i,1,m)
    {
        
        cin>>x[i]>>y[i];
        d[x[i]]++;
        d[y[i]]++;
    } 
    ll ans=INT_MAX;
    if(!(m%2))
    cout<<0<<"\n";
    else
    {
        forab(i,1,n)
        {
            if(d[i]%2==1)
            {
                ans=min(ans,a[i]);
            }
        }
        forab(i,1,m)
        {
            if(!(d[x[i]]%2) && !(d[y[i]]%2))
            ans=min(ans,a[x[i]]+a[y[i]]);
        }
        cout<<ans<<"\n";
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