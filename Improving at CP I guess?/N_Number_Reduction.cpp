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
    string x;
    cin>>x;
    ll k;
    cin>>k;
    if(k==0)
    {
        cout<<x<<"\n";
        return;
    }
    vll pos(10);
    forn(i,x.length())
    pos[x[i]-'0'].pb(i);
    forn(i,10)
    {
        reverse(all(pos[i]));
        // storing all indexex of particular digits from 0-9 in vector and sorting in desc as we pop from behind
    }
    string ans;
    int lst=0,len=x.length()-k;
    // our answer is always some suffix of the original string x
    forn(i,len)
    {
        forab(d,(i==0),9)
        {
            while(!pos[d].empty() && pos[d].back()<lst)
            {
                pos[d].pop_back();
            }
            if(!pos[d].empty() && pos[d].back()-lst<=k)
            {
                ans.pb(d+48);
                k-=pos[d].back()-lst;
                lst=pos[d].back()+1;
                break;
            }
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