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
ll n2;
ll inv(ll i)
{
    return i^(n2-1);
}
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll x=n/2;
    n2=n;
    vector<pll> ans;
    if(n==4 && k==3)
    {
        NO;
        return;
    }
    if(k!=n-1)
    {
        ans.pb({k,n-1});
        ll i=1,j=n-2;
        while(i<j)
        {
            if(i==k)
            {
                ans.pb({0,j});
            }
            else if(j==k)
            {
                ans.pb({i,0});
            }
            else
            {
                ans.pb({i,j});
            }
            i++;
            j--;
        }
        for(auto it: ans)
        {
            cout<<it.first<<" "<<it.second<<"\n";
        }
    }
    else
    {
        ans.pb({n-1,n-2});
        ans.pb({1,3});
        ans.pb({0,n-4});
        ll vis[n]={0};
        vis[n-1]=vis[n-2]=vis[1]=vis[3]=vis[0]=vis[n-4]=1;
        forab(i,1,n-3)
        {
            if(vis[i]==0 && vis[inv(i)]==0)
            {
                ans.pb(mp(i,inv(i)));
                vis[i]=1;
                vis[inv(i)]=1;
            }
        }
       for(auto it: ans)
        {
            cout<<it.first<<" "<<it.second<<"\n";
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