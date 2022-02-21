#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       char x='a';
       string s;
       for(int i=1;i<=n;i++)
       {
           s.push_back(x);
           if(x=='c')
           x='a';
           else
           x++;
       }
       cout<<s<<"\n";
    }
    return 0;
}