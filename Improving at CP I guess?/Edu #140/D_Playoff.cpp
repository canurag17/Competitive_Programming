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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)
    {
        if(s[0]=='1')
        cout<<2<<"\n";
        else
        cout<<1<<"\n";
        return;
    }
    deque<ll> d;
    for(int i=1;i<=1<<n;i++)
    {
        d.pb(i);
    }
    ll no=0,nz=0;
    forn(i,n)
    {
        if(s[i]=='1')
        {
            no++;
        }
        else
        {
            nz++;
        }
    }
    ll c=1;
    for(int i=1;i<=no;i++)
    {
        ll t=c;
        while(!d.empty() && t)
        {
            d.pop_front();
            t--;
        }
        c*=2;
    }
    c=1;
    for(int i=1;i<=nz;i++)
    {
        ll t=c;
        while(!d.empty() && t)
        {
            d.pop_back();
            t--;
        }
        c*=2;
    }
    if(!d.empty())
    {
        for(auto it: d)
        {
            cout<<it<<" ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}