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
    ll n,m;
    cin>>n>>m;
    ll k=1;
    ll ctr5=0,ctr2=0,n2=n;
    while(n>0 && n%2==0)
    {
        n/=2;
        ctr2++;
    }
    while(n>0 && n%5==0)
    {
        n/=5;
        ctr5++;
    }
    while(ctr5<ctr2 && k*5<=m)
    {
        ctr5++;
        k*=5;
    }
    while(ctr2<ctr5 && k*2<=m)
    {
        ctr2++;
        k*=2;
    }
    ll ans=1;
    while(k*10<=m)
    {
        k*=10;
    }
    k*=(m/k);
    ans=n2*k;
    if(k==1)
    {
        ans=n2*m;
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