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
void solve()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int h[2*n];
    for(int i=0;i<2*n;i++)
    cin>>h[i];
    sort(h,h+2*n);
    int fl=1;
    for(int i=0;i<n;i++)
    {
        if(h[n+i]-h[i]<x)
        {
            fl=0;
            break;
        }
    }
    if(fl)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}