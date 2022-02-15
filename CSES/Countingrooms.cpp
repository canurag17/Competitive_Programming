#include<bits/stdc++.h>
using namespace std;
 
void dfs(int i,int j,int n,int m,char ch[1001][1001])
{
    int dx[]={-1,0,1,0};
    int dy[]={0,1,0,-1};
    ch[i][j]='#';
    for(int k=0;k<4;k++)
    {
        int x=i+dx[k];
        int y=j+dy[k];
        if(x>=1 && x<=n && y>=1 && y<=m && ch[x][y]=='.')
        dfs(x,y,n,m,ch);
    }
}
int main()
{
    char ch[1001][1001];
    int n,m,cc=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    cin>>ch[i][j];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(ch[i][j]=='.')
            {
                cc++;
                dfs(i,j,n,m,ch);
            }
            
        }
    }
    cout<<cc;
    return 0;
}