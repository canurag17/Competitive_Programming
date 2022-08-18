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
	ll n,k;
	cin>>n>>k;
	vector<pair<ll,ll>> v;
	ll i,j;
	if(k%4==0)
	{
		NO;
		return;
	}
	YES;
	if(k%2==0)
	{
		i=2,j=1;
		while(i<=n)
		{
			v.pb({i,j});
			i+=4;
			j+=4;
		}
		int i=3,j=4;
		while(j<=n)
		{
			v.pb({i,j});
			i+=4;
			j+=4;
		}
	}
	else
	{
		i=1,j=2;
		while(j<=n)
		{
			v.pb({i,j});
			i+=2;
			j+=2;
		}
	}
	for(auto it: v)
	{
		cout<<it.first<<" "<<it.second<<"\n";
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