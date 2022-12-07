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
    int n,q;
    cin>>n>>q;
    set<int> r,c;
    forab(i,1,n)
    {
        r.insert(i);
        c.insert(i);
    }
    int x1,y1,x2,y2;
    int fx[n+1]={0};
    int fy[n+1]={0};
    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            cin>>x1>>y1;
            fx[x1]++;
            fy[y1]++;
            if(fx[x1]==1)
            r.erase(x1);
            if(fy[y1]==1)
            c.erase(y1);
        }
        else if(t==2)
        {
            cin>>x1>>y1;
            fx[x1]--;
            fy[y1]--;
            if(!fx[x1])
            r.insert(x1);
            if(!fy[y1])
            c.insert(y1);
        }
        else
        {
            cin>>x1>>y1>>x2>>y2;
            auto it=r.lower_bound(x1);
            if((it==r.end() || *it>x2))
            {
                YES;
                continue;
            }
            auto it2=c.lower_bound(y1);
            if((it2==c.end() || *it2>y2))
            {
                YES;
                continue;
            }
            NO;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    // {
    solve();

    // }
    return 0;
}