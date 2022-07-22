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
int vis[1001]={0};
int n;
int a[1000][2]={0};
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
void dfs(int x)
{
    vis[x]=1;
    forn(i,n)
    {
        if((a[i][0]==a[x][0] || a[i][1]==a[x][1]) && vis[i]==0)
        {
            dfs(i);
        }
    }
}
void solve()
{
    cin>>n;
    int cnt=0;
    vector<pii> v;
    forn(i,n)
    {
        cin>>a[i][0]>>a[i][1];
    }
    forn(i,n)
    vis[i]=0;
    forn(i,n)
    {
        if(vis[i]==0)
        {
            cnt++;
            dfs(i);
        }
    }
    cout<<cnt-1<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    // {
    solve();

    // }
    return 0;
}