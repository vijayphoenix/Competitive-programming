#include <bits/stdc++.h>
using namespace std;
#define MAX 100009
bool check[MAX]={false};
int total=0;
int dfs(vector<int> v[],int root)
{
	int len[]={0,-1,-1};

    check[root]=1;
    for(int i=0;i<v[root].size();i++)
    {
    	if(!check[v[root][i]]){
    		len[0]=dfs(v,v[root][i]);
    		sort(len,len+3);
    	}
    }
    total=max(total,len[1]+len[2]+2);
    return len[2]+1;
}

int main()
{
    int n,a,b;
    cin>>n;
    vector<int> v[n+1];
    for(int i=0;i<n-1;i++){
        scanf("%d%d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(v,1);
    cout<<total<<endl;
}