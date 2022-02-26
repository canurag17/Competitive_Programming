class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int low=0,high=numbers.size()-1;
        while(low<high)
        {
            if(numbers[low]+numbers[high]==target)
            {
                v.push_back(low+1);
                v.push_back(high+1);
                return v;
            }
            else if(numbers[low]+numbers[high]<target)
                low++;
            else
                high--;
        }
        return v;
    }
};