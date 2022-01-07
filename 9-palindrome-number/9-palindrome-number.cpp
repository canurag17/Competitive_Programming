class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long int t=x;
        long long int y=x;
        long long int rev=0;
        long long int r;
        while(t>0)
        {
            r=t%10;
            t=t/10;
            rev=rev*10+r;
        }
        return y==rev;
    }
};