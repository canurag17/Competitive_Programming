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
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    forn(i,n)
    {
        forn(j,m)
        {
            cin>>a[i][j];
        }
    }
    if(m==1)
    {
        cout<<1<<" "<<1<<"\n";
        return;
    }
    ll r,fl=0,tc1,tc2;
    forn(i,n)
    {
        forn(j,m-1)
        {
            if(a[i][j]>a[i][j+1])
            {
                fl=1;
                r=i;
            }
            if(fl)
                break;
        }
    }
    if(fl==0)
    {
        cout<<1<<" "<<1<<"\n";
        return;
    }
    ll b[m];
    forn(i,m)
    {
        b[i]=a[r][i];
    }
    sort(b,b+m);
    ll ctr=0;
    forn(i,m)
    {
        if(a[r][i]!=b[i])
        {
            ctr++;
            if(ctr==1)
            {
                tc1=i;
            }
            else if(ctr==2)
            {
                tc2=i;
            }
            else
            {
                cout<<-1<<'\n';
                return;
            }
        }
    }
    forn(i,n)
    {
        swap(a[i][tc1],a[i][tc2]);
    }
    fl=0;
    forn(i,n)
    {
        forn(j,m-1)
        {
            if(a[i][j]>a[i][j+1])
            {
                fl=1;
                break;
            }
        }
    }
    if(fl)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<tc1+1<<" "<<tc2+1<<"\n";
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