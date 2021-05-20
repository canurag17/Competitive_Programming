#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,sum=0;
    cin>>n;
    vector<long long int> a;
    for(int i=0;i<n;i++){
        long long int c;
        cin>>c;
        a.push_back(c);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        sum=sum+a[n-i-1]*pow(2,i);
    }
    cout<<sum;
}
