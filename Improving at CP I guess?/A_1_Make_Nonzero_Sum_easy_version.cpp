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
    int a[n+1];
    forab(i,1,n)
    cin>>a[i];
    int os=a[1];
    if(n%2)
    {
        cout<<-1<<"\n";
        return;
    }
    forab(i,2,n)
    {
        if(i%2==0)
        {
            os-=a[i];
        }
        else
        {
            os+=a[i];
        }
    }
    if(os==0)
    {
        cout<<1<<"\n";
        cout<<1<<" "<<n<<"\n";
        return;
    }
    vector<pii> v;
    int i=1;
    while(i<=n-1)
    {
        if(a[i]==a[i+1])
        {
            v.pb({i,i+1});
        }
        else
        {
            v.pb({i,i});
            v.pb({i+1,i+1});
        }
        i+=2;
    }
    cout<<v.size()<<"\n";
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