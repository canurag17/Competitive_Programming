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
#define pqd priority_queue<pll,vector<pll>,greater<pll>>
#define NO cout<<"NO"<<"\n"
#define YES cout<<"YES"<<"\n"
#define read(a) cin>>a
#define wrt(a) cout<<a<<"\n"
#define wrts(a) cout<<a<<" "
#define MOD 1000000007
int find(int a,int par[])
{
    if(par[a]==a)
    {
        return a;
    }
    return par[a]=find(par[a],par);
}
void join(int a, int b, int rank[],int par[])
{
    a=find(a,par);
    b=find(b,par);
    if(par[a]==par[b])
    {
        return;
    }
    if(rank[b]<rank[a])
    {
        swap(a,b);
    }
    rank[b]+=rank[a];
    par[a]=b;
    
}
void solve()
{
    ll n;
    cin>>n;
    int a[n],b[n],d[n];
    int par[n+1],rank[n+1];
    forab(i,1,n)
    {
        rank[i]=1;
        par[i]=i;
    }
    forn(i,n)
    {
        cin>>a[i];
    }
    forn(i,n)
    {
        cin>>b[i];
    }
    forn(i,n)
    {
        cin>>d[i];
        if(d[i]==0 && (a[i]==b[i]))
        {
            d[i]=a[i];
        }
    }
    forn(i,n)
    {
        join(a[i],b[i],rank,par);
    }
    set<int> s;
    forab(i,1,n)
    {
        s.insert(find(i,par));
    }
    forn(i,n)
    {
        if(d[i])
        {
            s.erase(find(d[i],par));
        }
    }
    ll ans=1;
    forab(i,1,s.size())
    {
        ans=(ans*2)%MOD;
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