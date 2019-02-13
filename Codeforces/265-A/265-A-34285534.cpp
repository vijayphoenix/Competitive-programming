#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string s,r;
	int i=0,count=0;
	cin>>s>>r;
	for(i=0;i<r.size()&&count<s.size();i++)
	{
		if(s[count]==r[i])count++;
		
	}
	cout<<count+1;
	return 0;
	
}