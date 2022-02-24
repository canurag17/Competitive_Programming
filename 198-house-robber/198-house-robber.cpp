class Solution {
public:
    int dp(vector<int>&nums,int n,int t[])
    {
        if(n<=0)
            return 0;
        if(t[n]!=-1)
            return t[n];
        return t[n]=max(nums[n-1]+dp(nums,n-2,t),dp(nums,n-1,t));
    }
    int rob(vector<int>& nums) {
        int t[102];
        memset(t,-1,sizeof(t));
        return dp(nums,nums.size(),t);
    }
};