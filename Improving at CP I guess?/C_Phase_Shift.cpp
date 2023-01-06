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
#define revs(n) for(int i=n-1;i>=0;i--)
#define pql priority_queue<ll>
#define pqd priority_queue<pll,vector<pll>,greater<pll>>
#define NO cout<<"NO"<<"\n"
#define YES cout<<"YES"<<"\n"
#define read(a) cin>>a
#define wrt(a) cout<<a<<"\n"
#define wrts(a) cout<<a<<" "
#define MOD 1000000007
void solve()
{
    ll n;
    cin>>n;
    string t;
    cin>>t;
    string s;
    int i=0,num=0;
    int d[26]={0},ctr=0;
    bool v[26]={0},v1[26]={0};
    forn(i,n)
    {
        if(v[t[i]-97])
        {
            s.pb(d[t[i]-97]+97);
        }
        else
        {
            ctr++;
            if(!v1[t[i]-97])
            {
                forn(j,26)
                {
                    if(!v1[j] && j!=t[i]-97)
                    {
                        d[t[i]-97]=j;
                        v1[j]=1;
                        v[t[i]-97]=1;
                        break;
                    }
                }
            }
            else
            {
                forn(j,26)
                {
                    if(!v1[j] && j!=t[i]-97)
                    {
                        if(!v[j])
                        {
                            d[t[i]-97]=j;
                            v1[j]=1;
                            v[t[i]-97]=1;
                            break;
                        }
                        else
                        {
                            int k=j;
                            while(v[k]==1)
                            {
                                k=d[k];
                            }
                            if(k!=t[i]-97)
                            {
                                d[t[i]-97]=j;
                                v1[j]=1;
                                v[t[i]-97]=1;
                                break;
                            }
                            else if(ctr==26)
                            {
                                d[t[i]-97]=j;
                                v1[j]=1;
                                v[t[i]-97]=1;
                                break;
                            }
                        }
                    }
                    
                }
            }
            s.pb(d[t[i]-97]+97);
        }
    }
    cout<<s<<"\n";
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