class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int x=INT_MAX-1;
        int t[coins.size()+1][amount+1];
        for(int j=0;j<=amount;j++)
        {
            t[0][j]=x;
        }
        for(int i=0;i<=coins.size();i++)
        {
            t[i][0]=0;
        }
        for(int i=1;i<=coins.size();i++)
        for(int j=1;j<=amount;j++)
            if(coins[i-1]<=j)
                t[i][j]=min(t[i-1][j],t[i][j-coins[i-1]]+1);
            else
                t[i][j]=t[i-1][j];
        return t[coins.size()][amount]==x?-1:t[coins.size()][amount];
        
    }
};