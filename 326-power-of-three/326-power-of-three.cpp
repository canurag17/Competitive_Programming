class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;
        if(n==3 || n==9 || n==1)
            return true;
        int x=log2(n)/log2(3);
        return pow(3,x)==n;
    }
};