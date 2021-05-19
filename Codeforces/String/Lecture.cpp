#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t=0;
    cin>>n>>m;
    string a[m],b[m],c[n];
    for(int i=0;i<m;i++)
    cin>>a[i]>>b[i];
    for(int i=0;i<n;i++)
    cin>>c[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(c[i]==a[j] && c[i].length()>b[j].length()){
            c[i]=b[j];
            break;
            }
            else if(c[i]==a[j] && c[i].length()<b[j].length())
            break;
        }
    }
    for(int i=0;i<n;i++)
    cout<<c[i]<<" ";
}