class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.length();
        string txt=s;
	    unordered_map<char,int> mp;
	    for(int i=0;i<k;i++)
	        mp[p[i]]++;
        int i=0,j=0;
        int ctr=mp.size();
        vector<int> ans;
        while(j<txt.length())
        {
            if(mp.find(txt[j])!=mp.end())
            {
                mp[txt[j]]--;
                if(mp[txt[j]]==0)
                ctr--;
            }
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                if(ctr==0)
                ans.push_back(i);
                if(mp.find(txt[i])!=mp.end())
                {
                    mp[txt[i]]++;
                    if(mp[txt[i]]==1)
                    ctr++;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};