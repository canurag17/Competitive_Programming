#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int i=1;
        int ans=0;
        char curr=s[0];
        int con=1;
        int op=0;
        while(i<n)
        {
            if(s[i]==curr)
            {
                con++;
            }
            else
            {
                if(con%2==0)
                {
                    con=1;
                    curr=s[i];
                }
                else
                {
                    con++;
                    op++;
                    s[i]=curr;
                }
            }
            i++;
        }
    
    }
    return 0;
}