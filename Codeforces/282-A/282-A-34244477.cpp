#include<iostream>
//#include<algorithm>
//#include<cmath>
//#include<string>
using namespace std;
int main()
{	
	int n,i=0;
	scanf("%d",&n);
	string a;
	int k=0;
	for(k=0;k<n;k++)
	{
		cin>>a;
		if(a[1]=='+') i++;
		else i--;
	}
	cout<<i;
	return 0;
}