#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       ll b,c;
       cin>>b>>c;
       ll x=__gcd(b,c);
       ll lcm=(b*c)/x;
       cout<<(lcm/b)<<"\n";
    }
    return 0;
}