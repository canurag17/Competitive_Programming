class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(),nums.end());
        int hcf=numsDivide[0];
        for(int i: numsDivide)
        {
            hcf=__gcd(hcf,i);
        }
        int ans=0;
        for(int i: nums)
        {
            if(hcf%i==0)
                return ans;
            ans++;
        }
        if(ans==nums.size())
            return -1;
        return ans;
    }
};