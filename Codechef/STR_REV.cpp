#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       string s2=s;
       reverse(s2.begin(),s2.end());
       int x=0;
       int y=0;
       int ctr=0;
       int diff=0;
       int n=s.length();
       while(x<n && y<n)
       {
           if(x<n && y<n && s[x]==s2[y])
           {
               x++;
               y++;
           }
           else if(s[x]!=s2[y])
           {
               s.push_back(s[x]);
               ctr++;
               x++;
           }
       }
       cout<<s.length()-n<<"\n";
    }
    return 0;
}