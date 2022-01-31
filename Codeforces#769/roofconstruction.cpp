#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define vll vector<ll>
#define endl "\n"
#define forn(i,n) for(int i=0;i<n;i++)
#define fornn(i,a,b) for(int i=a;i<b;i++)
#define rforn(i,n) for(int i=n-1;i>=0;i--)
#define rfornn(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n-1;
        vi a;
        bool isadd=0;
        for(int i=x;i>=1;i--)
        {
            a.pb(i);
            if(__builtin_popcount(i)==1 && !isadd)
            {
                a.pb(0);
                isadd=1;
            }
        }
        for(int i: a)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}