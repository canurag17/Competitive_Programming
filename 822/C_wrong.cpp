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
    ll n;
    cin>>n;
    string t;
    cin>>t;
    set<ll> s;
    set<ll> l;
    forn(i,t.length())
    {
        if(t[i]=='0')
        {
            s.insert(i+1);
            l.insert(i+1);
        }
    }
    ll cost=0;
    while(s.size()>0 && l.size()>0)
    {
        int it=*l.begin();
        int m=1;
        while(s.size()>0 && l.size()>0 && (s.count(it*m) || l.count(it*m)))
        {
            if(s.count(it*m))
            {
                s.erase(it*m);
                cost+=it;
            }
            m++;
        }
        l.erase(l.begin());
    }
    cout<<cost<<"\n";

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