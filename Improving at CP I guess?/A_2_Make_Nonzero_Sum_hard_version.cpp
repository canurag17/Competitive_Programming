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
    vector<ll> a;
    ll ctr=0;
    forn(i,n)
    {
        ll x;
        cin>>x;
        a.pb(x);
        if(x!=0)
            ctr++;
    }
    if(ctr%2)
    {
        cout<<-1<<"\n";
        return;
    }
    if(ctr==0)
    {
        cout<<1<<"\n";
        cout<<1<<" "<<n<<"\n";
        return;
    }
    vector<pll> ans;
    ll alt=1,start=0,sum=0,prev=-1;
    forn(i,n)
    {
        if(alt)
        {
            sum+=a[i];
        }
        else
        {
            sum-=a[i];
        }
        alt^=1;
        if(a[i]!=0)
        {
            if(prev==-1)
            {
                prev=i;
            }
            else
            {
                if(sum==0)
                {
                    ans.pb({start,i});
                    prev=-1;
                    start=i+1;
                    alt=1;
                    continue;
                }
                if(a[start]==0)
                {
                    if((i-prev+1)%2==0)
                    {
                        ans.pb({start,prev-1});
                        ans.pb({prev,i-1});
                        ans.pb({i,i});
                        prev=-1;
                        start=i+1;
                    }
                    else
                    {
                        ans.pb({start,prev-1});
                        ans.pb({prev,prev});
                        ans.pb({prev+1,i});
                        prev=-1;
                        start=i+1;
                    }
                    sum=0;
                } 
                else
                {
                    if((i-prev+1)%2==0)
                    {
                        ans.pb({prev,i-1});
                        ans.pb({i,i});
                        prev=-1;
                        start=i+1;
                    }
                    else
                    {
                        ans.pb({prev,prev});
                        ans.pb({prev+1,i});
                        prev=-1;
                        start=i+1;
                    }
                    sum=0;
                }
                alt=1;
            }
            
        }
    }
    if(a[n-1]==0)
    {
        ans.pb({n-1,n-1});
        int i=n-1;
        while(i>=0 && a[i]==0)
        {
            ans[ans.size()-1].first=i;
            i--;
        }
    }
    cout<<ans.size()<<"\n";
    for(auto it: ans)
    {
        cout<<it.first+1<<" "<<it.second+1<<"\n";
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