class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length()>s.length())
            return "";
        unordered_map<char,int> mp;
        for(int i=0;i<t.length();i++)
            mp[t[i]]++;
        int i=0,j=0,count=mp.size();
        string result="";
        int mnsize=INT_MAX;
        while(j<s.length())
        {
            if(mp.find(s[j])!=mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]]==0)
                count--;
                
            }
            if(count>0)
                j++;
            else if(count==0)
            {
                if(j-i+1<mnsize)
                {
                    result=s.substr(i,j-i+1);
                    mnsize=j-i+1;
                }
                while(count==0)
                {
                    if(mp.find(s[i])!=mp.end())
                    {
                        mp[s[i]]++;
                        if(mp[s[i]]>0)
                            count++;
                    }
                    if(count==0 && j-i<mnsize)
                    {
                        mnsize=j-i;
                        result=s.substr(i+1,mnsize);
                    }   
                    i++;
                }
                j++;
            }
        }
        return result;
    }
};