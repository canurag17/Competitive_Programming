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
ll getmax(ll a[], int i)
{
    return max(0ll,max(a[i+1],a[i-1])-a[i]+1);
}
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    forn(i,n)
    cin>>a[i];
    ll x=(n+1)/2-1;
    ll cost=0;
    if(n%2)
    {
        forn(i,n-1)
        {
            if(i%2)
            {
                if(max(a[i+1],a[i-1])>=a[i])
                {
                    cost+=(max(a[i+1],a[i-1])-a[i]+1);
                }
            }
        }
        cout<<cost<<"\n";
    }
    else
    {
        ll mn;
        for(int i=1;i<n-1;i+=2)
        { 
            if(max(a[i+1],a[i-1])>=a[i])
            {
                cost+=getmax(a,i);
            }
        }
        ll ans=cost;
        for(int i=n-2;i>=1;i-=2)
        { 
            cost-=getmax(a,i-1);
            cost+=getmax(a,i);
            ans=min(ans,cost);
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