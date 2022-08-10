class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jumpIndex[nums.size()];
        for(int i=0;i<nums.size();i++)
            jumpIndex[i]=i+nums[i];
        int j=0;
        int maxIndex=nums.size()-1;
        while(j<maxIndex && maxIndex>0)
        {
            if(jumpIndex[j]>=maxIndex)
            {
                maxIndex=j;
                j=0;
            }
            else
            {
                j++;
            }
        }
        if(maxIndex!=0)
            return false;
        return true;
    }
};