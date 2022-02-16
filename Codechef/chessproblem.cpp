#include<bits/stdc++.h>
using namespace std;
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};
int bfs(int x,int y,int ch[9][9],int f,int e)
{
    queue<pair<int,int>> q;
    ch[x][y]=1;
    int dist[9][9];
    dist[x][y]=0;
    q.push({x,y});
    while(!q.empty())
    {
        int currx=q.front().first;
        int curry=q.front().second;
        q.pop();
        for(int i=0;i<8;i++)
        {
            int newx=currx+dx[i];
            int newy=curry+dy[i];
            if(newx>=1 && newx<=8 && newy>=1 && newy<=8 &&  ch[newx][newy]==0)
            {
                ch[newx][newy]=1;
                dist[newx][newy]=dist[currx][curry]+1;
                if(newx==f && newy==e)
                {
                    return dist[f][e];
                }
                q.push({newx,newy});
            }
        }
    }
    return dist[f][e];


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a,b;
        int c,d;
        cin>>a>>c;
        cin>>b>>d;
        int a2=a-'a'+1;
        int b2=b-'a'+1;
        int ch[9][9];
        for(int i=1;i<=8;i++)
        for(int j=1;j<=8;j++)
        ch[i][j]=0;
        cout<<bfs(a2,c,ch,b2,d)<<"\n";
    }
    return 0;
}