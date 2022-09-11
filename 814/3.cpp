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
    cin>>n>>q;
    ll a[n+1];
    forab(i,1,n)
    cin>>a[i];
    int x=*min_element(a+1,a+n+1);
    int y=*max_element(a+1,a+n+1);
    auto it=max_element(a+1,a+1+n);
    int ind=distance(a+1,it);
    forab(j,1,q)
    {
        ll i,k;
        cin>>i>>k;
        if(i-1>k)
        {
            cout<<0<<"\n";
            continue;
        }
        if(a[i]==x)
        {
            cout<<0<<"\n";
            continue;
        }
        if(a[i]==y && i!=1)
        {
            cout<<k-(i-2)<<"\n";
            continue;
        }
        else if(a[i]==y && i==1)
        {
            cout<<k<<"\n";
            continue;
        }
        if(i!=1 && a[i-1]>a[i])
        {
            cout<<0<<"\n";
            continue;
        }
        else if(i==1 && a[i]<a[i+1])
        {
            cout<<0<<"\n";
            continue;
        }
        else
        {
            
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
    while(t--)
    {
        solve();

    }
    return 0;
}