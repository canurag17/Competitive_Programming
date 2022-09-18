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
    int n,m;
    cin>>n>>m;
    string s[n];
    forn(i,n)
    {
        cin>>s[i];
    }
    int nz=0;
    int fl=0;
    int ctr=0;
    int sum=0;
    forn(i,n)
    {
        forn(j,m)
        {
            sum+=s[i][j]-'0';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!i || !j)
            continue;
            ctr=s[i][j]+s[i-1][j-1]+s[i-1][j]+s[i][j-1]-4*'0';
            if(ctr<=2)
            {
                cout<<sum<<"\n";
                return;
            }
        }
    }
    if(sum==n*m)
    {
        cout<<sum-2<<"\n";
    }
    else
    {
        cout<<sum-1<<"\n";
    }
    

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