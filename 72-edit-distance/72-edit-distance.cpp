class Solution {
public:
    int minDistance(string word1, string word2) {
        int t[501][501];
        memset(t,-1,sizeof(t));
        int n=word1.length();
        int m=word2.length();
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0)
                    t[i][j]=j;
                if(j==0)
                    t[i][j]=i;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(word1[i-1]==word2[j-1])
                {
                    t[i][j]=t[i-1][j-1];
                }
                else
                {
                    t[i][j]=min(t[i-1][j-1],t[i][j-1]);
                    t[i][j]=min(t[i][j],t[i-1][j])+1;
                }
            }
        }
        return t[n][m];
    }
};