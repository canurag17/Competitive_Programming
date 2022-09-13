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
    int n,q;
    cin>>n>>q;
    int a[n+1];
    map<int,int> m;
    int x=1;
    forab(i,1,n)
    {
        cin>>a[i];
    }
    forab(i,2,n)
    {
        if(a[i]>a[x])
        {
            x=i; 
        }
        m[x]++;
    }
    m[x]=INT_MAX;
    forab(i,1,q)
    {
        int j,k;
        cin>>j>>k;
        k-=max(j-2,0);
		cout<<max(min(m[j],k),0)<<"\n";
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