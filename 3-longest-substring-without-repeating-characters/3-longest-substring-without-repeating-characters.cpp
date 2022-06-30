class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i=0, j=0;
        int mx=0;
        while(j<s.length())
        {
            st.insert(s[j]);
            if(j-i+1==st.size())
            {
                mx=max(mx,j-i+1);
                j++;
            }
            else if(j-i+1>st.size())
            {
                while(j-i+1>st.size())
                {
                    if(st.find(s[i])!=st.end())
                        st.erase(s[i]);
                    i++;
                    st.insert(s[j]);
                }
                mx=max(mx,j-i+1);
                j++;
            }
                
        }
        return mx;
    }
};