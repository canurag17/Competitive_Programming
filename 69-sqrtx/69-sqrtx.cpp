class Solution {
public:
    int mySqrt(int x) {
        long long int y;
        if(x<=1)
            return x;
        if(x<=3)
            return 1;
        if(x<=5)
            return 2;
        for(long long int i=1;i<=x/2;i++)
        {
            if((i*i)>x)
            {
                y=(i-1);
                break;
            }
        }
        return y;
    }
};