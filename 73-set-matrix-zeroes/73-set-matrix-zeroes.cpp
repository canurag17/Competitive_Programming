class Solution {
public:
    set<pair<int,int>> s;
    void dfs(int x, int y, int directx, int directy, vector<vector<int>>& matrix)
    {
        matrix[x][y]=0;
        int newx=x+directx;
        int newy=y+directy;
        if(newx>=0 && newx<matrix.size() && newy>=0 && newy<matrix[0].size())
        {
            if(matrix[newx][newy]!=0)
            s.insert({newx,newy});
            dfs(newx,newy,directx,directy,matrix);
        }
    }
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0 && s.find({i,j})==s.end())
                {
                    for(int k=0;k<4;k++)
                    {
                        int newx=i+dx[k];
                        int newy=j+dy[k];
                        if(newx>=0 && newx<matrix.size() && newy>=0 && newy<matrix[0].size())
                        {
                            if(matrix[newx][newy]!=0)
                            s.insert({newx,newy});
                            dfs(newx,newy,dx[k],dy[k],matrix);
                        }
                    }
                }
            }
        }
    }
};