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
    int b[n];
    for(int i=0;i<n;i++)
    cin>>b[i];
    vector<int> a(n);
    a[0]=0;
    if(b[0]==0)
        a[1]=0;
    else
        a[1]=1;
    for(int i=2;i<n-1;i++)
    {
        if(b[i-1]==0)
        {
            a[i]=a[i-1];
        }
        else
        {
            a[i]=1-a[i-1];
        }
    }
    if(b[n-1]==0)
    a[n-1]=a[0];
    else
    a[n-1]=1-a[0];
    if((a[n-1]+a[0])%2==b[n-1] && (a[n-1]+a[n-2])%2==b[n-2])
    YES;
    else
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