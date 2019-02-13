#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h> 

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int len=s.length();
		int dp[len+1][len+1]={};
		for (int i = 0; i <=len; ++i)
		{
			for (int j = 0; j <=len; ++j)
			{
				if(i==0||j==0)dp[i][j]=0;
				else if(s[i-1]==s[len-j])dp[i][j]=1+dp[i-1][j-1];
				else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
		cout<<len-dp[len][len]<<"\n";
	}
	return 0;
}