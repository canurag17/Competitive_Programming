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
    string a,b;
    cin>>a>>b;
    int fl=0;
    if(a[0]==b[0])
    {
        fl=1;
    }
    forn(i,n)
    {
        if(fl && a[i]!=b[i])
        {
            NO;
            return;
        }
        else if(!fl && a[i]==b[i])
        {
            NO;
            return;
        }
    }
    YES;
    vector<pll> ans;
    ll ind=-1;
    ll ctr=0;
    if(!fl) 
    {
        ans.pb({0,n-1});
        a=b;
    }
    forn(i,n)
    {
        if(ind==-1 && a[i]=='1')
        {
            ind=i;
        }
        else if(ind!=-1 && a[i]=='0')
        {
            ans.pb({i,i});
            ctr++;
        }
    }
    if(ind!=-1)
    {
        if(ctr%2)
        {
            ans.pb({ind,n-1});
        }
        else
        {
            if(ind!=n-1)
            {
                ans.pb({ind,ind});
                ans.pb({ind+1,n-1});
            }
            else
            {
                ans.pb({ind-1,ind-1});
                ans.pb({ind-1,ind});
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(auto it: ans)
    cout<<it.first+1<<" "<<it.second+1<<"\n";
    
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