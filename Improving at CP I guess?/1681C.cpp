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
void solve()
{
    ll n;
    cin>>n;
    vl a;
    vl b;
    forn(i,n)
    {
        int x;
        cin>>x;
        a.pb(x);
    }
    forn(i,n)
    {
        int x;
        cin>>x;
        b.pb(x);
    }
    vector<pii> ans;
    forn(i,n)
    {
        forab(j,1,n-1)
        {
            if(a[j-1]>a[j] || b[j-1]>b[j])
            {
                swap(a[j],a[j-1]);
                swap(b[j],b[j-1]);
                ans.pb({j,j+1});
            }
        }
    }
    if(!is_sorted(all(a)) || !is_sorted(all(b)))
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<ans.size()<<"\n";
        for(auto it: ans)
        cout<<it.first<<" "<<it.second<<"\n";
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