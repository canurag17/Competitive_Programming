class Solution {
public:
    int minInsertions(string s) {
        string rev=s;
        reverse(s.begin(),s.end());
        int n=s.length();
        int t[501][501];
        memset(t,-1,sizeof(t));
        for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            if(i==0 || j==0)
                t[i][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==rev[j-1])
                {
                    t[i][j]=t[i-1][j-1]+1;
                }
                else
                {
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return n-t[n][n];        
    }
};