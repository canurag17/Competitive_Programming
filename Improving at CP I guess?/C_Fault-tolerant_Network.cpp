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
void solve()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    forn(i,n)
    {
        cin>>a[i];
    }
    forn(i,n)
    {
        cin>>b[i];
    }
    vector<ll> v;
    ll ans[7];
    ll it=0;
    ans[it++]=abs(a[n-1]-b[n-1])+abs(a[0]-b[0]);
    ans[it++]=abs(a[n-1]-b[0])+abs(a[0]-b[n-1]);
    ll diff1=INT_MAX;
    ll diff2=INT_MAX;
    forn(i,n)
    {
        ll x=abs(a[n-1]-b[i]);
        ll y=abs(b[n-1]-a[i]);
        if(x<diff1)
        {
            diff1=x;
        }
        if(y<diff2)
        {
            diff2=y;
        }
    }
    ans[it++]=abs(a[0]-b[0])+diff1+diff2;
    diff1=INT_MAX;
    diff2=INT_MAX;
    forn(i,n)
    {
        ll x=abs(a[0]-b[i]);
        ll y=abs(b[0]-a[i]);
        if(x<diff1)
        {
            diff1=x;
        }
        if(y<diff2)
        {
            diff2=y;
        }
    }
    ans[it++]=abs(a[n-1]-b[n-1])+diff1+diff2;
    diff1=INT_MAX;
    diff2=INT_MAX;
    forn(i,n)
    {
        ll x=abs(a[0]-b[i]);
        ll y=abs(b[n-1]-a[i]);
        if(x<diff1)
        {
            diff1=x;
        }
        if(y<diff2)
        {
            diff2=y;
        }
    }
    ans[it++]=abs(a[n-1]-b[0])+diff1+diff2;
    diff1=INT_MAX;
    diff2=INT_MAX;
    forn(i,n)
    {
        ll x=abs(a[n-1]-b[i]);
        ll y=abs(b[0]-a[i]);
        if(x<diff1)
        {
            diff1=x;
        }
        if(y<diff2)
        {
            diff2=y;
        }
    }
    ans[it++]=abs(a[0]-b[n-1])+diff1+diff2;
    ll fin=0;
    diff1=INT_MAX;
    forn(i,n)
    {
        diff1=min(diff1,abs(a[0]-b[i]));
    }
    fin+=diff1;
    diff1=INT_MAX;
    forn(i,n)
    {
        diff1=min(diff1,abs(a[i]-b[0]));
    }
    fin+=diff1;
    diff1=INT_MAX;
    forn(i,n)
    {
        diff1=min(diff1,abs(a[n-1]-b[i]));
    }
    fin+=diff1;
    diff1=INT_MAX;
    forn(i,n)
    {
        diff1=min(diff1,abs(a[i]-b[n-1]));
    }
    fin+=diff1;
    ans[it++]=fin;
    cout<<*min_element(ans,ans+7)<<"\n";
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