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
        cin>>n;
        set<int> s;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            s.insert(x);
        }
        int nz=0,id=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                nz++;
            }
        }
        id=n-s.size();
        if(id==0 && nz==0)
            cout<<(n+1)<<"\n";
        else if(id>0 && nz==0)
        {
            cout<<n<<"\n";
        }
        else
        {
            cout<<n-nz<<"\n";
        }
    }
    return 0;
}