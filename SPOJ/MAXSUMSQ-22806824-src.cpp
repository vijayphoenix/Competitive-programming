#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)cin>>a[i];
		long long int mini=0,sum=0,maxsum=INT_MIN,count=0,mincnt=1;
		for(int i=0;i<n;++i){
			sum+= a[i];
			if(sum - mini > maxsum){
				maxsum = sum-mini;
				count = mincnt;
			}
			else if(sum -mini == maxsum)count+=mincnt;
			if(sum< mini){
				mini = sum;
				mincnt = 0;
			}
			if(sum==mini)mincnt++;
		}
		cout<<maxsum<<" "<<count<<endl;
	}
}