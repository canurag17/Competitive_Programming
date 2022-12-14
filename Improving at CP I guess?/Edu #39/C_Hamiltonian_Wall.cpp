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
int b1,b2=0;
int vis[2][200001];
int m;
void dfs(int x,int y,vector<string> &s)
{
    vis[x][y]=1;
    b2++;
    if(x==0)
    {
        if(s[1][y]=='B' && vis[1][y]!=1)
        {
            dfs(1,y,s);
        }
        else
        {
            if(y+1<m && s[0][y+1]=='B')
            dfs(x,y+1,s);
        }
    }
    else if(x==1)
    {
        if(s[0][y]=='B' &&  vis[0][y]!=1)
        {
            dfs(0,y,s);
        }
        else
        {
            if(y+1<m && s[1][y+1]=='B')
            dfs(x,y+1,s);
        }
    }
}
void solve()
{
    memset(vis,0,sizeof(vis));
    cin>>m;
    vector<string> s(2);
    cin>>s[0];
    cin>>s[1];
    b1=0,b2=0;
    int fl=1;
    forn(i,2)
    {
        forn(j,m)
        {
            if(s[i][j]=='B')
            b1++;
        }
    }
    if(s[0][0]=='B' && s[1][0]=='B')
    {
        dfs(0,0,s);
        if(b1==b2)
        {
            YES;
            return;
        }
        b2=0;
        memset(vis,0,sizeof(vis));
        dfs(1,0,s);
        if(b1==b2)
        {
            YES;
            return;
        }
    }
    else if(s[0][0]=='B')
    {
        dfs(0,0,s);
        if(b1==b2)
        {
            YES;
            return;
        }
    }
    else if(s[1][0]=='B')
    {
        dfs(1,0,s);
        if(b1==b2)
        {
            YES;
            return;
        }
    }

    NO;

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