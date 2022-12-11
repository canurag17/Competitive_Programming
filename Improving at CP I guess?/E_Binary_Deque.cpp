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
    int n,s;
    cin>>n>>s;
    int a[n];
    deque<int> ind;
    forn(i,n)
    {
        cin>>a[i];
    }
    int x=accumulate(a,a+n,0);
    int y=x-s;
    if(y<0)
    {
        cout<<-1<<"\n";
        return;
    }
    if(y==0)
    {
        cout<<0<<"\n";
        return;
    }
    int i=0,j=0;
    int ans=0;
    int sum=0,sz=0;
    while(j<n)
    {
        sum+=a[j];
        if(sum<s)
        {
            j++;
        }
        else if(sum==s)
        {
            sz=j-i+1;
            ans=max(ans,sz);
            j++;
        }
        else
        {
            while(sum>s)
            {
                sum-=a[i];
                i++;
            }
            j++;
        }
    }
    cout<<n-ans<<"\n";

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