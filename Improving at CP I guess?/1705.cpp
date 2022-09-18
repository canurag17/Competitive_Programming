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
    ll n,c,q;
    cin>>n>>c>>q;
    string s;
    cin>>s;
    //ll ln=n;
    vector<ll> le(c+1),re(c+1),diff(c+1);
    le[0]=0;
    re[0]=n;
    forab(i,1,c)
    {
        ll l,r;
        cin>>l>>r;
        l--;
        r--;
        le[i]=re[i-1];
        re[i] = le[i] + (r-l+1);
        diff[i]=le[i]-l;
    }
    //auto it=--v.end();
    /*for(auto it2: v)
    cout<<it2.first<<" "<<it2.second<<"\n";*/
    while(q--)
    {
        ll k;
        cin>>k;
        --k;
        for(int i=c;i>=1;i--)
        {
            if(k<le[i]) continue;
            else k-=diff[i];
        }
        
        cout<<s[k]<<"\n";
    } 
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