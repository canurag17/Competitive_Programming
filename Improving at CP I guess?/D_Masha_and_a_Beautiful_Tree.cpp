#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define vl vector<ll>
#define vii vector<vector<ll>>
#define vll vector<vector<ll>>
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define all(v) v.begin(),v.end()
#define sz(v) (ll)(v.size())
#define forn(i,n) for(ll i=0;i<n;i++)
#define forab(i,a,b) for(ll i=a;i<=b;i++)
#define pqi priority_queue<ll>
#define pqd priority_queue<ll,vector<ll>,greater<ll>>
#define NO cout<<"NO"<<"\n"
#define YES cout<<"YES"<<"\n"
#define MOD 1000000007
void solve()
{
    ll m;
    cin>>m;
    ll p[m+1];
    forab(i,1,m)
    {
        cin>>p[i];
    }
    ll y=m/2;
    ll i=1;
    ll ans=0;
    ll k=m;
    ll x;
    while(y)
    {
        x=abs(p[i]-p[i+y]);
        if(x>(k-1))
        {
            cout<<-1<<"\n";
            return;
        }
        if(p[i]>p[i+y])
        {
            ans++;
        }
        i+=k;
        if(i>m)
        {
            i=1;
            k=y;
            y/=2;
        }
    }
    cout<<ans<<"\n";


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}