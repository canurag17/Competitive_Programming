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
       ll a[n];
       ll i=0;
       ll x=0;
       while(i<n)
       {
           a[i]=4*x+1;
           if(i+1<n)
           a[i+1]=4*x+2;
           x++;
           i+=2;
       }
       for(i=0;i<n;i++)
       cout<<a[i]<<" ";
       cout<<"\n";
       
    }
    return 0;
}