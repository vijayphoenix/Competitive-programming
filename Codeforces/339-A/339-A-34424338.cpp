#include <iostream>
using namespace std;
int main() 
{
	int a,b[3]={0},count=0;
	char c;
	while(c!='\n')
	{
		scanf("%d",&a);
		b[a-1]++;
		count++;
		c=getchar();
	}
	for(int i=0;i<3;i++)
	{
		while(b[i]--)
		{
			count--;
			if(count==0){cout<<i+1;return 0;}
			printf("%d+",i+1);
		}
	}
	return 0;
}