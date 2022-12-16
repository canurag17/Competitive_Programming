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
    ll x[3],y[3];
    cin>>x[0]>>y[0];
    cin>>x[1]>>y[1];
    cin>>x[2]>>y[2];
    ll m1=y[1]-y[0];
    ll d1=x[1]-x[0];
    ll m2=y[2]-y[1];
    ll d2=x[2]-x[1];
    ll m3=y[2]-y[0];
    ll d3=x[2]-x[0];
    if((m1==0 && (d2==0 || d3==0)) || (m2==0 && (d1==0 || d3==0)) || (m3==0 &&( d1==0 || d2==0)))
    {
        NO;
        return;
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