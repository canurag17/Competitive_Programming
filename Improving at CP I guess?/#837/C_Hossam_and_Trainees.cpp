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

vector<ll> sieve()
{
    vector<ll> p;
    vector<ll> pr(100001,0);
    for(int i=2;i*i<=100000;i++)
    {
        if(pr[i]==0)
        {
            for(int j=i*i;j<=100000;j+=i)
            {
                pr[j]=1;
            }
        }
    }
    int i=2;
    do
    {
        if(p.size()==3401)
            break;
        if(pr[i]==0)
            p.pb(i);        
        i++;
    }while(i);
    //cout<<p.size();
    return p;
}
void solve(vector<ll> &pr)
{
    ll n;
    cin>>n;
    ll a[n];
    ll x=0;
    map<ll,ll> freq;
    forn(i,n)
    {
        cin>>a[i];
        if(a[i]%2==0)
            x++;
    }
    if(x>1)
    {
        YES;
        return;
    }
    set<ll> s;
    forn(i,n)
    {
        for(auto it: pr)
        {
            if(it>a[i]) break;
            if(a[i]%it==0)
            {
                if(s.count(it))
                {
                    YES;
                    return;
                }
                s.insert(it);
                while(a[i]%it==0)
                {
                    a[i]/=it;
                }

            }
        }
        if(a[i]>1)
        {
            if(s.count(a[i]))
            {
                YES;
                return;
            }
            s.insert(a[i]);
        }
    }
    NO;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<ll> prime=sieve();
    int t;
    cin>>t;
    while(t--)
    {
        solve(prime);

    }
    return 0;
}