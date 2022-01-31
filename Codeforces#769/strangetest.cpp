#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=b-a;
        int op3=(a|b)-b+1;
        ans=min(ans,op3);
        int a2=a;
        int ans2=0;
        while(true)
        {
            int t=a2|b;
            if(t==b)
            break;
            a2++;
            ans2++;
        }
        ans2++;
        ans=min(ans,ans2);
        int b2=b;
        int ans3=0;
        while(true)
        {
            int t=a|b2;
            if(t==b2)
            break;
            b2++;
            ans3++;
        }
        ans3++;
        ans=min(ans3,ans);
        cout<<ans<<"\n";
    }
}
