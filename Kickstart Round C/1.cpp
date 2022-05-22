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
    int m=1;
    while(m<=t)
    {
        int n,fl=1;
        cin>>n;
        string s;
        cin>>s;
        string t="A*a";
        int dig=0, sp=0, cap=0, smll=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                dig++;
            }
            else if(s[i]>=65 && s[i]<=90)
            {
                cap++;
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                smll++;
            }
            else
            {
                sp++;
            }
        }
        if(sp==0)
        s.push_back('*');
        if(dig==0)
        s.push_back('1');
        if(cap==0)
        s.push_back('A');
        if(smll==0)
        s.push_back('a');
        while(s.size()<7)
        s.push_back('1');
        cout<<"Case #"<<m<<": "<<s<<"\n";
        m++;
    }
    return 0;
}