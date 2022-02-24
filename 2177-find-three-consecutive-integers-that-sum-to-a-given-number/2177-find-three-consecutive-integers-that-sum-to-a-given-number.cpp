class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;
        if(num%3!=0)
            return ans;
        long long x,y,z;
        y=num/3;
        x=y-1;
        z=y+1;
        ans.push_back(x);
        ans.push_back(y);
        ans.push_back(z);
        return ans;
    }
};