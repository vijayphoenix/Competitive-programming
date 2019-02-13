#include<bits/stdc++.h>
#define lli long long int

using namespace std;
bool flag=true;

int diff(int i){
	return i==1?2:1;
}

void dfs(int i,bool visited[],int color[],list<int>adj[]){
	if(!visited[i]){
		visited[i]=true;
		for(auto it=adj[i].begin();it!=adj[i].end();it++){
			if(color[*it]==0)color[*it]=diff(color[i]);
			else {
				if(color[*it]!=diff(color[i])){
					flag=false;
					break;
				}
			}
			dfs(*it,visited,color,adj);
		}
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test,n,m,x,y;
	cin>>test;
	for(int j=1;j<=test;j++){
		cin>>n>>m;
		list<int>adj[n+1];
		for (int i = 0; i < m; ++i)
		{
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		bool visited[n+1]={};
		int color[n+1]={};
		flag=true;
		for (int i = 1; i <=n and flag==true; ++i)
		{
			if(!visited[i])color[i]=1;
			dfs(i,visited,color,adj);
		}
		cout<<"Scenario #"<<j<<":\n";
		flag?cout<<"No suspicious bugs found!\n":cout<<"Suspicious bugs found!\n";
	}
	return 0;
}