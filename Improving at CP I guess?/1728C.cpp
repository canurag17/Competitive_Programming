#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define vii vector<vector<int>>
#define vll vector<vector<ll>>
#define pb push_back
#define mpr make_pair
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
ll length(ll n)
{
    ll ans=0;
    while(n>0)
    {
        n/=10;
        ans++;
    }
    return ans;

}
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a,b;
    priority_queue<int> qa,qb;
    forn(i,n)
    {
        ll x;
        cin>>x;
        a.pb(x);
        //mp4[length(x)]++;
        qa.push(x);
    }
    forn(i,n)
    {
        ll x;
        cin>>x;
        b.pb(x);
        qb.push(x);
    }
    sort(all(a));
    sort(all(b));
    int ans=0;
    if(a==b)
    {
        cout<<ans<<"\n";
        return;
    }
    while(!qa.empty())
    {
        if(qa.top()==qb.top())
        {
            n--;
            qa.pop();
            qb.pop();
            continue;
        }
        else if(qa.top()>qb.top())
        {
            qa.push(length(qa.top()));
            qa.pop();
            ans++;
        }
        else
        {
            qb.push(length(qb.top()));
            qb.pop();
            ans++;
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