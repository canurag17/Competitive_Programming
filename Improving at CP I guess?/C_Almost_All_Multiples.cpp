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
#define revs(n) for(int i=n-1;i>=0;i--)
#define pql priority_queue<ll>
#define pqd priority_queue<ll,vector<ll>,greater<ll>>
#define NO cout<<"NO"<<"\n"
#define YES cout<<"YES"<<"\n"
#define read(a) cin>>a
#define wrt(a) cout<<a<<"\n"
#define wrts(a) cout<<a<<" "
#define MOD 1000000007
void solve()
{
    ll n,x;
    cin>>n>>x;
    ll a[n+1]={0};
    a[1]=x;
    a[n]=1;
    set<ll> s;
    if(n==2)
    {
        cout<<a[1]<<" "<<a[n]<<"\n";
        return;
    }
    if(n%x!=0)
    {
        cout<<-1<<"\n";
        return;
    }
    s.insert(1);
    s.insert(x);
    for(int i=n-1;i>n/2;i--)
    {
        if(a[i]==0)
        s.insert(i), a[i]=i;
    }
    ll ind=-999;
    forab(i,2,n/2)
    {
        if(a[i]==0)
        {
            if(s.count(i))
            {
                a[i]=n;
                ind=i;
            }
            else
            {
                a[i]=i;
            }
        }
    }
    ll z,ind2;
    if(ind>0)
    {
        z=2*ind;
        ind2=ind;
    }
    while(ind>0 && z<=n/2)
    {
        if(n%z==0 && a[z]%ind==0)
        {
            swap(a[ind],a[z]);
            ind=z;
        }
        z+=ind2;
    }
    forab(i,1,n)
    {
        cout<<a[i]<<" ";
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