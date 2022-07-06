class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int fl=0;
        int i,j,sortindex=0,ind1=0,ind2=0;
        for(i=nums.size()-1;i>=0;i--)
        {
            for(j=i-1;j>=0;j--)
            {
                if(nums[j]<nums[i])
                {
                    if(j+1>sortindex)
                    {
                        ind1=i;
                        ind2=j;
                        sortindex=j+1;
                    }
                    break;
                }
            }
            
        }
        swap(nums[ind1],nums[ind2]);
        for(i=sortindex;i<nums.size()-1;i++)
        {
            int minindex=i;
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[minindex])
                {
                    minindex=j;
                }
            }
            swap(nums[i],nums[minindex]);
        }
    }
};