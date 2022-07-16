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
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll sum=0,z=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]==0)
        z++;
    }
    sum-=a[n-1];
    if(a[n-1]==0)
    z--;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        break;
        z--;
    }
    if(sum>0)
    cout<<sum+z<<"\n";
    else
    cout<<0<<"\n";


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}