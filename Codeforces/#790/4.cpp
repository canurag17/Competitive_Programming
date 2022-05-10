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
int ans[201][201];
int sum=0;
void dfs(int a[201][201], int x, int y, int dx, int dy, int n, int m)
{
    if(x>=0 && x<n && y>=0 && y<m)
    {
        sum+=a[x][y];
        dfs(a,x+dx,y+dy,dx,dy,n,m);
    }
    else
    {
        return;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[201][201];
        forn(i,n)
        {
            forn(j,m)
            {
                cin>>a[i][j];
            }
        }
        int mx=0;
        forn(i,n)
        {
            forn(j,m)
            {
                sum=0;
                dfs(a,i,j,1,1,n,m);
                dfs(a,i,j,1,-1,n,m);
                dfs(a,i,j,-1,1,n,m);
                dfs(a,i,j,-1,-1,n,m);
                sum-=3*a[i][j];
                mx=max(sum,mx);
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}