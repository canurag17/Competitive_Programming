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
    ll n,q;
    ll sum=0;
    cin>>n>>q;
    ll a[n+1];
    int tim[n+1]={0};
    forab(i,1,n)
    cin>>a[i], sum+=a[i], tim[i]=1;
    ll val=0;
    int check=0;
    forab(j,1,q)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            ll i,x;
            cin>>i>>x;
            if(tim[i]>check) 
                sum-=a[i];
            else
                sum-=val;
            sum+=x;
            a[i]=x;
            tim[i]=j;
        }
        else
        {
            ll x;
            cin>>x;
            sum=n*x;
            val=x;
            check=j;
        }
        cout<<sum<<"\n";
    }

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