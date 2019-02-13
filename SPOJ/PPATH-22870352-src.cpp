#include<bits/stdc++.h>
using namespace std;
const int len=1061;
bool diff(int a,int b){
    int count=0;
for (int i = 0; i < 4; ++i){
    if(a%10!=b%10)count++;
    a/=10;b/=10;
}
    if (count==1)return true;
    return false;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    bool a[10000]={};
    vector<int>v;
    for(int i=2;i<=100;i++){
        if(!a[i]){
            for(int j=i*i;j<=10000;j+=i){
                a[j]=true;
            }
        }
    }
    for(int i=1000;i<10000;i++){
        if(!a[i])v.push_back(i);
    }
    list<int> adj[10000];
    for (int i = 0; i < len; ++i)
    {
        for (int j = i+1; j <len; ++j)
        {
            if(diff(v[i],v[j])){
                // cout<<"hello";
                adj[v[i]].push_back(v[j]);
                adj[v[j]].push_back(v[i]);
            }
        }
    }
    list<int>::iterator it;
    int test,x,y,temp;
    cin>>test;
    while(test--){
        cin>>x>>y;
        if(x==y){
            cout<<"0\n";
            continue;
        }
        int count=1;
        bool visited[10000]={},found=false;
        int parent[10000]={};
        queue<int>q;
        q.push(x);
        while(!q.empty() and !found){
            temp=q.front();
            if(!visited[temp]){
                for(it=adj[temp].begin();it!=adj[temp].end();it++){
                    if(parent[*it]==0)parent[*it]=temp;
                    if(*it==y)found=true;
                    q.push(*it);
                }
                visited[temp]=true;
            }
            q.pop();
        }
        if(parent[y]==0){
            cout<<"Impossible\n";
        }
        else{
            while(parent[y]!=x){
                count++;
                y=parent[y];
            }
            cout<<count<<"\n";
        }
    }
    return 0;
}