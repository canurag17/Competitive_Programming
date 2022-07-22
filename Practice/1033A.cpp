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
int a[1001][1001];
int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};
int vis[1001][1001];
int flag=0;
int n;
int ax,ay,bx,by,cx,cy;
void dfs(int x,int y,int dirx,int diry)
{
    vis[x][y]=1;
    a[x][y]=1;
    int newx=x+dirx;
    int newy=y+diry;
    if(newx>0 && newx<=n && newy>0 && newy<=n && vis[newx][newy]==0) 
    {
        dfs(newx,newy,dirx,diry);
    }
}
void dfs2(int x,int y)
{
    vis[x][y]=1;
    a[x][y]=1;
    if(x==cx && y==cy)
    {
        flag=1;
        return;
    }
    for(int i=0;i<8;i++)
    {
        int newx=x+dx[i];
        int newy=y+dy[i];
        if(newx>0 && newx<=n && newy>0 && newy<=n && vis[newx][newy]==0)
        {
            dfs2(newx,newy);
        }
    }
}
void solve()
{
    cin>>n;
    memset(a,0,sizeof(a));
    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;
    a[ax][ay]=1;
    a[bx][by]=1;
    for(int i=0;i<8;i++)
    {
        int newx=ax+dx[i];
        int newy=ay+dy[i];
        if(newx>0 && newx<=n && newy>0 && newy<=n && vis[newx][newy]==0 && a[newx][newy]==0)
        {
            dfs(newx,newy,dx[i],dy[i]);
        }
    }
    dfs2(bx,by);
    if(flag)
    YES;
    else
    NO;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}