#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define vll vector<ll>
#define endl "\n"
using namespace std;
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
        string s;
        cin>>s;
        if(s.length()==1)
        cout<<"YES"<<endl;
        else if(s.length()==2 && s[0]!=s[1])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}