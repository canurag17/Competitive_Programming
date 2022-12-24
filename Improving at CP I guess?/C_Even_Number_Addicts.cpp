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
#define NO cout<<"Bob"<<"\n"
#define YES cout<<"Alice"<<"\n"
#define read(a) cin>>a
#define wrt(a) cout<<a<<"\n"
#define wrts(a) cout<<a<<" "
#define MOD 1000000007
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll o=0,e=0;
    forn(i,n)
    {
        cin>>a[i];
        a[i]=abs(a[i]);
        o+=a[i]%2;
        e+=1-a[i]%2;
    }
    if(e==n)
    {
        YES;
        return;
    }
    if(o%4==2)
    {
        NO;
        return;
    }
    if(o%4==3 || o%4==0)
    {
        YES;
        return;
    }
    if(o%4==1)
    {
        if(e%2)
        {
            YES;
        }
        else
        {
            NO;
        }
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