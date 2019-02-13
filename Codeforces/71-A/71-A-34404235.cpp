#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,temp;
	cin>>n;
	string s;
	while(n--)
	{
		cin>>s;
		temp=s.size();
		if(temp>10)cout<<s[0]<<temp-2<<s[temp-1]<<endl;
		else
		cout<<s<<endl;
	}
	return 0;
}