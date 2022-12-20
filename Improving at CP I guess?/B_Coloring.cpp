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
void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[m];
    forn(i,m)
    {
        cin>>a[i];
    }
    if(k==1)
    {
        YES;
        return;
    }
    if(k>m)
    {
        NO;
        return;
    }
    ll mx=n/k+1;
    ll r=n%k;
    forn(i,m)
    {
        if(mx<a[i])
        {
            NO;
            return;
        }
        else if(mx==a[i])
        {
            r--;
        }
        if(r<0)
        {
            NO;
            return;
        }
    }
    YES;
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