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
#define forab(i,a,b) for(ll i=a;i<=b;i++)
#define revs(n) for(int i=n-1;i>=0;i--)
#define pql priority_queue<ll>
#define pqd priority_queue<ll,vector<ll>,greater<ll>>
#define NO cout<<"NO"<<"\n"
#define YES cout<<"YES"<<"\n"
#define read(a) cin>>a
#define wrt(a) cout<<a<<"\n"
#define wrts(a) cout<<a<<" "
#define MOD 1000000007
ll bs_sqrt(ll x) {
  ll left = 0, right = 2000000123;
  while (right > left) {
      ll mid = (left + right) / 2;
      
      if (mid * mid > x) right = mid;
      else left = mid + 1;
  }
  return left - 1;
}
void solve()
{
    ll l,r;
    cin>>l>>r;
    ll x=bs_sqrt(l);
    ll y=bs_sqrt(r);
    ll num=y-x;
    ll z=y*y;
    //ll k=x*x;
    //ll x*(x+1)=k+x;
    //ll x*(x+2)=k+2*x;
    ll ans=0;
    if(num==0)
    {
        if(x*x>=l && x*x<=r)
        {
            ans++;
        }
        if(x*(x+1)>=l && x*(x+1)<=r)
        {
            ans++;
        }
        if(x*(x+2)>=l && x*(x+2)<=r)
        {
            ans++;
        }
        cout<<ans<<"\n";
        return;
    }
    ans=(num-1)*3;
    if(x*x>=l && x*x<=r)
    {
        ans++;
    }
    if(x*(x+1)>=l && x*(x+1)<=r)
    {
        ans++;
    }
    if(x*(x+2)>=l && x*(x+2)<=r)
    {
        ans++;
    }
    if(z>=l && z<=r)
    {
        ans++;
    }
    if(z+y>=l && z+y<=r)
    {
        ans++;
    }
    if(z+2*y>=l && z+2*y<=r)
    {
        ans++;
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

