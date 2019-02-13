#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli dp[1000001]={};

lli maxsum(lli a){
	if (a<=1000000)
	{
		return dp[a];
	}
	return maxsum(a/2)+maxsum(a/3)+maxsum(a/4);
}
int main(){
	lli test;
	for (lli i = 0; i < 1000001; ++i)
	{
		if(i<12)dp[i]=i;
		else dp[i]=dp[i/2]+dp[i/3]+dp[i/4];
	}
	while(cin>>test){
		cout<<maxsum(test)<<"\n";
	}
	return 0;
}