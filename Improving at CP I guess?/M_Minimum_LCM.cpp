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
int isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return i;
    }
    return 0;
}
void solve()
{
    int n;
    cin>>n;
    if(!(n%2))
    {
        cout<<n/2<<" "<<n/2<<"\n";
        return;
    }
    int x;
    if((x=isPrime(n))==0)
    {
        cout<<n-1<<" "<<1<<"\n";
        return;
    }
    int q=n/x;
    cout<<q<<" "<<n-q<<"\n";

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