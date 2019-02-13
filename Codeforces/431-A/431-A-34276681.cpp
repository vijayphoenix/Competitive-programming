#include <iostream>
using namespace std;
int main() 
{
	int a[4],sum=0,temp;
	for(int i=0;i<4;i++)cin>>a[i];
	char c;
	c=getchar();
	c=getchar();
	while(c!='\n')
	{
		temp=c-49;
		sum+=a[temp];
		c=getchar();
		
	}
	cout<<sum;
	return 0;
}