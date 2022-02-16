#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
char ch[31][31];
int dist[31][31];
void bfs(int x,int y,int xe,int ye,int n)
{
    dist[x][y]=0;
    ch[x][y]='T';
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty())
    {
        int nodex=q.front().first;
        int nodey=q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int newx=nodex+dx[i];
            int newy=nodey+dy[i];
            if(newx>=1 && newx<=n && newy>=1 && newy<=n && (ch[newx][newy]=='P' || ch[newx][newy]=='E'))
            {
                ch[newx][newy]='T';
                dist[newx][newy]=dist[nodex][nodey]+1;
                if(newx==xe && newy==ye)
                return;
                q.push(make_pair(newx,newy));
            }
        }
    }

}
int main()
{
    int n,starti,startj,endi,endj;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='S')
            starti=i, startj=j;
            if(ch[i][j]=='E')
            endi=i, endj=j;
        }
    }
    bfs(starti,startj,endi,endj,n);
    cout<<dist[endi][endj];


    return 0;
}