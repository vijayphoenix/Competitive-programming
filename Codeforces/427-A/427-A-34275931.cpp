#include <iostream>
using namespace std;
int main() 
{
	int n,temp,count=0,sum=0;
	cin>>n;
	while(n--)
	{
		scanf("%d",&temp);
		sum+=temp;
		if(sum<0){sum=0;count++;}
	}
	cout<<count;
}