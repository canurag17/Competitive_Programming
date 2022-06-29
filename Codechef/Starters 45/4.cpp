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
    unsigned int n,a,b;
    cin>>n>>a>>b;
    unsigned int n1=~a;
    unsigned int n2=~b;
    if(a==0)
    n1=1;
    if(b==0)
    n2=1;
    unsigned int lim=1<<n;
    int i=30;
    while(n1>=lim)
    {
        n1&=~(1<<i);
        i--;
    }
    i=1<<30;
    while(n2>=lim)
    {
        n2&=~(1<<i);
        i--;
    }
    int mul1=(n1^a)*(n1^b);
    int mul2=(n2^a)*(n2^b);
    int mul3=a*b;
    if(mul1>=mul2 && mul1>=mul3)
    cout<<n1<<"\n";
    else if(mul2>mul1 && mul2>=mul3)
    cout<<n2<<"\n";
    else
    cout<<0<<"\n";
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