class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int res=0;
        sort(boxTypes.begin(),boxTypes.end(),compare);
        for(int i=0;i<boxTypes.size();i++)
        {
            if(truckSize>0)
            {
                int noofbox=min(truckSize,boxTypes[i][0]);
                res+=(noofbox*boxTypes[i][1]);
                truckSize-=noofbox;
            }
        }
        return res;
        
    }
};