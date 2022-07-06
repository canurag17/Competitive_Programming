class Solution {
public:
    int dp[201][201];
    int helper(int i, int j,vector<vector<int>>& grid)
    {
        if(i==grid.size()-1 && j==grid[0].size()-1)
            return grid[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
         if(i==grid.size()-1)
            return dp[i][j]=grid[i][j]+helper(i,j+1,grid);
        if(j==grid[0].size()-1)
            return dp[i][j]=grid[i][j]+helper(i+1,j,grid);
        return dp[i][j]=min(grid[i][j]+helper(i+1,j,grid),grid[i][j]+helper(i,j+1,grid));
    }

    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return helper(0,0,grid);
    }
};