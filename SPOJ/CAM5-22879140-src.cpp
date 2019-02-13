#include<bits/stdc++.h>
#define lli long long int

using namespace std;

void dfs(int i,bool visited[],list<int>adj[]){
	if(!visited[i]){
		visited[i]=true;
		for(auto it=adj[i].begin();it!=adj[i].end();it++){
			dfs(*it,visited,adj);
		}
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test,n,m,x,y;
	cin>>test;
	while(test--){
		cin>>n>>m;
		list<int>adj[n];
		for (int i = 0; i < m; ++i)
		{
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		bool visited[n]={};
		int count=0;
		for (int i = 0; i <n; ++i)
		{
			if(!visited[i]){
				dfs(i,visited,adj);
				count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}