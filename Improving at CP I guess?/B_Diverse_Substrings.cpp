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
    string s;
    cin>>s;
    ll ans=0;
    forn(i,n)
    {
        ll a[11]={0};
        ll cntdst=0;
        for(int j=i;j>=max(i-100,0);j--)
        {
            if(a[s[j]-'0']==0)
            {
                cntdst++;
            }
            a[s[j]-'0']++;
            ll fl=1;
            forn(k,11)
            {
                if(a[k]>cntdst)
                {
                    fl=0;
                    break;
                }
            }
            ans+=fl;

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