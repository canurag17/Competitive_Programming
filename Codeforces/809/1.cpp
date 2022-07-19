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
    int n,m;
    cin>>n>>m;
    int a[n];
    string s="B";
    for(int i=1;i<m;i++)
    s.pb('B');
    for(int i=0;i<n;i++)
    cin>>a[i];
    int pos;
    set<int> st;
    forn(i,n)
    {
        int x=a[i];
        int y=m+1-a[i];
        if(x<=y && st.find(x)==st.end())
        pos=x;
        else if(y<x && st.find(y)==st.end())
        pos=y;
        else if(x<=y && st.find(y)==st.end())
        pos=y;
        else if(y<x && st.find(x)==st.end())
        pos=x;
        else
        pos=x;
        s[pos-1]='A';
        st.insert(pos);
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