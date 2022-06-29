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
        int a[n];
        int fl=1;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
            if(a[i]!=0)
            fl=0;
        }
        if(fl)
        {
            YES;
            continue;
        }
        int fl2=0;
        if(n==3)
        {
            if(s.find(a[0]+a[1]+a[2])==s.end())
            NO;
            else
            YES;
        }
        else
        {
            for(int i=0;i<n;i++)
            s.insert(a[i]);
            for(int i=0;i<n;i++)
            if(s.find(-a[i])==s.end())
            {
                fl2=1; 
                break;
            }
            if(fl2==0 && s.size()==3)
            YES;
            else 
            NO;
            continue;
        }
    }
    return 0;
}