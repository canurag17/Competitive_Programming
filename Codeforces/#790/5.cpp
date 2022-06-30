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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);   
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<int> a(n);
        
        forn(i,n)
        {
            cin>>a[i];
        }
        sort(all(a));
        set<int> s;
        while(q--)
        {
            int x;
            cin>>x;
            int ctr=0,sum=0;
            for(int i=n-1;i>=0;i--)
            {
                if(sum>=x)
                break;
                else
                {
                    sum+=a[i];
                    ctr++;
                }
            }
            if(sum<x)
            cout<<-1<<"\n";
            else
            {
                cout<<ctr<<"\n";
                s.insert(x);
            }
        }
    }
    return 0;
}