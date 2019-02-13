#include<bits/stdc++.h>
#define lli long long int

using namespace std;
int main(){
	int test;
	cin>>test;
	int n=1e4,i=2;
	n*=4;
		bool a[n+1]={};
		vector<int> v;
		a[0]=a[1]=true;
		while(i<=n){
			for (int j = i*i; j <= n; j+=i)
			{
				a[j]=true;
			}
			v.push_back(i);
			i++;
			while(a[i]!=false) {
			    i++;
			}
		}
	while(test--) {
		int p,q;
		cin>>q>>p;
		bool prime[p-q+1]={false};
		if(q<2)q=2;
		for (auto it = v.begin(); it < v.end() && *it**it<=p;it++){
			int j=ceil((double)q/(*it))**it;
			if(j==*it)j+=j;
			for(;j <= p; j+=*it)
				prime[j-q]=true;
		}
		for (int j = q; j <=p; ++j){
			if (prime[j-q]==false)
			{
				cout<<j<<"\n";
			}
		}
		cout<<"\n";
	}
	return 0;
}