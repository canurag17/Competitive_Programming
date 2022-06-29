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
    int n;
    cin>>n;
    vector<int> v,pos,neg;
    int cnp=0,cnn=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>0)
        pos.push_back(x);
        else if(x<0)
        neg.push_back(x);
        else
        {
            if(v.size()<2)
            v.push_back(x);
        }
    }
    if(pos.size()>2 || neg.size()>2)
    {
        NO;
        return;
    }
    for(int i: pos)
    {
        v.push_back(i);
    }
    for(int i: neg)
    {
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            for(int k=j+1;k<v.size();k++)
            {
                bool fl=0;
                for(int l=0;l<v.size();l++)
                {
                    if(v[l]==v[i]+v[j]+v[k])
                    {
                        fl=1;
                        break;
                    }
                    else
                        fl=0;
                }
                if(!fl)
                {
                    NO;
                    return;
                }
            }
        }
    }
    YES;
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