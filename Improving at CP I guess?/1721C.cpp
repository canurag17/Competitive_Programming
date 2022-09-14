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
    int a[n],b[n];
    forn(i,n)
    cin>>a[i];
    forn(i,n)
    cin>>b[i];
    int dmin[n];
    forn(i,n)
    {
        dmin[i]=*lower_bound(b,b+n,a[i])-a[i];
        cout<<dmin[i]<<" ";
    }
    cout<<"\n";
    int dmax[n];
    int k=0;
    int flag=1;
    for (int i=0; i<n; i++)
	{
		k=max(k, i);
		while (k+1<n && b[k]>=a[k+1]) k++;
		cout<<b[k]-a[i]<<" ";
	}
    cout<<"\n";
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