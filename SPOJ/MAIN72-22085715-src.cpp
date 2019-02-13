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
			b[i]=-1;
			
		}
		for(int i=0;i<n;i++)
		{
			for(int j=1;j<sum;j++)
			{
				if((j-a[i]>=0)&&(b[j-a[i]]!=-1)&&(b[j-a[i]]!=i)&&(b[j]==-1))
				{			
					b[j]=i;
				}
				
			}		
			if(b[a[i]]==-1)b[a[i]]=i;	
			
		}
		int sum2=0;
		for(int i=0;i<sum;i++)
		{
			if(b[i]!=-1)
			{
			sum2+=i;
			}
		}
		cout<<sum2<<endl;
	}
	return 0;
}