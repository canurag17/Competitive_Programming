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
ll power(ll a, ll b)
{
    for(int i=2;i<=b;i++)
    {
        a*=a;
    }
    return a;
}
ll len(ll x)
{
    int l=0;
    while(x>0)
    {
        x/=10;
        l++;
    }
    return l;
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll in=n*m;
    ll t=in;
    ll h=n;
    int x=1;
    ll r;
    ll l=len(n*m);
    while(x<=l)
    {
        ll u=power(10,x);
        r=t%u;
        t/=u;
        t*=u;
        if(t%n==0 && t!=0)
        {
            in=t;
        }
        x++;
        t=n;
    }
    cout<<in<<"\n";
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