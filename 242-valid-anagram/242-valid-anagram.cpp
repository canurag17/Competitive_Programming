class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp,mp2;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            mp2[t[i]]++;
        }
        return mp==mp2;
    }
};