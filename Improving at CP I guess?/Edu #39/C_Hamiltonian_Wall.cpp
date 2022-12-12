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
int dx[4]={-1,0,+1,0};
int dy[4]={0,1,0,-1};
void dfs(int x,int y, int m,vector<string> &s)
{
    s[x][y]='W';
    for(int i=0;i<4;i++)
    {
        int newx=x+dx[i];
        int newy=y+dy[i];
        if(newx>=0 && newx<2 && newy>=0 && newy<m && s[newx][newy]!='W')
        {
            dfs(newx,newy,m,s);
            return;
        }
    }
    return;
}
void solve()
{
    ll m;
    cin>>m;
    vector<string> s(2);
    cin>>s[0];
    cin>>s[1];
    int c=0;
    for(int i=0;i<m;i++)
    {
        if(s[i][0]=='B' || s[i][1]=='B')
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        NO;
        return;
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='B')
                dfs(i,j,m,s);
            break;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='B')
                dfs(i,j,m,s);
            break;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='B')
            {
                NO;
                return;
            }
        }
    }

    //cout<<s[0]<<"\n"<<s[1];
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