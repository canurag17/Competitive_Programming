#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,max_friend=0,min_friend=0,rem=0,d;
    cin>>n>>m;
    long long int t=n;
    if(n==m){
        cout<<0<<" "<<0;
    }
    else if(n==m+1){
        cout<<1<<" "<<1;
    }
    else {
    for(long long int i=1;i<=m;i++){
        if(i!=m)
        t=t-1;
        else
        max_friend=t;
    }
    max_friend=(max_friend)*(max_friend-1)/2;
    t=n;
    d=t/m;
    rem=t%m;
    min_friend=(((m-rem)*(d)*(d-1))/2)+(rem*(d+1)*(d))/2;
    cout<<min_friend<<" "<<max_friend;
    }
}
