

#include <bits/stdc++.h>
using namespace std;
int par[10001], ran[10001];
int find(int a)
{
	if(par[a]<0)
		return a;
	return par[a]=find(par[a]);
}
void merge(int a, int b)
{
	int x=find(a);
	int y=find(b);
	if(x==y)
	return;
	if(ran[x]>ran[y])
	{
		ran[x]+=ran[y];
		par[y]=x;
	}
	else
	{
		ran[y]+=ran[x];
		par[x]=y;
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<pair<int,pair<int,int>>> mp;
	for(int i=0;i<m;i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
		mp.push_back({w,{a,b}});
	}
    sort(mp.begin(),mp.end());
	int sum=0;
    for(int i=1;i<=n;i++)
    {
        ran[i]=1;
        par[i]=-i;
    }
	for(auto it: mp)
	{
		if(find((it.second).first)!=find((it.second).second))
		{
			merge(it.second.first,it.second.second);
			sum+=it.first;
		}
	}
	cout<<sum<<"\n";
}