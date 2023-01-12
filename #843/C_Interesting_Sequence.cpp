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
ll msbpos(ll n)
{
    ll ans=-1;
    while(n)
    {
        n=n>>1;
        ans++;
    }
    return ans;
}
ll band(ll l, ll r)
{
    ll ans=0;
    while(l && r)
    {
        ll a=msbpos(l);
        ll b=msbpos(r);
        if(a!=b)
        {
            return ans;
        }
        ll val=1ll<<a;
        ans+=val;
        l-=val;
        r-=val;
    }
    return ans;
}
void solve()
{
    ll n,x;
    cin>>n>>x;
    ll ans=-1;
    if(n==x)
    {
        cout<<n<<"\n";
        return;
    }
    if(x>n)
    {
        cout<<-1<<"\n";
        return;
    }
    ll left=n,right=5e18;
    ll mid=left+(right-left)/2;
    while(left<=right)
    {
        mid=(left+right)/2;
        ll val=band(n,mid);
        if(val<=x)
        {
            if(val==x)
            ans=mid;
            right=mid-1;
        }
        else if(val>x)
        {
            left=mid+1;
        }

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