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
void solve(int i)
{
    int n;
    cin>>n;
    int a[n];
    map<int,int> m;
    int b[n];
    int c[n];
    forn(j,n)
        b[j]=-1;
    forn(j,n)
    {
        cin>>a[j];
        c[j]=a[j];
        m[a[j]]++;
    }
    sort(c,c+n);
    ll x=*max_element(a,a+n);
    for(int j=0;j<n;j++)
    {
        if(x!=a[j] && x<=2*a[j])
        {
            b[j]=x;
        }
        else if(x==a[j] && m[x]>1)
        {
            b[j]=x;
        }
        else
        {
            auto it=lower_bound(c,c+n,2*a[j]);
            if(it!=c+n && *it==2*a[j])
            {
                b[j]=(*it);
            }
            else if(it!=c+n)
            {
                if(it!=c)
                --it;
                else
                {
                    b[j]=-1;
                    continue;
                }
                if(*it!=a[j] || m[*it]>1)
                {
                    b[j]=*it;
                }
                else
                {
                    if(it!=c)
                    {
                        --it;
                        b[j]=*it;
                    }
                    else
                    {
                        b[j]=-1;
                    }
                }
            }
            else
            {
                --it;
                if(it==c)
                b[j]=1;
                else
                {
                    --it;
                    b[j]=*it;
                }

            }
        }
    }

    cout << "Case #" << i << ": ";
    forn(j,n)
    cout<<b[j]<<" ";
    cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int i=1;
    while(i<=t)
    {
        solve(i);
        ++i;
    }
    return 0;
}