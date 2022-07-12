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
        string s[n];
        map<string,int> st;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            st[s[i]]=i;
        }
        string ans;
        for(int i=0;i<n;i++)
        {
            string t=s[i];
            t.pop_back();
            while(t.length()>0)
            {
                if(st.find(t)==st.end())
                {
                    t.pop_back();
                }
                else
                {
                    string l=s[i].substr(t.length(),s[i].length()-t.length()+1);
                    if(st.find(l)!=st.end())
                    {
                        ans.push_back('1');
                        break;
                    }
                    else
                    {
                        t.pop_back();
                    }
                }
            }
            if(ans.length()!=i+1)
            ans.push_back('0');
        }
        cout<<ans<<"\n";
    }
    return 0;
}