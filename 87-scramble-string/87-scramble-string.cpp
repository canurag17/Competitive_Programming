class Solution {
public:
    map<string,bool> mp;
    bool isScramble(string s1, string s2) {
        int n=s1.length();
        string s3=s1;
        string s4=s2;
        sort(s3.begin(),s3.end());
        sort(s4.begin(),s4.end());
        if(s3!=s4)
            return false;
        if(s1.length()==0 || s2.length()==0)
            return false;
        if(s1==s2)
            return true;
        string s;
        s.append(s1);
        s.push_back('_');
        s.append(s2);
        if(mp.find(s)!=mp.end())
            return mp[s];
        for(int i=1;i<s1.length();i++)
        {
            bool c1=isScramble(s1.substr(0,i),s2.substr(n-i,i)) && isScramble(s1.substr(i,n-i),s2.substr(0,n-i));
            bool c2=isScramble(s1.substr(0,i),s2.substr(0,i)) && isScramble(s1.substr(i,n-i),s2.substr(i,n-i));
            if(c1 || c2)
                return mp[s]=true;
        }
        return mp[s]=false;
    }
};