#include<bits/stdc++.h>
#define lli long long int

using namespace std;
bool flag=true;

int dfs(int i,bool visited[],list<int>adj[]){
	if(!visited[i]){
		visited[i]=true;
		int count=0;
		for(auto it=adj[i].begin();it!=adj[i].end();it++){
			count+=dfs(*it,visited,adj);
		}
		if (count>1)flag=false;
		return 0;
	}
	return 1;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m,x,y;
	cin>>n>>m;
	list<int>adj[n+1];
	for (int i = 0; i < m; ++i)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	bool visited[n+1]={};
	if(n!=m+1)flag=false;
	else dfs(1,visited,adj);
	for (int i = 1; i <=n; ++i)if(!visited[i])flag=false;
	flag?cout<<"YES":cout<<"NO";
	return 0;
}