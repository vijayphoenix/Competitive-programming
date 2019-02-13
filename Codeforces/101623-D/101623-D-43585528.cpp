#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli answer(lli a, lli b,lli c){
	return a*a+b*b+c*c + 7*min(a,min(b,c));
}

int main(){
	int n;
	cin>>n;
	while(n--){
		lli a,b,c,d;
		cin>>a>>b>>c>>d;
		int i,j,k;
		lli ans=0;
		for (i = 0; i <=d and i<50; ++i)
		{
			for (j = 0; i +j <=d and j<50 ; ++j)	
			{
				k=d-i-j;
				ans=max(ans,answer(a+i,b+j,c+k));
				ans=max(ans,answer(a+k,b+i,c+j));
				ans=max(ans,answer(a+j,b+k,c+i));
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}