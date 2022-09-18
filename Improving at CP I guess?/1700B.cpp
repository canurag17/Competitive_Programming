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
    string s;
    cin>>s;
    int x;
    if(s[0]!='9')
    {
        for(int i=0;i<n;i++)
        {
            x='9'-s[i];
            cout<<x;
        }
        cout<<"\n";
    }
    else
    {
        int c=0;
        vector<int> v;
        for(int i=n-1;i>=0;i--)
        {
            x=11-(s[i]-48+c);
            if(x>=10)
            {
                c=0;
                v.pb(x%10);
            }
            else
            {
                v.pb(x);
                c=1;
            }
        }
        reverse(all(v));
        forn(i,v.size())
        cout<<v[i];
        cout<<"\n";
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