class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it=lower_bound(nums.begin(),nums.end(),target);
        if(it==nums.end() || *it!=target)
            return {-1,-1};
        vector<int> result;
        result.push_back(distance(nums.begin(),it));
        it++;
        auto it2=upper_bound(it,nums.end(),target);
        --it2;
        if(it2==nums.end() || *it2!=target)
            result.push_back(*(result.begin()));
        else
            result.push_back(distance(nums.begin(),it2));
        return result;
            
    }
};