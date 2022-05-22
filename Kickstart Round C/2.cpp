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
int main()
{
    int t;
    cin>>t;
    int m=1;
    while(m<=t)
    {
        ll n,x,y;
        vector<ll> ans;
        cin>>n>>x>>y;
        int sum=((n)*(n+1))/2;
        int r=x+y;
        if(sum%r!=0)
            cout<<"Case #"<<m<<": IMPOSSIBLE"<<"\n";
        else
        {
            cout<<"Case #"<<m<<": POSSIBLE"<<"\n";
            int subsum=x*(sum/r);
            for(int i=n;i>=1;i--)
            {
                if(subsum<=n && subsum<=i)
                {
                    ans.push_back(subsum);
                    break;
                }
                else
                {
                    ans.push_back(i);
                    subsum-=i;
                }
            }
            cout<<ans.size()<<"\n";
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
        m++;
    }
    return 0;
}