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
int div(int n)
{
    int cnt=0;
    while(n%2==0)
    {
        n/=2;
        cnt++;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        int o=0;
        int cnt=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            o++;
            if(a[i]%2==0)
            cnt=min(div(a[i]),cnt);
        }
        if(o>0)
        cout<<n-o<<"\n";
        else
        {
            cout<<cnt+(n-1)<<"\n";
        }

    }
    return 0;
}