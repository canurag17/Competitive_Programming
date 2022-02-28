class Solution {
public:
    int dp[1001][1001];
    int lcs(string word1,string word2,int n,int m)
    {
        if(m==0 || n==0)
            return 0;
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(word1[n-1]==word2[m-1])
            return dp[n][m]=1+lcs(word1,word2,n-1,m-1);
        return dp[n][m]=max(lcs(word1,word2,n-1,m),lcs(word1,word2,n,m-1));
    }
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        return word1.length()+word2.length()-2*lcs(word1,word2,word1.size(),word2.size());
    }
};