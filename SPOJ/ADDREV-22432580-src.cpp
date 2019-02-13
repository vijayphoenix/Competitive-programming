#include<bits/stdc++.h>
#define lli long long int

lli rev(lli x){
	lli temp=0;
	while(x>0){
		temp=temp*10+x%10;
		x/=10;
	}
	return temp;
}

using namespace std;
int main(){
	int test;cin>>test;
	while(test--) {
		lli x, y,sum;
		cin>>x>>y;
		sum=rev(x)+rev(y);
		cout<<rev(sum)<<"\n";
	}
	return 0;
}