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
ll lcm(ll a, ll b)
{
    return (a*b)/__gcd(a,b);
}
void solve()
{
    int n;
    cin>>n;
    ll a[n],b[n+1];
    forn(i,n)
    cin>>a[i];
    b[0]=a[0];
    b[n]=a[n-1];
    forab(i,1,n-1)
    {
        b[i]=lcm(a[i-1],a[i]);
    }
    forn(i,n)
    {
        if(a[i]!=__gcd(b[i],b[i+1]))
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