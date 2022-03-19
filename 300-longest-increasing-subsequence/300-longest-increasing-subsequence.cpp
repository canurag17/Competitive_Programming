class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        set<int> s;
        vector<int> sorted_nums;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            s.insert(nums[i]);
        }
        for(auto it=s.begin();it!=s.end();it++)
        {
            sorted_nums.push_back(*it);
        }
        int dp[2502][2502];
        for(int i=0;i<=size;i++)
        {
            for(int j=0;j<=sorted_nums.size();j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
            }
        }
        for(int i=1;i<=size;i++)
        {
            for(int j=1;j<=sorted_nums.size();j++)
            {
                if(nums[i-1]==sorted_nums[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[size][sorted_nums.size()];
    }
};