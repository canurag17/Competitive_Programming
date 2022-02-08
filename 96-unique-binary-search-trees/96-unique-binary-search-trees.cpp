class Solution {
public:
    int numTrees(int n) {
        int a[20];
        memset(a,-1,sizeof(a));
        int res=0;
        if(n<=1)
            return 1;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]!=-1 && a[n-i-1]!=-1)
                {
                    res+=a[i]*a[n-i-1];
                }
                else if(a[i]!=-1)
                {
                    a[n-i-1]=numTrees(n-i-1);
                    res+=a[i]*a[n-i-1];
                }
                else if(a[n-i-1]!=-1)
                {
                    a[i]=numTrees(i);
                    res+=a[i]*a[n-i-1];
                }
                else if(a[i]==-1 && a[n-i-1]==-1)
                {
                    a[i]=numTrees(i);
                    a[n-i-1]=numTrees(n-i-1);
                    res+=a[i]*a[n-i-1];
                }
            }
        }
        return res;
    }
};