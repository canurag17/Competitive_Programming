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
ll bin_search(ll l,ll h,ll k)
{
    ll mid=l+(h-l)/2;
    while(l<=h)
    {
        mid=l+(h-l)/2;
        if(mid%k==0)
        {
            return mid;
        }
        else if(mid-l<l)
        {
            h=mid-1;
        }
        else if(mid-l<l)
        {
            l=mid+1;
        }

    }
    return mid;
}
void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll m1=c*d;
    ll m2=a*b;
    vector<pll> af,bf;
    if(m1%m2==0)
    {
        cout<<c<<" "<<d<<"\n";
        return;
    }
    for(int i=1;i*i<=a;i++)
    {
        if(a%i==0)
        {
            af.pb({i,a/i});
            af.pb({a/i,i});
        }
    }
    for(int i=1;i*i<=b;i++)
    {
        if(b%i==0)
        {
            bf.pb({i,b/i});
            bf.pb({b/i,i});
        }
    }
    ll x,y;
    for(auto it: af)
    {
        for(auto it2: bf)
        {
            ll a1=it.first,a2=it.second;
            ll b1=it2.first,b2=it2.second;
            x=a1*b1,y=a2*b2;
            ll k1=a/x+1,k2=b/y+1;
            if((k1*x<=c && k2*y<=d))
            {
                cout<<k1*x<<" "<<k2*y<<"\n";
                return;
            }
        }
    }
    cout<<-1<<" "<<-1<<"\n";
    
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