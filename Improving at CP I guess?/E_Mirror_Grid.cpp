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
    int n;
    cin>>n;
    ll a[n][n];
    forn(i,n)
    {
        forn(j,n)
        {
            char c;
            cin>>c;
            a[i][j]=c-'0';
        }
    }
    if(n==1)
    {
        cout<<0<<"\n";
        return;
    }
    ll ans=0;
    ll ctr=0;
    forn(i,(n+1)/2)
    {
        forn(j,n/2)
        {
            ctr=a[i][j];
            int newi,newj,oldj;
            newj=n-i-1;
            newi=j;
            ctr+=a[newi][newj];
            oldj=newj;
            newj=n-newi-1;
            newi=oldj;
            ctr+=a[newi][newj];
            oldj=newj;
            newj=n-newi-1;
            newi=oldj;
            ctr+=a[newi][newj];
            ans+=min(ctr,4-ctr);


        }
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