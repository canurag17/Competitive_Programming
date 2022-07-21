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
    int a[n+1];
    int i;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int vis[n+1]={0};
    int ctr=0;
    vector<pair<int,int>> v;
    int c=a[1];
    int ind=0;
    for(i=2;i<=n;i++)
    {
        if(a[i]!=c)
        {
            v.push_back({1,i});
            ind=i;
        }
    }
    if(v.size()==0)
    {
        NO;
        return;
    }
    YES;
    for(i=2;i<=n;i++)
    {
        if(a[i]==c)
        v.push_back({ind,i});
    }
    for(auto it: v)
    cout<<it.first<<" "<<it.second<<"\n";



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