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
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    ll a[n+1]={0};
    forab(i,1,m)
    {
        ll x,y;
        cin>>x>>y;
        a[max(x,y)]=max(a[max(x,y)],min(x,y));
    }
    int i=1,j=1;
    while(j<=n)
    {
        while(i<=n && a[i]<j)
            i++;
        ans+=i-j;
        j++;
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