class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)
            return 0;
        int currDiff=nums[1]-nums[0];
        int j=2;
        int checkDiff=0;
        int subSize=2;
        int result=0;
        while(j<nums.size())
        {
            checkDiff=nums[j]-nums[j-1];
            if(checkDiff==currDiff)
            {
                subSize+=1;
                j++;
            }
            else
            {
                if(subSize>=3)
                {
                    result+=(subSize*(subSize-2))-((subSize*(subSize-1))/2-1);
                }
                subSize=2;
                j++;
                currDiff=checkDiff;
            }
        }
        if(subSize>=3)
            result+=(subSize*(subSize-2))-((subSize*(subSize-1))/2-1);
        return result;
    }
}; 