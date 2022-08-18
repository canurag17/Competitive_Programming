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
int s[1000043];
int rk[1000043];
int find(int u)
{
	int x=u;
	while(s[x]!=x)
	{
		x=s[x];
	}
	return x;

}
void uni(int u, int v)
{
    int u=find(u);
	int v=find(v);
	if(u==v)
		return;
	if(rk[p1]>=rk[p2])
	{
		rk[p1]=rk[p1]+rk[p2];
		s[p2]=p1;
	}
	else
	{
		rk[p2]=rk[p1]+rk[p2];
		s[p1]=p2;
	}
}
void solve()
{
	int n,m;
	cin>>n>>m;
	forab(i,1,n)
	{
		s[i]=i;
		rk[i]=1;
	}
	forn(i,m)
	{
		int k,x;
		cin>>k;
		x=-1;
		forn(j,k)
		{
			int y;
			cin>>y;
			if(x!=1)
				uni(x,y);
			x=y;

		}
	}
	forab(i,1,n)
	{
		cout<<rk[find(i)]<<" ";
	}
	cout<<"\n";
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