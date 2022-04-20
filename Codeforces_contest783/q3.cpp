#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll ans, i, j, n, k, l, c;
    cin>>n;    
    ll a[n], b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        b[i]=0;
        c=0;
        for(j=i-1; j>=0; j--)
        {
            k=abs(b[j+1]);   
            l=k/a[j]+1;
            b[j]=-l*a[j];
            c=c+l;
        }
        for(j=i+1; j<n; j++)
        {
            k=abs(b[j-1]);
            l=k/a[j]+1;   
            b[j]=l*a[j];
            c=c+l;
        }   
        ans=min(ans, c);
    }
    cout<<ans<<"\n";
}