class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        int t=n;
        while(t>0)
        {
            int r=t%10;
            sum+=r*r;
            t/=10;
            if(t==0)
            {
                if(sum==1 || sum==7)
                    return true;
                else if(sum<10)
                    return false;
                else
                {
                    t=sum;
                    sum=0;
                }
            }
        }
        return false;
    }
};