class Solution {
public:
    int dptable[101][101][101];
    int solve(vector<vector<int>> costs, int numCitya, int numCityb, int n)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=numCitya;j++)
            {
                for(int k=0;k<=numCityb;k++)
                {
                    if(i==0)
                        dptable[i][j][k]=0;
                    if(j==0 && k==0)
                        dptable[i][j][k]=0;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=numCitya;j++)
            {
                for(int k=0;k<=numCityb;k++)
                {
                    if(j==0 && k>0)
                        dptable[i][j][k]=dptable[i-1][j][k-1]+costs[i-1][1];
                    else if(k==0 && j>0)
                        dptable[i][j][k]=dptable[i-1][j-1][k]+costs[i-1][0];
                    else if(j==0 && k==0)
                        continue;
                    else
                        dptable[i][j][k]=min(dptable[i-1][j-1][k]+costs[i-1][0],dptable[i-1][j][k-1]+costs[i-1][1]);
                }
            }
        }
        return dptable[n][numCitya][numCityb];
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        memset(dptable,-1,sizeof(dptable));
        return solve(costs,costs.size()/2,costs.size()/2,costs.size());
    }
};