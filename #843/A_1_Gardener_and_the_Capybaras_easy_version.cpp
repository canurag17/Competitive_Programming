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
#define pqd priority_queue<pll,vector<pll>,greater<pll>>
#define NO cout<<":("<<"\n"
#define YES cout<<"YES"<<"\n"
#define read(a) cin>>a
#define wrt(a) cout<<a<<"\n"
#define wrts(a) cout<<a<<" "
#define MOD 1000000007
void solve()
{
    string s;
    cin>>s;
    ll fla=0,flb=0;
    if(s[0]=='a')
    {
        fla=1;
    }
    else
    {
        flb=1;
    }
    if(fla)
    {
        ll n=s.length();
        ll ind=0;
        forn(i,n)
        {
            if(s[i]=='b')
            {
                flb=1;
                ind=i;
                break;
            }
        }
        if(flb==0)
        {
            cout<<s[0];
            cout<<" ";
            forab(i,1,s.length()-2)
            {
                cout<<s[i];
            }
            cout<<" "<<s[s.length()-1]<<"\n";
            return;
        }
        if(ind==n-1)
        {
            forn(i,n-2)
            {
                cout<<s[i];
            }
            cout<<" "<<s[n-2]<<" "<<s[n-1]<<"\n";
            return;
        }
        cout<<s[0];
        forab(i,1,ind-1)
        {
            cout<<s[i];
        }
        cout<<' ';
        forab(i,ind,n-2)
        {
            cout<<s[i];
        }
        cout<<" ";
        cout<<s[n-1]<<"\n";
        return;

    }
    ll n=s.length();
    forab(i,1,n-1)
    {
        if(s[i]=='b')
        {
            fla=1;
            break;
        }
    }
    if(fla==0)
    {
        forab(i,1,n-1)
        {
            if(s[i]=='a')
            {
                fla++;
            }
        }
        if(fla%2==0)
        {
            cout<<s[0]<<" ";
            int ctr=0;
            int ind=0;
            forab(i,1,n-1)
            {
                if(ctr==fla/2)
                {
                    ind=i;
                    break;
                }
                cout<<s[i];
                ctr++;
            }
            cout<<" ";
            forab(i,ind,n-1)
            {
                cout<<s[i];
            }
            cout<<"\n";
        }
        else
        {
            cout<<s[0];
            cout<<" "<<s[1]<<" ";
            forab(i,2,n-1)
            {
                cout<<s[i];
            }
            cout<<"\n";
        }
    }
    else
    {
        cout<<s[0]<<" ";
        int i=1;
        while(i<=n-2 && s[i]!='b')
        {
            cout<<s[i];
            i++;
        }
        if(i==1)
        {
            forab(i,1,n-2)
            {
                cout<<s[i];
            }
            cout<<" "<<s[n-1]<<"\n";
            return;
        }
        cout<<" ";
        while(i<=n-1)
        {
            cout<<s[i];
            i++;
        }
        cout<<"\n";
    }

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