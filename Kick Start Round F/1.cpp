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
bool sortbythirds(const tuple<string, int, int>& a, const tuple<string, int, int>& b)
{
    if(get<0>(a)==get<0>(b))
    return (get<2>(a) < get<2>(b));
    else
    return (get<0>(a) < get<0>(b));
}
bool sortbythirdi(const tuple<string, int, int>& a, const tuple<string, int, int>& b)
{
    if(get<1>(a)==get<1>(b))
    return (get<2>(a) < get<2>(b));
    else
    return (get<1>(a) < get<1>(b));
}
void solve(int i)
{
    int n;
    cin>>n;
    string c[n];
    int d[n];
    int u[n];
    vector<tuple<string, int, int> > v1;
    vector<tuple<string, int, int> > v2;
    int ans=0;
    forn(j,n)
    {
        cin>>c[j];
        cin>>d[j];
        cin>>u[j];
        v1.pb(make_tuple(c[j],d[j],u[j]));
        v2.pb(make_tuple(c[j],d[j],u[j]));
    }
    sort(v1.begin(),v1.end(),sortbythirds);
    sort(v2.begin(),v2.end(),sortbythirdi);
    for(int j=0;j<v1.size();j++)
    {
        if(get<0>(v1[j])==get<0>(v2[j]) && get<1>(v1[j])==get<1>(v2[j]) && get<2>(v1[j])==get<2>(v2[j]))
            ans++;
    }
    cout << "Case #" << i << ": "<<ans;
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