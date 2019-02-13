#include <iostream>
using namespace std;
int main() 
{
	long long int n,m,count=0,d;
	cin>>n>>m;
	char c;
	while(n--)
	{
		cin>>c>>d;
		if(c=='+')m+=d;
		else
		{
			if(m<d)count++;
			else m-=d;
		}
	}
	cout<<m<<" "<<count;
	return 0;
}