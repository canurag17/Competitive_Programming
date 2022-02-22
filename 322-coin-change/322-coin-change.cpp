class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int x=100000;
        int t[amount+1];
        for(int i=0;i<=amount;i++)
            t[i]=x;
        t[0]=0;
        for(int i=1;i<=amount;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(coins[j]<=i)
                {
                    t[i]=min(t[i-coins[j]]+1,t[i]);
                }
            }
        }
        return t[amount]==x?-1:t[amount];
        
    }
};