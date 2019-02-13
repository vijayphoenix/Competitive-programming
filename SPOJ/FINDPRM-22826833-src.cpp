#include<bits/stdc++.h>

using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int *count=new int[10000001];
	bool *a=new bool[10000001];
	a[0]=a[1]=true;
	for (int i = 2; i*i <=10000000; i++)
	{
		if(a[i])continue;
		for (int j = i*i; j <=10000000; j+=i)a[j]=true;
	}
	count[2]=1;
	for (int i = 3; i < 10000001; ++i)
	{
		count[i]=count[i-1];
		if(!a[i])count[i]++;
	}
	int test,n;
	cin>>test;
	while(test--){
		cin>>n;
		cout<<count[n]-count[n/2]<<"\n";
	}
	delete[] a;
	delete[] count;
	return 0;
}