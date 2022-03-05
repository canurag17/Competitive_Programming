class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,mx=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum<0)
                sum=0;
            else
                mx=max(mx,sum);
        }
        if(mx>0)
            return mx;
        return *max_element(nums.begin(),nums.end());
    }
};