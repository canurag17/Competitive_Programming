class Solution {
public:
    int fib(int n) {
       int t0=0,t1=1,tn;
        if(n==0)
            return t0;
        if(n==1)
            return t1;
        else
            for(int i=2;i<=n;i++){
                tn=t1+t0;
                t0=t1;
                t1=tn;
            }
        return tn;
    }
};