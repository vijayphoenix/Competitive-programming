#include <iostream>
using namespace std;
int main() 
{
	int n,b,d;
	cin>>n>>b>>d;
	int sum=0,t,count=0;
	while(n--)
	{
		scanf("%d",&t);
		if(t>b)continue;
		sum+=t;
		if(sum>d)
		{
			count++;
			sum=0;
		}
	}
	cout<<count;
	return 0;
}