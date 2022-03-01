class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int t[1001][1001];
        memset(t,-1,sizeof(t));
        int n=s.length();
        for(int i=0;i<=n;i++)
            for(int j=0;j<=n;j++)
                if(i==0 || j==0)
                    t[i][j]=0;
        string rev=s;
        reverse(rev.begin(),rev.end());
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==rev[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[n][n];
    }
};