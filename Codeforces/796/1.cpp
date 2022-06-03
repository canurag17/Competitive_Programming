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
    int t;
    cin>>t;
    while(t--)
    {
        ll x,k=0;
        cin>>x;
        for(int i=0;i<32;i++)
        {
            k=1<<i;
            k&=x;
            if(k>0)
            break;
        }
        int f=k^x;
        if(f>0)
        cout<<k<<"\n";
        else
        {
            for(int i=0;i<32;i++)
            {
                int m=1<<i;
                k|=m;
                f=k^x;
                if(f>0)
                {
                    cout<<k<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}