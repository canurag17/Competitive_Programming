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
vector<int> p;
int dp[500][40001];
int ispalin(int n)
{
    int x=n;
    int rev=0;
    while(x>0)
    {
        int r=x%10;
        x/=10;
        rev=rev*10+r;
    }
    return rev==n;
 
}
void solve()
{   
    for(int i=1;i<=p.size();i++)
    {
        dp[0][i]=0;
        for(int j=1;j<=40000;j++)
        {
            if(p[i-1]<=j)
            {
                dp[i][j]=(dp[i-1][j]+dp[i][j-p[i-1]])%MOD;
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    p.pb(0);
    for(int i=1;i<=40000;i++)
    {
        if(ispalin(i))
        {
            p.pb(i);
        }
    }
 
    for(int i=1;i<=p.size();i++)
    {
        dp[i][0]=1;
    }
    solve();
    while(t--)
    {
        int n;
        cin>>n;
        cout<<dp[p.size()][n]<<"\n";

    }
    return 0;
}