#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> ans;
        int flag=1;
        if((n%2!=0 && k%2==0) || n<k)
            flag=0;
        else if((n%2==0 && k%2==0)||(n%2!=0)&&(k%2!=0))
        {
            for(int i=1;i<=k-1;i++)
            ans.push_back(1);
            ans.push_back(n-(k-1));
        }
        else if(n%2==0 && k%2!=0)
        {
            int x=k-1;
            if((n-2*x)<=0)
            {
                flag=0;
            }
            else
            {
                for(int i=1;i<=x;i++)
                ans.push_back(2);
                ans.push_back(n-2*x);
            }
        }
        if(!flag)
        cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}