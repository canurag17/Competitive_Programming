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
       int n,x=1;
       cin>>n>>s;
       char curr=s[0];
       for(int i=1;i<n;i++)
       {
           if(s[i]!=curr)
           {
               curr=s[i];
               x++;
           }
       }
       cout<<x<<"\n";
    }
    return 0;
}