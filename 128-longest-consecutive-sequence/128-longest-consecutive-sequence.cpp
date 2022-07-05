class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int res=1,ans=0;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        for(int it: s)
        {
            if(s.find(it-1)!=s.end()) 
                continue;
            res=1;
            while(s.find(it+res)!=s.end())
            {
                res++;
            }
            ans=max(res,ans);   
        }
        return ans;
    }
};