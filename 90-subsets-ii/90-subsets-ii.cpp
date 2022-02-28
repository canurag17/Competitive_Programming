class Solution {
public:
    set<vector<int>> s;
    void solve(vector<int> ip, vector<int> op)
    {
        if(ip.size()==0)
        {
            s.insert(op);
            return;
        }
        vector<int> op1=op;
        vector<int> op2=op;
        op1.push_back(ip[ip.size()-1]);
        ip.pop_back();
        solve(ip,op1);
        solve(ip,op2);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> op;
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());
        solve(nums,op);
        for(auto it=s.begin();it!=s.end();it++)
            answer.push_back(*it);
        return answer;
    }
};