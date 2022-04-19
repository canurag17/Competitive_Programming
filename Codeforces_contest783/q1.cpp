#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll x,y,ans;
        x=n-1;
        y=m-1;
        if(x==0 && y==0)
        cout<<0<<"\n";
        else if((x==0 && y>1 || y==0 && x>1))
        cout<<-1<<"\n";
        else
        {
            ans=2*(min(n,m)-1);
            int temp=max(n,m)-min(n,m);
            if(temp%2==0)
            ans+=2*temp;
            else
            ans+=(2*temp-1);
            cout<<ans<<"\n";
        }
    
    }
    return 0;
}