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
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll> m,m2;
    ll fl=0,fl2=1;
    forn(i,n)
    {
        cin>>a[i];
        if(n==a[i])
        fl=1;
        m[a[i]]++;
        if(m[a[i]]>2)
        {
            fl2=0;
        }
    }
    set<ll> s;
    if(!fl || !fl2)
    {
        NO;
        return;
    }
    forab(i,1,n)
    {
        if(m[i]==0)
        {
            s.insert(i);
        }
    }
    ll p[n],q[n];
    forn(i,n)
    {
        ll x=a[i];
        if(m[x]==1)
        {
            p[i]=x;
            q[i]=x;
        }
        else
        {
            auto it=s.lower_bound(x);
            ll u=m2[x];
            if((s.empty() && u==0) ||(it==s.begin() && u==0))
            {
                NO;
                return;
            }
            if(!s.empty())
            it--;
            if(m[x]==2)
            {
                p[i]=x;
                q[i]=*(it);
                m2[x]=*it;
                s.erase(it);
                m[x]=3;
            }
            else if(m[x]==3)
            {
                p[i]=m2[x];
                q[i]=x;
            }
        }
    }
    YES;
    forn(i,n)
    {
        cout<<p[i]<<" ";
    }
    cout<<"\n";
    forn(i,n)
    {
        cout<<q[i]<<" ";
    }
    cout<<"\n";
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