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
vector<ll> v;
ll fact(ll n)
{
    ll ans=1;
    forab(i,1,n)
    {
        ans*=i;
    }
    return ans;
}
void solve()
{
    ll n;
    cin>>n;
    ll ans=INT_MAX;
    ll k=15;
    ll y=1<<15;
    forn(i,y)
    {
        ll sum=0;
        ll ctr=0;
        ll p=1;
        forn(j,k)
        {
            ll x=p & i;
            if(x>0)
            {
                sum+=v[j];
                ctr++;
            }
            p=p<<1;
        }
        if(sum>n)
        continue;
        else
        {
            ll rem=n-sum;
            while(rem)
            {
                ctr++;
                rem=(rem)&(rem-1);
            }
            ans=min(ans,ctr);
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    forab(i,1,15)
    {
        v.pb(fact(i));
    }
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}