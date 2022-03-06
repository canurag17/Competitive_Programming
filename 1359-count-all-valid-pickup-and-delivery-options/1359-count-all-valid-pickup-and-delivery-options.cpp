class Solution {
public:
    int M=1000000007;
    int countOrders(int n) {
        long long int res=1;
        for(int i=n;i>=1;i--)
        {
            res*=(2*i)*(2*i-1);
            res/=2;
            res%=M;
        }
        return res;
    }
};