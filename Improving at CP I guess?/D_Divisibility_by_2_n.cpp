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
ll power(ll n)
{
    ll x=0;
    while(n>1)
    {
        n>>=1;
        x++;
    }
    return x;
}
void solve()
{
    int n;
    cin>>n;
    ll a[n+1];
    //ll p=1;
    //int indp=1;
    ll z=1<<30;
    ll x=0;
    ll ans=0;
    forab(i,1,n)
    {
        cin>>a[i];
        ll y=__gcd(a[i],z);
        ll k=power(y);
        x+=k;
        //cout<<x<<" ";
    }
    if(x>=n)
    {
        cout<<0<<"\n";
        return;
    }
    priority_queue<ll> pq;
    for(ll i=n;i>=1;i--)
    {
        ll y=__gcd(i,z);
        ll k=power(y);
        if(k>0)
        pq.push(k);
    }
    while(!pq.empty() && x<n)
    {
        ll f=pq.top();
        pq.pop();
        x+=f;
        ans++;
    }
    if(x<n)
    cout<<-1<<"\n";
    else
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