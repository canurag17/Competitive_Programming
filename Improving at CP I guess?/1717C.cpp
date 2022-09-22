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
    int n;
    cin>>n;
    vector<int> a,b;
    forn(i,n)
    {
        int x;
        cin>>x;
        a.pb(x);
    }
    a.pb(a[0]);
    forn(i,n)
    {
        int y;
        cin>>y;
        b.pb(y);
    }
    b.pb(b[0]);
    forn(i,n)
    {
        if(a[i]>b[i])
        {
            NO;
            return;
        }
        if(a[i]!=b[i] && b[i]>b[i+1]+1)
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