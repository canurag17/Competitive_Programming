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
set<ll> s;
void pow()
{
    ll i=1;
    set<ll> s2; 
    while(i<=10000000000)
    {
        s.insert(i);
        s2.insert(i);
        i*=2;
    }
    for(auto it: s2)
    {
        cout<<it<<" ";
    }
    cout<<s2.size()<<"\n";
    exit(0);
}
void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    forab(i,1,n)
    {
        cin>>a[i];
    }
    vector<pll> ans;
    forab(i,1,n)
    {
        ll x=*(s.lower_bound(a[i]));
        if((x-a[i])!=0)
        {
            ans.pb({i,x-a[i]});
        }
    }
    cout<<ans.size()<<"\n";
    for(auto it: ans)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
    

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    pow();
    cout<<s.size();
    while(t--)
    {
        solve();

    }
    return 0;
}