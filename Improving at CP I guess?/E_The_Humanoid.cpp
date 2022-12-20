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
ll calc(ll a[],ll i, ll h, ll g, ll b,ll n)
{
    if(i==n) return 0;
    if(a[i]<h) return calc(a,i+1,h+a[i]/2,g,b,n)+1;
    ll ans1=(g>0)?(calc(a,i,h*2,g-1,b,n)): 0;
    ll ans2=(b>0)?(calc(a,i,h*3,g,b-1,n)): 0;
    return max(ans1,ans2);
}
void solve()
{
    ll n,h;
    cin>>n>>h;
    ll a[n];
    forn(i,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int j=0;
    ll g=2,b=1;
    ll ans=0;
    cout<<calc(a,0,h,g,b,n)<<"\n";
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