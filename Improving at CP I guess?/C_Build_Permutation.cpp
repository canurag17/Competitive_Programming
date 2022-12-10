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
void solve(set<ll> &s)
{
    int n;
    cin>>n;
    ll p[n];
    int fl=0;
    ll x=0;
    set<ll> co;
    ll curr=0;
    int i=n-1;
    while(i>=0)
    {
        if(fl==1)
        {
            curr=x-i;
            if(co.count(curr) || curr>=n)
            {
                fl=0;
                continue;
            }
            else
            {
                p[i]=curr;
                i--;
                co.insert(curr);
            }
        }
        else
        {
            auto it=s.lower_bound(i);
            while(co.count(*it-i) || *it-i>=n)
            {
                if(it==s.begin())
                {
                    cout<<-1<<"\n";
                    return;
                }
                it--;
                
            }
            fl=1;
            x=*it;
        }

    }
    forn(i,n)
    {
        cout<<p[i]<<" ";
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
    set<ll> s;
    for(int i=0;i<=1000;i++)
    {
        s.insert(i*i);
    }
    while(t--)
    {
        solve(s);

    }
    return 0;
}