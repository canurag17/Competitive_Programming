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
       for(int i=0;i<n;i++)
       cin>>a[i];
       sort(a,a+n);
       ll x=accumulate(a,a+(n-1),0);
       ll y=a[n-1];
       double avg1=double(x)/double(n-1);
       double avg2=double(y);
       double sum=(avg1+avg2);
       cout<<fixed<<setprecision(10)<<sum<<"\n";
    }
    return 0;
}