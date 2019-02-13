#include <iostream>
using namespace std;
int main() 
{
	int k,r;
	cin>>k>>r;
	k=k%10;
	int count=0,temp=0;
	while(1)
	{
		if(temp==r)break;
		temp+=k;
		temp%=10;
		count++;
		if(temp==0)break;
	}
	count==0?cout<<"1":cout<<count;
	
	return 0;
}