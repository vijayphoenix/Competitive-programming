#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	char c,temp='a';
	int sum=0;
	c=getchar();
	while(c!='\n')
	{
		sum+=min(abs(c-temp),26-abs((c-temp)));
		temp=c;
		c=getchar();
	}
	cout<<sum;
	return 0;
}