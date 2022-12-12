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
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    forn(i,n)
    cin>>a[i];
    sort(a,a+n);
    ll mx=a[n-1];
    ll m=0;
    ll mn=a[0];
    ll x=0;
    forn(i,n)
    {
        if(a[i]==mn)
        x++;
        else if(a[i]==mx)
        m++;
    }
    ll ans;
    if(mx!=mn)
    {
        ans=x*m*2;
        cout<<ans<<"\n";
    }
    else
    {
        ans=n*(n-1);
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