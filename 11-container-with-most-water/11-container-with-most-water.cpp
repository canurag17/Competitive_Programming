class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0,end=height.size()-1;
        int result=INT_MIN;
        while(start<end)
        {
            int h=min(height[start],height[end]);
            result=max(result,(end-start)*h);
            while(start<end && height[start]<=h) start++;
            while(start<end && height[end]<=h) end--;
        }
        return result;
    }
};