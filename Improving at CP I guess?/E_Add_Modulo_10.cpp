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
#define NO cout<<"No"<<"\n"
#define YES cout<<"Yes"<<"\n"
#define read(a) cin>>a
#define wrt(a) cout<<a<<"\n"
#define wrts(a) cout<<a<<" "
#define MOD 1000000007
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    forn(i,n)
    {
        cin>>a[i];
        ll y=a[i]%10;
        if(y==5)
        {
            a[i]+=5;
            continue;
        }
        else if(y==0)
            continue;
        while(y!=2)
        {
            a[i]+=y;
            y=a[i]%10;
        }
    }
    sort(a,a+n);
    ll x=a[n-1];
    forn(i,n)
    {
        ll diff=x-a[i];
        if(diff%20!=0)
        {
            NO;
            return;
        }
        if(a[i]%10==0 && diff!=0)
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