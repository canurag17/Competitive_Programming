class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string minimum=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            if(strs[i].length()<minimum.length())
            {
                minimum=strs[i];
            }
        }
        int l;
        int finlength=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            l=0;
            if(strs[i]==minimum)
                continue;
            while(strs[i][l]==minimum[l] && l<minimum.length())
            {
                l++;
            }
            finlength=min(finlength,l);
        }
        return minimum.substr(0,finlength);
    }
};