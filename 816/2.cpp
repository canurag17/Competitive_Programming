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
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    if(n==1)
    {
        ll p=s/k;
        if(p==b)
        cout<<s<<"\n";
        else
        cout<<-1<<"\n";
        return;
    }
    ll a[n];
    ll x=k*b;
    ll nb=s-x;
    ll t=nb/(n-1);
    if(t>=k || s<x)
    {
        cout<<-1<<"\n";
        return;
    }
    a[0]=x;
    forab(i,1,n-1)
    {
        if(nb>0)
        {
            if(t>0)
            {
                a[i]=t;
                nb-=t;
            }
            else
            {
                a[i]=1;
                nb--;
            }
        }
        else
        {
            a[i]=0;
        }
    }
    int i=0;
    while(nb>0 && i<n-1)
    {
        ll x=a[i]/k;
        a[i]+=1;
        ll y=a[i]/k;
        if(x!=y)
        {
            a[i]--;
            nb++;
        }
        else
            nb--;
        i++;
    }
    //ll x=a[n-1]/k;
    a[n-1]+=nb;
    
    forn(i,n)
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