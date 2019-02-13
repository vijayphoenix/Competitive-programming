#include<bits/stdc++.h>
#define lli long long int

using namespace std;
int main(){
	int test,n,c;
	cin>>test;
	while(test--){
		cin>>n>>c;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int l=a[0],r=a[n-1],mid;
		while(l<=r) {
		    mid=l+(r-l)/2;
		    int i=0,j=1,temp=1;
		    while(temp<c and i<n and j<n)
		    {		    	
		    	if (a[j]-a[i]>=mid)
		    	{
		    		i=j;j++;temp++;
		    	}
		    	else j++;
		    }
		    if (temp==c)
		    {
		    	l=mid+1;	
		    }
		    else r=mid-1;
		}
		cout<<r<<"\n";
	}
	return 0;
}