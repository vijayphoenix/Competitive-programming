#include <bits/stdc++.h>
using namespace std;
int main() {
	int test,n,i;
	cin>>test;
	int a[100];
	while(test--){
		cin>>n;
		int sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sum+=1;
		int b[sum],c[sum];
		for(int i=0;i<sum;i++)
		{
			b[i]=0;
			c[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			
			for(int j=0;j<sum;j++)
			{
				if((j-a[i]>=0)&&(b[j-a[i]+1]==1))
				{
					
					c[j+1]=1;
					
				}
				
			}
			
				for(int j=0;j<sum;j++)
				{
					b[j]=c[j];
				}
			b[a[i]]=c[a[i]]=1;
			for(int j=0;j<sum;j++)
			{
				
		}
			
		}
		
		int sum2=0;
		for(int i=0;i<sum;i++)
		{
			sum2+=b[i]*i;
		}
		cout<<sum2<<endl;





	}
	return 0;
}