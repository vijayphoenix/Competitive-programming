#include <iostream>
using namespace std;

int main() 
{
	int a[4],i,j;
	scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
	for(i=0;i<3;i++)
	{for(j=i+1;j<4;j++)
		if(a[i]==a[j])a[j]=0;
	}
	int count=0;
	for(i=1;i<4;i++)
	{if(a[i]==0)count++;}
	cout<<count;
}