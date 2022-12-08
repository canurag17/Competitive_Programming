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
#define NO cout<<"No"<<"\n"
#define YES cout<<"Yes"<<"\n"
#define MOD 1000000007
void solve()
{
    ll n,k,k1,i,f;
    cin>>n>>k;
    k1=n-k+1;
    
    ll s[k], a[k];
    
    for(i=0; i<k; i++)
    {
        cin>>s[i];
    }

    for(i=1; i<k; i++){
        a[i]=s[i]-s[i-1];
    }

   a[0]=(s[0]/k1);
   if(a[0]>=0){
        if((s[0]%k1)>0){
            a[0]++;
        }
    }
    
    
    f=0;
    
    for(i=1; i<k; i++)
    {
        if(a[i]<a[i-1]){
            f++;
            break;
        }
    }
    
    if(f==0)
    cout<<"Yes\n";
    else
    cout<<"No\n";
        
    
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