#include <iostream>
using namespace std;
int main() 
{
	int n,i=0;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]-1]=i;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]+1);
	}
}