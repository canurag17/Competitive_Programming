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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        ll a[n];
        set<int> s;
        ll to=0;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1]+a[i+1])
            {
                to++;
                s.insert(i);
            }
        }
        if(k>1)
        cout<<to<<"\n";
        else if(k==1)
        {
            if(n%2==0)
            cout<<n/2-1<<"\n";
            else
            cout<<n/2<<"\n";
        }
    }
    return 0;
}