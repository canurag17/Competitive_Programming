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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a.begin(),a.end());
        int i=1,j=2;
        while(i<n-1 && j<n)
        {
            if((a[i]>=a[i-1] && a[i]<=a[i+1]))
            {
                while(j<n && a[j]==a[i])
                {
                    j++;
                }
                if(j!=n)
                swap(a[i],a[j]);
                else
                break;
            }
            i+=2;
            j++;
        }
        int flag=1;
        for(int i=1;i<n-1;i++)
        {
            if((a[i-1]<a[i] && a[i]>a[i+1]) || (a[i-1]>a[i] && a[i]<a[i+1]))
            continue;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag && a[n-1]<=a[0])
            flag=0;
        if(flag==0)
        cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<"\n";
        }
        //for(int i=0;i<n;i++)
        //cout<<a[i]<<" ";
        //cout<<"\n";
    }
    return 0;
}