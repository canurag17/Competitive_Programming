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
#define NO cout<<-1<<"\n"
#define YES cout<<"YES"<<"\n"
#define read(a) cin>>a
#define wrt(a) cout<<a<<"\n"
#define wrts(a) cout<<a<<" "
#define MOD 1000000007
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll mn=INT_MAX;
    ll mx=INT_MIN;
    forn(i,n)
    {
        cin>>a[i];
    }
    if(is_sorted(all(a)))
    {
        cout<<0<<"\n";
        return;
    }
    if(is_sorted(a.rbegin(),a.rend()))
    {
        cout<<a[0]<<"\n";
        return;
    }
    ll x=0;
    forab(i,0,n-2)
    {
        if(a[i]>a[i+1])
        {
            if((a[i]+a[i+1]+1)/2>=x)
            {
                x=(a[i]+a[i+1]+1)/2;
            }
        }
        else
        {
            if(abs(a[i]-x)>abs(a[i+1]-x))
            {
                NO;
                return;
            }
        }
    }
    forab(i,0,n-2)
    {
        if(abs(a[i]-x)>abs(a[i+1]-x))
        {
            NO;
            return;
        }
    }
    cout<<x<<"\n";
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