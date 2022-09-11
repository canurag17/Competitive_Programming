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
    ll n,m;
    cin>>n>>m;
    if(m<n)
    {
        NO;
        return;
    }
    if(m%n==0)
    {
        YES;
        forn(i,n)
        cout<<m/n<<" ";
        cout<<"\n";
        return;
    }
    if(n%2)
    {
        YES;
        forn(i,n-1)
        cout<<1<<" ";
        cout<<m+1-n<<"\n";
    }
    else
    {
        if(m%2==0)
        {
            YES;
            int x=n-2;
            forn(i,x)
            cout<<1<<" ";
            int y=(m-n+2)/2;
            cout<<y<<" "<<y<<"\n";
        }
        else
        {
            NO;
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