#include <iostream>
using namespace std;
int main() 
{
	int a[4],sum=0,temp;
	scanf("%d %d %d %d\n",&a[0],&a[1],&a[2],&a[3]);
	char c;
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