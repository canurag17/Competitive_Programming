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
    string s,t;
    cin>>s>>t;
    if(s==t)
    {
        YES;
        return;
    }
    string s2=s,t2=t;
    sort(all(s2));
    sort(all(t2));
    if(s2!=t2)
    {
        NO;
        return;
    }
    s2.clear();
    t2.clear();
    vector<ll> indsa,indsc,indta,indtc;
    forn(i,n)
    {
        if(s[i]!='b') s2.pb(s[i]);
        if(t[i]!='b') t2.pb(t[i]);
    }
    forn(i,n)
    {
        if(s[i]=='a')
        indsa.pb(i);
        else if(s[i]=='c')
        indsc.pb(i);
        if(t[i]=='a')
        indta.pb(i);
        else if(t[i]=='c')
        indtc.pb(i);
    }
    forn(i,s2.size())
    {
        if(s2[i]!=t2[i])
        {
            NO;
            return;
        }
    }
    forn(i,indsa.size())
    {
        if(indsa[i]>indta[i])
        {
            NO;
            return;
        }
    }
    forn(i,indsc.size())
    {
        if(indsc[i]<indtc[i])
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