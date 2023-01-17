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
    ll l[n],r[n],c[n];
    forn(i,n)
    {
        cin>>l[i]>>r[i]>>c[i];
    }
    //cout<<c[0]<<"\n";
    ll inf=1e9+1;
    ll low=inf,high=0;
    ll cr=inf,cl=inf,lc=inf;
    ll mx=0;
    forab(i,0,n-1)
    {
        if(l[i]<low)
        {
            low=l[i],cl=inf;
        }
        if(l[i]==low)
        {
            cl=min(cl,c[i]);
        }
        if(r[i]>high)
        {
            high=r[i],cr=inf;
        }
        if(r[i]==high)
        {
            cr=min(cr,c[i]);
        }
        if(mx<r[i]-l[i]+1)
        {
            mx=r[i]-l[i]+1,lc=inf;
        }
        if(mx==r[i]-l[i]+1)
        {
            lc=min(lc,c[i]);
        }
        ll ans=cl+cr;
        if(mx==high-low+1)
        {
            ans=min(ans,lc);
        }
        cout<<ans<<"\n";
    }
    
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