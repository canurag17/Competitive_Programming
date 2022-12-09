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
    ll x[n];
    ll y[n];
    ll diff[n];
    ll p=0,np=0,pp=0;
    forn(i,n)
    {
        cin>>x[i];
    }
    vl pos;
    vl neg;
    forn(i,n)
    {
        cin>>y[i];
        diff[i]=y[i]-x[i];
    }
    sort(diff,diff+n,greater<int>());
    int i=0,j=n-1;
    ll ans=0;
    while(i<j)
    {
        if(diff[i]>=-diff[j])
        {
            i++;
            ans++;
            j--;
        }
        else
        {
            j--;
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