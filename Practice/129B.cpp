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
    map<int,set<int>> adj;
    int n,m;
    cin>>n>>m;
    // int out[n+1]={0};
    // int out2[n+1]={0};
    forn(i,m)
    {
        int a,b;
        cin>>a>>b;
        adj[a].insert(b);
        adj[b].insert(a);
    }
    int flag=1;
    int ans=0;
    while(flag)
    {
        flag=0;
        set<pii> free;
        for(auto it: adj)
        {
            if((it.second).size()==1)
            {
                free.insert({it.first,*it.second.begin()});
            }
        }
        if(free.size()>0)
        {
            ans++;
            flag=1;
            for(auto it: free)
            {
                adj[it.first].erase(it.second);
                adj[it.second].erase(it.first);
            }
        }
    }
    cout<<ans;
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