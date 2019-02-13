#include <bits/stdc++.h>
using namespace std;

int main() 
{
	char c,ch;
	int temp,sum=0;
	scanf("{%c%c",&c,&ch);
	int a[26]={0};
	if(c=='}'){cout<<0;return 0;}
	while(ch!='}')
	{
		temp=c-'a';
		a[temp]=1;
		cin>>c>>ch;
	}
	temp=c-'a';
	a[temp]=1;
	for(int i=0;i<26;i++)
	{sum+=a[i];}
	cout<<sum;
	return 0;
}