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
        if(n==3)
        cout<<-1<<"\n";
        else
        {
            list<int> l;
            l.push_back(1);
            l.push_back(2);
            l.push_back(4);
            l.push_back(3);
            int i=5;
            while(l.size()<n)
            {
                auto x=(--l.end());
                auto y=--(l.end());
                auto z=--y;
                int a=*x;
                int b=*z;
                int m=a^b;
                if(m==i)
                {
                    l.push_front(i);
                }
                else
                    l.push_back(i);
                i++;
            }
            for(auto it: l)
            cout<<it<<" ";
            cout<<"\n";
        }

    }
    return 0;
}