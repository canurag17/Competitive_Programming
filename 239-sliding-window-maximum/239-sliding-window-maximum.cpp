class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;
        //initialize dequeue
        for(int i=0;i<k;i++)
        {
            if(!dq.empty())
            {
                while(!dq.empty() && nums[i]>=nums[dq.back()])
                {
                    dq.pop_back();
                }
                dq.push_back(i);
            }
            else
                dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        
        for(int i=k;i<nums.size();i++)
        {
            if(i-dq.front()>=k)
                dq.pop_front();
            while(!dq.empty() && nums[dq.back()]<=nums[i])
                dq.pop_back();
            dq.push_back(i);
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};