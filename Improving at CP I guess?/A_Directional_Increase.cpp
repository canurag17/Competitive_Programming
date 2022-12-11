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
#define NO cout<<"No"<<"\n"
#define YES cout<<"Yes"<<"\n"
#define MOD 1000000007
void solve()
{
    int n;
    cin>>n;
    ll a[n];
    forn(i,n)
    cin>>a[i];
    if(n==1)
    {
        if(a[n-1]!=0)
        {
            NO;
            return;
        }
        else
        {
            YES;
            return;
        }
    }
    if(a[0]<0 || a[n-1]>0 || accumulate(a,a+n,0)!=0)
    {
        NO;
        return;
    }
    ll r[n],l[n];
    r[0]=a[0];
    l[n-1]=-a[n-1];
    for(int i=n-2;i>=1;i--)
    {
        r[i]=l[i+1];
        l[i]=r[i]-a[i];
    }
    for(int i=1;i<=n-2;i++)
    {
        if((l[i]<=0 && r[i]>0) || r[i]<a[i])
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