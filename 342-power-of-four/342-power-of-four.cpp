class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0)
            return false;
        int x=sqrt(n);
        if(x && (!(x&(x-1))) && (x*x)==n)
            return true;
        return false;
    }
};