#include<bits/stdc++.h>
#define lli long long int

using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string s,r;
		cin>>s>>r;
		int l1=s.length(),l2=r.length();
		int a[l1+1][l2+1]={};
		for (int i = 0; i <=l1; ++i)
		{
			for (int j = 0; j <=l2; ++j)
			{
				if(i==0)a[i][j]=j;
				else if(j==0)a[i][j]=i;
				else if(s[i-1]==r[j-1])a[i][j]=a[i-1][j-1];
				else a[i][j]=min(a[i-1][j],min(a[i-1][j-1],a[i][j-1]))+1;
			}
		}
		cout<<a[l1][l2]<<"\n";
	}
	return 0;
}