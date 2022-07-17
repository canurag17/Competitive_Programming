class Solution {
public:
    int sol(int num)
    {
        int sum=0;
        while(num>0)
        {
            int r=num%10;
            num=num/10;
            sum+=r;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int ans=-1;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int sum=sol(nums[i]);
            if(mp[sum]>0)
            {
                ans=max(ans,mp[sum]+nums[i]);
            }
            mp[sum]=max(nums[i],mp[sum]);
        }
        return ans;
    }
};