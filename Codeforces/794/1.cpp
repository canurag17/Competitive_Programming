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
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        vector<int> a(100);
        for(int i=0;i<n;i++)
        cin>>a[i];
        double avg=0,sum=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            avg=0;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                continue;
                else
                sum+=a[j];
            }
            avg=(sum*1.0)/(n-1);
            if(avg==a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}