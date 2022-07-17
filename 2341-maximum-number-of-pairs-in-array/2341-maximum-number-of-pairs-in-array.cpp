class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int ans=0;
        int rem=0;
        for(auto it: mp)
        {
            ans+=it.second/2;
            rem+=it.second%2;
        }
        vector<int> res;
        res={ans,rem};
        return res;
    }
};