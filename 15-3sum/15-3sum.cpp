class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()<3)
            return res;
        sort(nums.begin(),nums.end());
        if(nums[0]>0)
            return res;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 || nums[i]!=nums[i-1])
            {
                int low=i+1;
                int high=nums.size()-1;
                while(low<high)
                {

                        if((nums[i]+nums[low]+nums[high])==0)
                        {
                            res.push_back({nums[i],nums[low],nums[high]});
                            while(low<high && nums[high]==nums[high-1])
                                high--;
                            while(low<high && nums[low]==nums[low+1])
                                low++;
                            low++;
                            high--;
                        }
                        else if((nums[i]+nums[low]+nums[high])>0)
                            high--;
                        else if((nums[i]+nums[low]+nums[high])<0)
                            low++;
                }
            }
        }
        return res;
    }
};