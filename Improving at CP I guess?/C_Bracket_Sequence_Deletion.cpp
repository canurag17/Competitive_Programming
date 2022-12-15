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
#define pqd priority_queue<ll,vector<ll>,greater<ll>>
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
    string s;
    cin>>s;
    if(s==")(" || n==1)
    {
        cout<<0<<" "<<n<<"\n";
        return;
    }
    ll i=0,j=0;
    ll op=0;
    ll ind=0;
    ll rem=0;
    while(j<n-1)
    {
        if((s[j]=='(' && s[j+1]=='(') || (s[j]==')' && s[j+1]==')'))
        {
            op+=1;
            j+=2;
            rem+=2;
        }
        else if(s[j]=='(' && s[j+1]==')')
        {
            op+=1;
            j+=2;
            rem+=2;
        }
        else
        {
            ind=j;
            j++;
            while(j<n && s[j]!=s[ind])
            {
                j++;
            }
            if(j<n)
            {
                op+=1;
                j++;
                rem+=(j-ind);
            }
        }
        
    }
    ll left=n-rem;
    cout<<op<<" "<<left<<"\n";

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