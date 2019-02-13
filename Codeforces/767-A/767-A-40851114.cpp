#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n,i,x,k;
	cin>>n;
	k=n;
	int a[100001]={};
	for(i=n;i>=1;i--){
		cin>>x;
		a[x]=1;
		while(a[k]==1 && k>=i){
			cout<<k<<" ";
			k--;
		}
		cout<<"\n";
	}
}